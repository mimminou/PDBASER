from Bio.PDB import PDBParser, Select
from gzip import open as gzOpen
from io import StringIO




__Res_List = []  # Internal usage, used for caching values


def is_het(residue):
    res = residue.id[0]
    return res not in (" ", "W")


class NonHetSelect(Select):
    def accept_residue(self, residue):
        return 1 if residue.id[0] == " " else 0


def __getResList():
    return __Res_List


class ResidueSelect(Select):
    def __init__(self, chain, residue):
        self.chain = chain
        self.residue = residue

    def accept_chain(self, chain):
        return chain.id == self.chain.id

    def accept_residue(self, residue):
        # ? REMOVING WATER AND OTHER HETEROMOLECULES
        return residue == self.residue and is_het(residue)


def get_PDB_Residues(PDB_FILE,Chain, input_DIR):
    Res_Name = []
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR +"/" + PDB_FILE, "rt")
        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    pdbParser = PDBParser()
    pdb = pdbParser.get_structure(PDB_FILE,Structure)
    for model in pdb:
        for res in model[Chain]:

            if (not is_het(res)):
                continue
            if "H_" in res.id[0]:
                __Res_List.append(res)
                Res_Name.append([str(res.id[0][2:]), res.id[1]])
    if compressedFile:
        Structure.close()
    return Res_Name, pdb
