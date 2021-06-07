import pathlib
from Bio.PDB import PDBParser, PDBIO, Select
from warnings import simplefilter
from openbabel import openbabel, pybel
from io import StringIO
from shutil import copyfile
from logging import debug
from gzip import open as gzOpen

## THIS IS VERSION 1.5 OF THIS SCRIPT ...
simplefilter("ignore")


def is_het(residue):
    res = residue.id[0]
    return res not in (" ", "W")


class NonHetSelect(Select):
    def accept_residue(self, residue):
        return 1 if residue.id[0] == " " else 0


class ResidueSelect(Select):
    def __init__(self, chain, residue):
        self.chain = chain
        self.residue = residue

    def accept_chain(self, chain):
        return chain.id == self.chain.id

    def accept_residue(self, residue):
        # ? REMOVING WATER AND OTHER HETEROMOLECULES
        return residue == self.residue and is_het(residue)


def Extract(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat=None, Residues=None, saveFullProtein=False,
            saveDepiction=False, add_hydrogens=False):  ## Main Function
    extractedResidues = []
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR + "/" + PDB_FILE, "rt")
        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    if ligandExtractFormat is None:
        ligandExtractFormat = "pdb"
    pdb = PDBParser().get_structure(PDB_FILE, Structure)
    io = PDBIO()
    io.set_structure(pdb)
    PDB_ID = PDB_FILE.replace(".pdb", "").replace(".ent", "").replace(".gz", "")
    pathlib.Path(Output_DIR + "/" + PDB_ID).mkdir(parents=True, exist_ok=True)
    for model in pdb:
        for residue in model[Chain]:  ## ITERATE OVER CHAINS

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
                virtualFileOtherFormats = StringIO()
                io.save(virtualFileOtherFormats, ResidueSelect(model[Chain], residue))
                ## CONVERT RESIDUE TO SAVE IT IN OUTPUT DIRECTORY
                if ligandExtractFormat == "smiles":
                    ligandExtractFormat = "smi"
                filenameOtherFormats = Output_DIR + "/" + PDB_ID + "/" + PDB_ID + "_Lig_" + \
                                       residue.id[0].replace("H_", "") + "_" + str(residue.id[1])
                molecule = pybel.readstring("pdb", virtualFileOtherFormats.getvalue())

                if (add_hydrogens):             # ADD HYDROGEN
                    if not ligandExtractFormat == "smi":
                        molecule.addh()

                virtualString = StringIO(molecule.write(ligandExtractFormat))
                virtualString.seek(0)

                if ligandExtractFormat == "sdf":
                    virtualString.writelines(resname + "\n")
                    virtualString.seek(0,0)
                    content = virtualString.readlines()
                    content.insert(2,"Extracted with PDBaser")   ## INSERT THIS IN 3rd Line
                    VS = "".join(content)
                    virtualString = StringIO(VS)

                elif ligandExtractFormat == "mol2":
                    lineLength = virtualString.readline().__len__()
                    virtualString.seek(lineLength)     ## SKIP THE FIRST LINE OF THE HEADER IN TRIPOS MOL2 FILES
                    virtualString.writelines("\n")
                    virtualString.seek(lineLength)      ## POSITION CURSOR ON SECOND LINE IN MOL2 FILE
                    virtualString.writelines(resname + "\n") ## WRITE RESIDUE NAME SO THAT OTHER PROGRAMS CAN READ IT

                elif ligandExtractFormat == "smi":
                    pass

                with open(filenameOtherFormats +"."+ ligandExtractFormat,"w") as savedFile :
                    savedFile.write(virtualString.getvalue())

                # Check IF SAVE DEPICTION IS TRUE
                if (saveDepiction):
                    molecule.draw(False, filenameOtherFormats + ".png")

                virtualFileOtherFormats.close()
                virtualString.close()

        else:
            debug("Saving Peptidic Chain . . .")
            io.set_structure(model[Chain])
            io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_ID}_Chain_{Chain}.pdb", NonHetSelect())
            io.set_structure(pdb)
        # SAVING FULL PROTEIN
        if saveFullProtein:
            debug("saving full protein")
            copyfile(input_DIR + "/" + PDB_FILE, Output_DIR + "/" + PDB_ID + "/" + f"{PDB_ID}.pdb")
    if compressedFile:
        Structure.close()  # CLOSE STRING IO IF FILE IS COMPRESSED
    return extractedResidues


def DrawMol(input_DIR, Output_DIR, PDB_FILE, Chain, Residues=None):
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR + "/" + PDB_FILE, "rt")
        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)

    pdb = PDBParser().get_structure(PDB_FILE, Structure)
    io = PDBIO()
    picture = ""
    io.set_structure(pdb)
    PDB_ID = PDB_FILE.replace(".pdb", "").replace(".ent", "").replace(".gz", "")
    pathlib.Path(Output_DIR + "/" + PDB_ID).mkdir(parents=True, exist_ok=True)
    for model in pdb:
        for residue in model[Chain]:  ## ITERATE OVER CHAINS
            if (Residues is None) or (not residue):
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
                io.save(virtualFile, ResidueSelect(model[Chain], residue))
                ## USING OPEN BABEL NATIVE DEPICTOR
                obConv = openbabel.OBConversion()  # INITIALIZE OPENBABEL OBCONVERSION
                obConv.SetInAndOutFormats("pdb", "_png2")
                mol = openbabel.OBMol()  # INITIALIZE OBMOL
                obConv.ReadString(mol, virtualFile.getvalue())

                virtualPicture = StringIO(obConv.WriteString(mol))  # WRITE TO VIRTUAL FILE AS STRING
                virtualPicture.seek(0)
                picture = virtualPicture.getvalue().encode('utf8',
                                                           'surrogateescape')  # SAVE STRING IN THIS VARIABLE BEFORE CLOSING THE VIRTUAL FILE
                virtualFile.close()
                virtualPicture.close()

    if compressedFile:
        Structure.close()
    return picture

# TESTS, FOR INTERNAL USAGE ONLY, SPECIFIC TO MY PC, CHANGE THE VARIABLES AS YOU LIKE
# input_dir = "C:\\Users\\bL4nK\\Desktop\\zz\\IC50MOLES"
# output_dir = "C:\\Users\\bL4nK\\Desktop\\test-extractions"
# Extract(input_dir,output_dir,"4EY7.pdb","A","sdf",('H_E20', 604))
