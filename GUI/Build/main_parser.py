import argparse

from pdb2pqr.config import VERSION, TITLE_STR, FORCE_FIELDS
from propka import lib

def build_main_parser():
    """Build an argument parser.

    .. todo::
        Need separate argparse groups for PDB2PKA and PROPKA.
        These exist but need real options.

    :returns:  argument parser
    :rtype:  argparse.ArgumentParser
    """
    desc = TITLE_STR
    pars = argparse.ArgumentParser(
        prog="pdb2pqr",
        description=desc,
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
        conflict_handler="resolve",
    )
    pars.add_argument(
        "input_path",
        help="Input PDB path or ID (to be retrieved from RCSB database",
    )
    pars.add_argument("output_pqr", help="Output PQR path")
    pars.add_argument(
        "--log-level",
        help="Logging level",
        default="INFO",
        choices=["DEBUG", "INFO", "WARNING", "ERROR", "CRITICAL"],
    )
    grp1 = pars.add_argument_group(
        title="Mandatory options",
        description="One of the following options must be used",
    )
    grp1.add_argument(
        "--ff",
        choices=[ff.upper() for ff in FORCE_FIELDS],
        default="PARSE",
        help="The forcefield to use.",
    )
    grp1.add_argument(
        "--userff",
        help=(
            "The user-created forcefield file to use. Requires "
            "--usernames and overrides --ff"
        ),
    )
    grp1.add_argument(
        "--clean",
        action="store_true",
        default=False,
        help=(
            "Do no optimization, atom addition, or parameter assignment, "
            "just return the original PDB file in aligned format. Overrides "
            "--ff and --userff"
        ),
    )
    grp2 = pars.add_argument_group(title="General options")
    grp2.add_argument(
        "--nodebump",
        dest="debump",
        action="store_false",
        default=True,
        help="Do not perform the debumping operation",
    )
    grp2.add_argument(
        "--noopt",
        dest="opt",
        action="store_false",
        default=True,
        help="Do not perform hydrogen optimization",
    )
    grp2.add_argument(
        "--keep-chain",
        action="store_true",
        default=False,
        help="Keep the chain ID in the output PQR file",
    )
    grp2.add_argument(
        "--assign-only",
        action="store_true",
        default=False,
        help=(
            "Only assign charges and radii - do not add atoms, "
            "debump, or optimize."
        ),
    )
    grp2.add_argument(
        "--ffout",
        choices=[ff.upper() for ff in FORCE_FIELDS],
        help=(
            "Instead of using the standard canonical naming scheme for "
            "residue and atom names, use the names from the given forcefield"
        ),
    )
    grp2.add_argument(
        "--usernames",
        help=(
            "The user-created names file to use. Required if using --userff"
        ),
    )
    grp2.add_argument(
        "--apbs-input",
        help=(
            "Create a template APBS input file based on the generated PQR "
            "file at the specified location."
        ),
    )
    grp2.add_argument(
        "--pdb-output",
        default=None,
        help=(
            "Create a PDB file based on input. This will be missing charges "
            "and radii"
        ),
    )
    grp2.add_argument(
        "--ligand",
        help=(
            "Calculate the parameters for a single MOL2-format ligand at the "
            "path specified by this option.  The MOL2 ligand name should "
            "match only one ligand in the PDB file."
        ),
    )
    grp2.add_argument(
        "--whitespace",
        action="store_true",
        default=False,
        help=(
            "Insert whitespaces between atom name and residue name, between x "
            "and y, and between y and z."
        ),
    )
    grp2.add_argument(
        "--neutraln",
        action="store_true",
        default=False,
        help=(
            "Make the N-terminus of a protein neutral (default is "
            "charged). Requires PARSE force field."
        ),
    )
    grp2.add_argument(
        "--neutralc",
        action="store_true",
        default=False,
        help=(
            "Make the C-terminus of a protein neutral (default is "
            "charged). Requires PARSE force field."
        ),
    )
    grp2.add_argument(
        "--drop-water",
        action="store_true",
        default=False,
        help="Drop waters before processing biomolecule.",
    )
    grp2.add_argument(
        "--include-header",
        action="store_true",
        default=False,
        help=(
            "Include pdb header in pqr file. WARNING: The resulting PQR file "
            "will not work with APBS versions prior to 1.5"
        ),
    )
    grp3 = pars.add_argument_group(
        title="pKa options", description="Options for titration calculations"
    )
    grp3.add_argument(
        "--titration-state-method",
        dest="pka_method",
        choices=(["propka"]),
        help=(
            "Method used to calculate titration states. If a titration state "
            "method is selected, titratable residue charge states will be set "
            "by the pH value supplied by --with_ph"
        ),
    )
    grp3.add_argument(
        "--with-ph",
        dest="ph",
        type=float,
        action="store",
        default=7.0,
        help=(
            "pH values to use when applying the results of the selected pH "
            "calculation method."
        ),
    )
    pars = lib.build_parser(pars)

    # Override version flag set by PROPKA
    pars.add_argument(
        "--version", action="version", version=f"%(prog)s {VERSION}"
    )

    return pars
