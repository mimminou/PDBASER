import os
import pathlib
from Bio.PDB import PDBParser, PDBIO, Select, NeighborSearch, Selection
from io import StringIO, BytesIO
from shutil import copyfile
from logging import debug
from oasa.molfile import text_to_mol
from oasa.coords_generator import coords_generator
from oasa.cairo_out import cairo_out
from gzip import open as gzOpen
from platform import system
from os import environ, path


    ##This will check Log sizes and delete exceeding ones ( for end users, they can send logs to me to hopefully find bugs )

try:
    if (path.getsize("Slog.txt")/1024.0 > 500):
        os.remove("Slog.txt")
    if (path.getsize("errors.txt")/1024.0 > 500):
        os.remove("errors.txt")
except Exception:
    pass


 ## Check if we are running on windows and are running compiled version :
if system().lower() == "windows" and "__compiled__" in globals():
    print("running windows and compiled")
    if "BABEL_DATADIR" in environ:
        del environ["BABEL_DATADIR"]  ## THIS IS NECESSARY TO PREVENT ENVIRONMENT CONFLICT WITH ANY INSTALLED OPENBABEL
    from obabel.openbabel import pybel  # This is the import for compiled version, i manually copy /obabel_pyXX/openbabel the dir of output after compiling

elif system().lower() == "windows":     # this will know if i'm running on windows and interpreted or not
    if "BABEL_DATADIR" in environ:
        del environ["BABEL_DATADIR"]  ## THIS IS NECESSARY TO PREVENT ENVIRONMENT CONFLICT WITH ANY INSTALLED OPENBABEL IN WINDOWS
    from openbabel import pybel

else:
    print("Not running windows or not compiled")
    from openbabel import pybel



## THIS IS VERSION 1.9 OF THIS SCRIPT ...



def is_het(residue):
    res = residue.id[0]
    return res not in (" ", "W")


def SelectWater(residue):
    res = residue.id[0]
    return res in ("W")


class BINDING_SITE_SELECT(Select):
    def __init__(self, binding_site_residues, keep_waters=True):
        self.binding_site_residues = binding_site_residues
        self.keep_waters = keep_waters

    def accept_residue(self, residue):
        if(self.keep_waters):
            if residue in self.binding_site_residues:
                return 1

        else:
            if residue in self.binding_site_residues and not SelectWater(residue):
                return 1


class NonHetSelect(Select):
    def accept_residue(self, residue):
        return 1 if residue.id[0] == " " else 0


class KeepWaterSelect(Select):
    def accept_residue(self, residue):
        return 1 if not is_het(residue) else 0


class ResidueSelect(Select):
    def __init__(self, chain, residue):
        self.chain = chain
        self.residue = residue

    def accept_chain(self, chain):
        return chain.id == self.chain.id

    def accept_residue(self, residue):
        # ? IGNORE WATER AND OTHER HETEROMOLECULES
        return residue == self.residue and is_het(residue)


