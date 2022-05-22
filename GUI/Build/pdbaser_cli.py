import argparse
import os
from os import path
import pprint
import MolHandler_cli
from multiprocessing import Pool


class CLI_MAIN_APP:
    def __init__(self, args):
        self.args = args
        pass

    def argument_parser(self):
        parser = argparse.ArgumentParser(
            prog="PDBaser",
            description="PDBaser, Protein preparation made fast and easy",
            usage="\npdbaser -i [INPUT] -o [OUTPUT] \n"
                  "use pdbaser -h for further instructions"
        )
        required_group = parser.add_argument_group(title="Required arguments",)

        required_group.add_argument(
            "-i",
            "--input",
            required=True,
            dest="input_dir",
            help="""Input directory for pdbs, if a file is specified instead, it will only treat \
                    that file."""
        )
        required_group.add_argument(
            "-o",
            "--output",
            required=True,
            dest="output_dir",
            help="""Output directory for processed files ( only pass a path to a directory\
                    , PDBaser will take care of the rest )"""
        )

        ligand_group = parser.add_argument_group(title="Ligand arguments",
                                                 description="")

        protein_group = parser.add_argument_group(title="Protein arguments")

        protein_group.add_argument(
            "-c",
            "--chain",
            default=None,
            help="""eg: A, B, C etc..., if not specified, will treat all chains and will extract residues\
                    from all of them. If specified, will only treat the specified cha\
                    in and extract residues only from it (default False)."""
        )

        ligand_group.add_argument(
            "-r",
            "--residue",
            nargs="*",
            action="store",
            default=[None],
            help="name of residue, if not specified. If -r flag is present but no residue is specified, will extract all heteroatoms."
        )
        ligand_group.add_argument(
            "-f",
            "--format",
            default="mol2",
            choices=["mol2","pdb","sdf","smi"],
            help = "output format for the ligand ( pdb / mol2 / sdf / smi ) (default mol2)."
        )
        ligand_group.add_argument(
            "-png",
            action="store_true",
            default=False,
            dest="save_png",
            help="Save ligand 2D depiction as PNG (default False)."
        )
        ligand_group.add_argument(
            "-svg",
            action="store_true",
            default=False,
            dest="save_svg",
            help="Save ligand 2D depiction as SVG (default False)."
        )
        ligand_group.add_argument(
            "-pl",
            "--protonate-ligand",
            action="store_true",
            default=False,
            help="Add hydrogens to ligand (default False)."
        )
        protein_group.add_argument(
            "-cp",
            "--copy-protein",
            action="store_true",
            default=False,
            help="Copy the full PDB file to output, usefull to organize outputs (default False)."
        )
        protein_group.add_argument(
            "-w",
            "--keep-water",
            action="store_true",
            default=False,
            help="Keep water molecules (default False)."
        )
        protein_group.add_argument(
            "-pc",
            "--protonate-chain",
            action="store_true",
            default=False,
            help="Protonate the Extracted chains (default False)."
        )
        protein_group.add_argument(
            "-bs",
            "--binding-site",
            type=int,
            dest="binding_site_size",
            action="store",
            default=0,
            help="""Will generate a binding site with all Amino acids in the vicinity of\
                    the ligand(s), specify the radius as Angstroms (default False)."""
        )
        protein_group.add_argument(
            "-pbs",
            "--protonate-binding-site",
            action="store_true",
            default=False,
            help="Attempts to protonate the binding site if generated. (default FALSE)"
        )
        protein_group.add_argument(
            "-ff",
            "--force-field",
            default="PARSE",
            choices=["PARSE", "AMBER", "CHARMM"],
            help="Protonation Forcefields (Default PARSE)."
        )
        protein_group.add_argument(
            "-propka",
            "--use-propka",
            action="store_true",
            default=True,
            help="Generate titration states and protonate using PROPKA (Default True)."
        )
        protein_group.add_argument(
            "-ph",
            "--protonation-ph",
            action="store",
            type=int,
            default=7,
            help="Specify at which pH the protonation occures."
        )
        return parser

    @staticmethod
    def worker(file, parsed_args):
        MolHandler_cli.Extract_CLI(input_DIR=parsed_args.input_dir, Output_DIR=parsed_args.output_dir,
                                        PDB_FILE=file, Chain=parsed_args.chain,
                                        ligandExtractFormat=parsed_args.format,
                                        Residues=parsed_args.residue, saveFullProtein=parsed_args.copy_protein,
                                        saveDepictionPNG=parsed_args.save_png,
                                        saveDepictionSVG=parsed_args.save_svg,
                                        add_hydrogens=parsed_args.protonate_ligand,
                                        keep_waters=parsed_args.keep_water,
                                        protonate_chain=parsed_args.protonate_chain,
                                        binding_site_radius=parsed_args.binding_site_size,
                                        protonate_BS=parsed_args.protonate_binding_site,
                                        force_field=parsed_args.force_field, use_propka=parsed_args.use_propka,
                                        PH=parsed_args.protonation_ph)


    def run(self):
        run_args = self.argument_parser()
        parsed_args = run_args.parse_args()
        if not path.isdir(parsed_args.output_dir):
            run_args.error("(-o) Output should be a path to an existing directory")

        if len(parsed_args.residue) == 0 :
            parsed_args.residue = ["extract_all"]

        if path.isdir(parsed_args.input_dir):
            print("Running in batch mode")
            PDB_ARGS = []
            pool = Pool()
            pprint.pprint(vars(parsed_args))
            for file in os.listdir(parsed_args.input_dir):
                if file.lower().endswith((".pdb", ".ent", ".ent.gz", ".pdb.gz")):
                    PDB_ARGS.append((file, parsed_args))

            # Process files with multiprocessing :D, the more cores you have the faster you will finish
            pool.starmap(self.worker, PDB_ARGS)
            pool.close()

        else:
            print("Running in single protein mode")
            pprint.pprint(vars(parsed_args))
            file = path.basename(parsed_args.input_dir)
            parsed_args.input_dir = path.dirname(parsed_args.input_dir)
            self.worker(file, parsed_args)
