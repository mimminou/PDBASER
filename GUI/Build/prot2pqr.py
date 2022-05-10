from io import StringIO
from pdb2pqr import io as pdb2pqr_io
from pdb2pqr import forcefield, hydrogens, debump, pdb
import inspect
from os.path import dirname
from propka_script import run_propka
from utility import setup_molecule, is_repairable, assign_titration_state, write_molecule, write_pqr
from main_parser import build_main_parser
from propka.lib import build_parser as propka_build_parser
import sys
module_reference = sys.modules[__name__]


PDB2PQ_DATA_DIR = dirname(inspect.getfile(forcefield)) + "/dat/" # FIELDS Default LOCATION, Might change depending on compilation problems

def generate_target_H(PDB_FILE, OUTPUT_FILE, force_field="PARSE", USE_PROPKA=True, PH=7, WRITE_TO_OUTPUT= False):
    # PDB2PQ_DATA_DIR = "/dat/"
    # SETUP ARGS ( because we are not using commandline ... this is frustrating tbh )
    # Fortunately Argparse converts all " - " characters to " _ " when parsing .... this will save this code
    # also , Argparse fortunately allows modiftying args when accessing them as attributes ... this will allow us to pass any type of data ( string io for example )
    PARSER = build_main_parser()
    PARSER = propka_build_parser(PARSER)

    if isinstance(PDB_FILE, StringIO):      # Try to circumvent ARG Parser to pass a StringIO() ... i hate this
        mockPDB_FILE = "random stuff"
        args = PARSER.parse_args([mockPDB_FILE, OUTPUT_FILE])
        PDB_FILE.seek(0)
        args.input_path = PDB_FILE
    else:
        args = PARSER.parse_args([PDB_FILE, OUTPUT_FILE])
    args.log_level = "INFO"
    args.ff = force_field
    args.ph = PH

    if (USE_PROPKA):
        args.pka_method = "propka"


    PARSE = PDB2PQ_DATA_DIR + "PARSE.DAT"  #PARSE FIELD
    AMBER = PDB2PQ_DATA_DIR + "AMBER.DAT"  #AMBER FIELD
    CHARMM = PDB2PQ_DATA_DIR + "CHARMM.DAT"  #CHARMM FIELD
    # pdb_file, is_cif = pdb2pqr_io.get_molecule()
    pdb_file, errors = pdb.read_pdb(args.input_path)  #? DOES NOT OPEN STRING IO FILES, ONLY REAL PDB FILES
    is_cif = False   # THIS WILL REMAIN LIKE THIS UNTIL TODO " ADD CIF FILE SUPPORT "
    bml, bmlDef, ligand = setup_molecule(pdb_file, pdb2pqr_io.get_definitions(), None) #TODO : Maybe ADD legit ligand protonation later instead of the one done by pybel

    if (force_field=="PARSE"):
        ffield = forcefield.Forcefield(force_field, bmlDef, PARSE) # first arg doesnt matter if 3rd arg exist
    #? use elif in case we add other force fields
    if (force_field=="AMBER"):
        ffield = forcefield.Forcefield(force_field, bmlDef, AMBER) # first arg doesnt matter if 3rd arg exist
    elif(force_field=="CHARMM"):
        ffield = forcefield.Forcefield(force_field, bmlDef, CHARMM)


    hydrogen_handler = hydrogens.create_handler()
    debumper = debump.Debump(bml)
    hydrogen_routines = hydrogens.HydrogenRoutines(debumper, hydrogen_handler)

    # Update Bonds ? ( no idea what this does i'm just following implenetation )
    bml.update_bonds()
    if(is_repairable(bml, True)):
        bml.repair_heavy()

    # Optimize S-S bridges
    bml.update_ss_bridges()
    try:
        debumper.debump_biomolecule()
    except:
        print("Cannot debump, skipping")

    # Remove Hydrogens if existing
    bml.remove_hydrogens()
    # Now generate titration states if using PROPKA
    pka_df = None

    if(USE_PROPKA):
        pka_df, pka_str = run_propka(args=args, biomolecule=bml)
        bml.apply_pka_values(
            ffield.name,
            PH,
            {f"{row['res_name']} {row['res_num']} {row['chain_id']}": row["pKa"] for row in pka_df if row["group_label"].startswith(row["res_name"])},
        )

    ## Add hydrogens
    bml.add_hydrogens()

    ##Optimize Hydrogens and all molecules, and then cleanup
    hydrogen_routines.set_optimizeable_hydrogens()
    bml.hold_residues(None)
    hydrogen_routines.initialize_full_optimization()
    hydrogen_routines.optimize_hydrogens()
    hydrogen_routines.cleanup()

    #Assign titration states according to force field
    try:
        matched_atoms, missing_atoms = assign_titration_state(bml, ffield)
    except:
        print("Error in titration assignment... aborting")

    ## Regenerate Headers
    reslist, charge = bml.charge
    header = pdb2pqr_io.print_pqr_header(
        bml.pdblist,
        missing_atoms,
        reslist,
        charge,
        str(ffield),
        None,
        PH,
        None,
        include_old_header=True,
    )

    lines = pdb2pqr_io.print_biomolecule_atoms(matched_atoms, True)
    results = {
        "lines": lines,
        "header": header,
        "missed_residues": missing_atoms,
        "pka_df": pka_df,
    }
    if(WRITE_TO_OUTPUT):
        print("TRYING TO WRITE TO OUTPUT")
        write_pqr(
            args=args,
            pqr_lines=results["lines"],
            header_lines=results["header"],
            missing_lines=results["missed_residues"],
            is_cif=is_cif,
        )

    return (" ".join(lines))
#
# outf = ""
# PDB_FILE = open("propka_stringio_file.txt").read()
#
# ## tests :
# # tfile = open("C:/IC50MOLES/4EY7/4EY7_Chain_A_E20_604_BINDING_SITE.pdb", "rt").read()
# # pdbFile = StringIO(PDB_FILE)
# # generate_target_H(pdbFile, outf, "AMBER", True, 7)          #fixmew it is barely working ... need some further work
