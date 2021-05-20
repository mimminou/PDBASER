from Bio.PDB import PDBParser


## THIS IS VERSION 1.2 OF THIS SCRIPT ...

def get_PDB_Chains(PDB_FILE, input_DIR):  ## NUM IS THE VARIABLE HOLDING THE REFERENCE TO THE CALL ITERNUMBER
    ## NUM IS USED TO KNOW IF THIS FUNCTION EXECUTED AT LEAST ONCE
    pdb_file = PDB_FILE
    chain_Name = []

    print("LOADING FILE : " + pdb_file)

    pdb = PDBParser().get_structure(PDB_FILE, input_DIR+"/" + PDB_FILE)
    print("Printing Chains . . .")
    for item in pdb:
        for item2 in item:
            if(str(item2.get_id()).strip()!=""):## GET CHAINS NAMES
                chain_Name.append(item2.get_id())

    return chain_Name