def Extract(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat=None, Residues=None, saveFullProtein=False,
            saveDepictionPNG=False, saveDepictionSVG=False, add_hydrogens=False, keep_waters=False, binding_site_radius = 0):  ## Main Function
    extractedResidues = []
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False
    nonHetSelect = NonHetSelect()
    keepWaterSelect = KeepWaterSelect()
    try:
        binding_site_radius = int(binding_site_radius)
    except Exception as w:
        print("Warning, No radius has been selected, defaulting to 7 Angstroms")
        binding_site_radius = 7

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR + "/" + PDB_FILE, "rt")

        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    if ligandExtractFormat is None:
        ligandExtractFormat = "pdb"
    pdbParser = PDBParser()
    pdb = pdbParser.get_structure(PDB_FILE, Structure)
    io = PDBIO()
    io.set_structure(pdb)
    PDB_ID = PDB_FILE.replace(".pdb", "").replace(".ent", "").replace(".gz", "")
    pathlib.Path(Output_DIR + "/" + PDB_ID).mkdir(parents=True, exist_ok=True)
    if PDB_ID.startswith("pdb"):            ##? To Handle PDB files downloaded from the RCSPDB, if you name your files manually starting with "pdb" this can break stuff
        PDB_Name = PDB_ID[3:]
    else:
        PDB_Name = PDB_ID

    for model in pdb:
        for residue in model[Chain]:  ## ITERATE OVER CHAINS
            resSelect = ResidueSelect(model[Chain], residue)
            if (Residues is None) or (not residue):
                break
            elif (not is_het(residue)):
                continue
            elif str((residue.id[0], residue.id[1])).replace("H_", "") in str(Residues):  ## REMOVE H_ PREFIX

                residue.id[0].replace(" ", "")
                extractedResidues.append(residue.id[0].replace("H_", "") + "_" + str(residue.id[1]))
                resname = residue.id[0].replace("H_", "") + "_" + str(residue.id[1])
                # SAVE RESIDUE IN VIRTUAL FILE
                debug("SAVING TO VIRTUAL FILE")
                virtualFilePDBFormat = StringIO()
                io.save(virtualFilePDBFormat, resSelect)
                ## CONVERT RESIDUE TO SAVE IT IN OUTPUT DIRECTORY
                if ligandExtractFormat == "smiles":
                    ligandExtractFormat = "smi"

                filenameOfOutput = Output_DIR + "/" + PDB_ID + "/" + PDB_Name + f"_{Chain}_" + \
                                   residue.id[0].replace("H_", "") + "_" + str(residue.id[1])
                molecule = pybel.readstring("pdb", virtualFilePDBFormat.getvalue())

                if (add_hydrogens):  # ADD HYDROGEN
                    if not ligandExtractFormat == "smi":
                        molecule.addh()

                virtualString = StringIO(molecule.write(ligandExtractFormat))
                virtualString.seek(0)

                if ligandExtractFormat == "sdf":
                    virtualString.writelines(resname + "\n")
                    virtualString.seek(0, 0)
                    content = virtualString.readlines()
                    content.insert(2, "Extracted with PDBaser")  ## INSERT THIS IN 3rd Line
                    VS = "".join(content)
                    virtualString = StringIO(VS)

                elif ligandExtractFormat == "mol2":
                    virtualString.seek(0, 0)  ## SKIP THE FIRST LINE OF THE HEADER IN TRIPOS MOL2 FILES
                    content = virtualString.readlines()
                    content.pop(1)
                    content.insert(1, resname + "\n")
                    VS = "".join(content)
                    virtualString = StringIO(VS)

                elif ligandExtractFormat == "smi":
                    # todo FIX LIGAND NAME IN SMI FILE FORMAT
                    pass

                if (add_hydrogens):
                    with open(filenameOfOutput + "_H." + ligandExtractFormat,
                              "w") as savedFile:  ## ITS LATE AND I WAS LAZY, I JUST ADDED _H AS A QUICK FIX, I COULD HAVE DONE THIS BETTER I KNOW ...
                        savedFile.write(virtualString.getvalue())
                else:
                    with open(filenameOfOutput + "." + ligandExtractFormat, "w") as savedFile:
                        savedFile.write(virtualString.getvalue())

                if (binding_site_radius > 0):                 # THIS GENERATES THE BINDING SITE
                    extractedResidues.append(generateBindingSite(pdb[0], io, PDB_Name, PDB_ID, Chain, Output_DIR, residue, binding_site_radius, keep_waters))

                # Check IF SAVE DEPICTION IS TRUE
                if (saveDepictionPNG):
                    with open(filenameOfOutput + ".png", "wb") as imgPNG:
                        imgPNG.write(drawImg(virtualFilePDBFormat, "png"))

                if (saveDepictionSVG):
                    with open(filenameOfOutput + ".svg", "wt") as imgSVG:
                        imgSVG.write(drawImg(virtualFilePDBFormat, "svg").decode("utf-8"))

                virtualFilePDBFormat.close()
                virtualString.close()

        else:
            debug("Saving Peptidic Chain . . .")
            io.set_structure(model[Chain])
            if(keep_waters):
                io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_Chain_{Chain}_W_.pdb", keepWaterSelect)
            else:
                io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_Chain_{Chain}.pdb", nonHetSelect)

            io.set_structure(pdb)
        # SAVING FULL PROTEIN
        if saveFullProtein:
            debug("saving full protein")
            copyfile(input_DIR + "/" + PDB_FILE, Output_DIR + "/" + PDB_ID + "/" + f"{PDB_Name}.pdb")
    if compressedFile:
        Structure.close()  # CLOSE STRING IO IF FILE IS COMPRESSED
    return extractedResidues


def drawImg(PDBString, format="png", getMW=False):  ## Used for generating coords and actual images
    drawingFile = PDBString
    drawingFile.seek(0)

    resMolecule = pybel.readstring("pdb",
                                   drawingFile.getvalue())  # Need to be converted to SDF / MOL for image depiction
    resMolecule.removeh()  # Removes H for better depiciton
    molMoleculeString = StringIO(resMolecule.write("mol"))  # write as smiles to the stringIO
    mol = text_to_mol(molMoleculeString.getvalue())
    coords_generator().calculate_coords(mol, 18, force=1)  ##Generate coordinates for depiction with bond length 18

    mycairoinstance = cairo_out(scaling=4, margin=15, font_size=10, bond_width=2.0,
                                background_color=(0, 0, 0, 0), bond_second_line_shortening=0.08,
                                color_bonds=False, space_around_atom=2.0,
                                line_width=1.2,
                                show_hydrogens_on_hetero=True,
                                wedge_width=5, align_coords=True)  ## Instantiante depictor, arguments are down below on this file

    virtualPicture = BytesIO()
    mycairoinstance.mol_to_cairo(mol, virtualPicture,
                                 format=format)  ## Save image to virtual picture as bytes with the specified format
    molMoleculeString.close()
    picture = virtualPicture.getvalue()
    virtualPicture.close()
    if (getMW == True):
        mw = "{:.2f}".format(mol.weight)
        return [picture, mw]
    return picture


