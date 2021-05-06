import pathlib
from Bio.PDB import PDBParser, PDBIO, Select
from warnings import simplefilter

simplefilter("ignore")

def is_het(residue):
    res = residue.id[0]
    return res not in (" ", "W")


## THIS IS VERSION 1.0 OF THIS SCRIPT ... 

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


def Extract(Input_DIR, Output_DIR,PDB_Entry,Chain, Residues=None):  ## Main Function
    extractedResidues = []
    pdb = PDBParser().get_structure(PDB_Entry, Input_DIR+"/" + PDB_Entry)
    io = PDBIO()
    io.set_structure(pdb)
    PDB_ID = PDB_Entry.replace(".pdb","").replace(".ent","")
    pathlib.Path(Output_DIR + "/" + PDB_ID).mkdir(parents=True, exist_ok=True)
    for model in pdb:
        #         print("ba3")
        for residue in model[Chain]:    ## ITERATE OVER CHAINS
            if Residues is None:
                io.set_structure(model[Chain])
                io.save(Output_DIR + " + " + PDB_ID + "/" f"Chain_{Chain}_{PDB_ID}.pdb", NonHetSelect())
                io.set_structure(pdb)
                break
            if (not is_het(residue)):
                continue
            if str((residue.id[0],residue.id[1])).replace("H_","") in str(Residues): ## REMOVE H_ PREFIX
                print("")
                print("RESIDUE FOUND : " + str(residue.id[0]).replace(" ", ""))
                print("")
                extractedResidues.append(residue.id[0].replace("H_","") + "_" + str(residue.id[1]))
                io.save(Output_DIR + "/" + PDB_ID + "/" + PDB_ID + "_Lig_" + residue.id[0].replace("H_","") + "_" + str(residue.id[1]) + ".pdb",
                        ResidueSelect(model[Chain], residue))
        else:
            print("Saving Peptidic Chain . . .")
            io.set_structure(model[Chain])
            io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_ID}_Chain_{Chain}.pdb", NonHetSelect())
            io.set_structure(pdb)
        io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_ID}.pdb")

    return extractedResidues


# TESTS
#input_dir = "C:\\Users\\bL4nK\\Desktop\\zz\\IC50MOLES"
#output_dir = "C:\\Users\\bL4nK\\Desktop\\test-extractions"
#Extract("4EY7.pdb","A","E20",input_dir,output_dir)