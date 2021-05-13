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


def get_PDB_Chains(PDB_FILE, input_DIR):  ## NUM IS THE VARIABLE HOLDING THE REFERENCE TO THE CALL ITERNUMBER
    ## NUM IS USED TO KNOW IF THIS FUNCTION EXECUTED AT LEAST ONCE
    pdb_file = PDB_FILE
    chain_Name = []


    print(" ")
    print("LOADING FILE : " + pdb_file)

    pdb = PDBParser().get_structure(PDB_FILE, input_DIR+"/" + PDB_FILE)
    io = PDBIO()
    io.set_structure(pdb)
    print("Printing Chains . . .")
    for item in pdb:
        for item2 in item:
            if(str(item2.get_id()).strip()!=""):## GET CHAINS NAMES
                chain_Name.append(item2.get_id())


    return chain_Name