def DrawMol(input_DIR, PDB_FILE, Chain, Residues=None, pdbFile=None):
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR + "/" + PDB_FILE, "rt")
        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    pdb = pdbFile
    io = PDBIO()
    picture = ""
    io.set_structure(pdb)
    for model in pdb:
        for residue in model[Chain]:  ## ITERATE OVER RESIDUES IN CHAIN
            resSelect = ResidueSelect(model[Chain], residue)
            if (Residues is None) or (not residue):
                print("residue is none")
                return
            if (not is_het(residue)):
                continue

            if str((residue.id[0], residue.id[1])).replace("H_", "") in str(Residues):  ## REMOVE H_ PREFIX
                residue.id[0].replace(" ", "")
                debug("RESIDUES TEST : ")
                debug(residue.id[0])
                # SAVE RESIDUE IN VIRTUAL FILE
                debug("SAVING TO VIRTUAL FILE")
                virtualFile = StringIO()
                io.save(virtualFile, resSelect)
                try:
                    picture, mw = drawImg(virtualFile,
                                          getMW=True)  # SAVE STRING IN THIS VARIABLE BEFORE CLOSING THE VIRTUAL FILE
                    if compressedFile:
                        Structure.close()
                    virtualFile.close()
                    return picture, mw

                except Exception as e:
                    print(e)
                    virtualFile.close()
                    picture = False
                virtualFile.close()

    if compressedFile:
        Structure.close()
    return picture



# generates binding site and extracts it
def generateBindingSite(pdb_STRCUT, pdbio, PDB_Name, PDB_ID, Chain, outputPath, selectedResidue, radius = 7, KeepWaters = True):
    Binding_Site = set()   # Create a set, much faster than List since order doesn't really matter
    residueAtoms = Selection.unfold_entities(selectedResidue, "A")
    querySet = Selection.unfold_entities(pdb_STRCUT, "A")
    ns = NeighborSearch(querySet)
    for atom in residueAtoms:
        Binding_Site.update(ns.search(atom.coord, radius, "R"))

    if (KeepWaters):
        bss = BINDING_SITE_SELECT(Binding_Site, keep_waters = True)
        fileName = f"{PDB_Name}_Chain_{Chain}_{selectedResidue.get_resname()}_{selectedResidue.id[1]}_BINDING_SITE_W"
        output_filename = outputPath + "/" + PDB_ID + "/" + fileName + ".pdb"
    else:
        bss = BINDING_SITE_SELECT(Binding_Site, keep_waters = False)
        fileName = f"{PDB_Name}_Chain_{Chain}_{selectedResidue.get_resname()}_{selectedResidue.id[1]}_BINDING_SITE"
        output_filename = outputPath + "/" + PDB_ID + "/" + fileName + ".pdb"
    pdbio.save(output_filename, bss)
    return "\nBinding Site Generated"



################################################################
################################################################
################################################################


# TESTS AND OTHER META DATA :

# # TESTS, FOR INTERNAL USAGE ONLY, SPECIFIC TO MY PC, CHANGE THE VARIABLES AS YOU LIKE
# input_dir = "C:\\Users\\bL4nK\\Desktop\\zz\\IC50MOLES"
# output_dir = "C:\\Users\\bL4nK\\Desktop\\test-extractions"
# for x in range(0,1000):
#     print(Extract(input_dir,output_dir,"4EY7.pdb","A","smi",('E20', 604)))
#     print(x)
#
# input("Finished, press any key to terminate . . .")


# Cairo_out args
# #default_options = {
#         'scaling': 1.0,
#         # should atom coordinates be rounded to whole pixels before rendering?
#         # This improves image sharpness but might slightly change the geometry
#         'align_coords': True,
#         # the following also draws hydrogens on shown carbons
#         'show_hydrogens_on_hetero': False,
#         'show_carbon_symbol': False,
#         'margin': 15,
#         'line_width': 1.0,
#         # how far second bond is drawn
#         'bond_width': 6.0,
#         'wedge_width': 6.0,
#         'font_name': "Arial",
#         'font_size': 16,
#         # background color in RGBA
#         'background_color': (1, 1, 1, 1),
#         'color_atoms': True,
#         'color_bonds': True,
#         'space_around_atom': 2,
#         # you can choose between atom_colors_full, atom_colors_minimal
#         # or provide a custom dictionary
#         'atom_colors': atom_colors_full,
#         # proportion between subscript and normal letters size
#         'subscript_size_ratio': 0.8,
#         # how much to shorten second line of double and triple bonds (0-0.5)
#         'bond_second_line_shortening': 0.15,
#         # the following two are just for playing
#         # - without antialiasing the output is ugly
#         'antialias_text': True,
#         'antialias_drawing': True,
#         # this will only change appearance of overlapping text
#         'add_background_to_text': False,
#     }
