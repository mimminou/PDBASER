from io import StringIO

from pdb2pqr import aa
from pdb2pqr import biomolecule as biomol
from pdb2pqr.ligand.mol2 import Mol2Molecule
from pdb2pqr.config import REPAIR_LIMIT
from pdb2pqr.utilities import noninteger_charge


def setup_molecule(pdblist, definition, ligand_path):

    if ligand_path is not None:
        ligand = Mol2Molecule()
        with open(ligand_path, "rt", encoding="utf-8") as ligand_file:
            ligand.read(ligand_file)
    else:
        ligand = None
    biomolecule = biomol.Biomolecule(pdblist, definition)
    for residue in biomolecule.residues:
        multoccupancy = False
        for atom in residue.atoms:
            if atom.alt_loc != "":
                multoccupancy = True
                txt = f"Multiple occupancies found: {atom.name} in {residue}."
        if multoccupancy:
            err = (
                f"Multiple occupancies found in {residue}. At least one of "
                "the instances is being ignored."
            )
    return biomolecule, definition, ligand


def drop_water(pdblist):
    """Drop waters from a list of PDB records.
    :param pdb_list:  list of PDB records as returned by io.get_molecule
    :type pdb_list:  [str]
    :return:  new list of PDB records with waters removed.
    :rtype:  [str]
    """
    pdblist_new = []
    for record in pdblist:
        record_type = record.record_type()
        if (
            record_type in ["HETATM", "ATOM", "SIGATM", "SEQADV"]
            and record.res_name in aa.WAT.water_residue_names
        ):
            continue
        pdblist_new.append(record)
    return pdblist_new

def is_repairable(biomolecule, has_ligand):
    """Determine if the biomolecule can be (or needs to be) repaired.
    """

    num_heavy = biomolecule.num_heavy
    num_missing = biomolecule.num_missing_heavy
    if num_heavy == 0:
        if not has_ligand:
            err = (
                "No biomolecule heavy atoms found and no ligand present. "
                "Unable to proceed.  You may also see this message if "
                "PDB2PQR does not have parameters for any residue in your "
                "biomolecule."
            )
            raise ValueError(err)
            
        else:
            err = (
                "No heavy atoms found but a ligand is present. Proceeding "
                "with caution."
            )
            return False
    if num_missing == 0:
        return False
    miss_frac = float(num_missing) / float(num_heavy)
    if miss_frac > REPAIR_LIMIT:
        return False
    return True


def assign_titration_state(biomolecul, forcefield):
        ## Assign titration states to protein
    bml = biomolecul
    ffield = forcefield
    bml.set_states()
    matched_atoms, missing_atoms = bml.apply_force_field(ffield)
    total_charge = 0
    for residue in bml.residues:
        charge = residue.charge
        charge_err = noninteger_charge(charge)
        if charge_err:
            #print(f"Residue {residue} has non-integer charge:  {charge_err}")
            pass
        total_charge += charge
    charge_err = noninteger_charge(total_charge)
    if charge_err:
        raise ValueError(charge_err)

    return matched_atoms, missing_atoms

def write_molecule(args, pqr_lines, header_lines, missing_lines, is_cif):
    outfile = StringIO()
    # Adding whitespaces if --whitespace is in the options
    for line in pqr_lines:
        if args.whitespace:
            if line[0:4] == "ATOM" or line[0:6] == "HETATM":
                newline = (
                        line[0:6]
                        + " "
                        + line[6:16]
                        + " "
                        + line[16:38]
                        + " "
                        + line[38:46]
                        + " "
                        + line[46:]
                )
                outfile.write(newline)
        elif line[0:3] != "TER" or not is_cif:
            outfile.write(line)
    if is_cif:
        outfile.write("#\n")
    resuult = outfile.getvalue()
    outfile.close()
    return resuult

def write_pqr(args, pqr_lines, header_lines, missing_lines, is_cif):
    """Print PQR-format output to specified file

    .. todo::  Move this to another module (io)
    :param argparse.Namespace args:  command-line arguments
    :param [str] pqr_lines:  output lines (records)
    :param [str] header_lines:  header lines
    :param [str] missing_lines:  lines describing missing atoms (should go
        in header)
    :param bool is_cif:  flag indicating CIF format
    """
    with open(args.output_pqr, "wt") as outfile:
        # Adding whitespaces if --whitespace is in the options
        for line in pqr_lines:
            if args.whitespace:
                if line[0:4] == "ATOM" or line[0:6] == "HETATM":
                    newline = (
                        line[0:6]
                        + " "
                        + line[6:16]
                        + " "
                        + line[16:38]
                        + " "
                        + line[38:46]
                        + " "
                        + line[46:]
                    )
                    outfile.write(newline)
            elif line[0:3] != "TER" or not is_cif:
                outfile.write(line)
        if is_cif:
            outfile.write("#\n")
