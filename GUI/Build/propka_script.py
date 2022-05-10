
import propka.output as pk_out
import propka.input as pk_in
from propka.parameters import Parameters
from propka.molecular_container import MolecularContainer
from io import StringIO
from pdb2pqr import io
from collections import OrderedDict


def run_propka(args, biomolecule):
    """Run a PROPKA calculation.

    :param args:  command-line arguments
    :type args:  argparse.Namespace
    :param biomolecule:  biomolecule object
    :type biomolecule:  Biomolecule
    :return:  (DataFrame-convertible table of assigned pKa values,
               pKa information from PROPKA)
    :rtype:  (list, str)
    """

    lines = io.print_biomolecule_atoms(
        atomlist=biomolecule.atoms, chainflag=args.keep_chain, pdbfile=True
    )
    with StringIO() as pdb_path:
        pdb_path.writelines(lines)
        parameters = pk_in.read_parameter_file(args.parameters, Parameters())
        molecule = MolecularContainer(parameters, args)
        molecule = pk_in.read_molecule_file("input.pdb", molecule, pdb_path)

    molecule.calculate_pka()
    print(" Propka is calculating pka ")

    lines = []
    lines.append(
        pk_out.get_folding_profile_section(
            molecule,
            conformation="AVR",
            reference="neutral",
            window=[0.0, 14.0, 1.0],
        )
    )
    lines.append(
        pk_out.get_charge_profile_section(molecule, conformation="AVR")
    )
    lines.append(pk_out.get_the_line())
    pka_str = "\n".join(lines)

    # Summarize in pKas in DataFrame for later use
    conformation = molecule.conformations["AVR"]
    rows = []
    for group in conformation.groups:
        row_dict = OrderedDict()
        atom = group.atom
        row_dict["res_num"] = atom.res_num
        row_dict["ins_code"] = atom.icode
        row_dict["res_name"] = atom.res_name
        row_dict["chain_id"] = atom.chain_id
        row_dict["group_label"] = group.label
        row_dict["group_type"] = getattr(group, "type", None)
        row_dict["pKa"] = group.pka_value
        row_dict["model_pKa"] = group.model_pka
        row_dict["buried"] = group.buried
        if group.coupled_titrating_group:
            row_dict["coupled_group"] = group.coupled_titrating_group.label
        else:
            row_dict["coupled_group"] = None
        rows.append(row_dict)
    return rows, pka_str
