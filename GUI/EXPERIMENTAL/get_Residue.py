from Bio.PDB import PDBParser, PDBIO, Select

def is_het(residue):
    res = residue.id[0]
    return res not in (" ", "W")


## THIS IS VERSION 1.1 OF THIS SCRIPT ...

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


def get_PDB_Residues(PDB_FILE,Chain, input_DIR):  ## NUM IS THE VARIABLE HOLDING THE REFERENCE TO THE CALL ITERNUMBER
    ## NUM IS USED TO KNOW IF THIS FUNCTION EXECUTED AT LEAST ONCE
    pdb_file = PDB_FILE
    Res_Name = []

    pdb = PDBParser().get_structure(PDB_FILE, input_DIR+"/" + PDB_FILE)
    io = PDBIO()
    io.set_structure(pdb)
    for res_item in pdb:
        for res in res_item[Chain]:
            if (not is_het(res)):
                continue
            if "H_" in res.id[0]:
                Res_Name.append([str(res.id[0][2:]),res.id[1]])

    return Res_Name