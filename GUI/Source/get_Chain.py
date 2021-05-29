from Bio.PDB import PDBParser
from gzip import open as gzOpen
from io import StringIO


def get_PDB_Chains(PDB_FILE, input_DIR):
    chain_Name = []
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz",".ent.gz"]
    compressedFile = False

    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR +"/" + PDB_FILE,"rt")
        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    pdb = PDBParser().get_structure(PDB_FILE,Structure)
    for item in pdb:
        for item2 in item:
            if(str(item2.get_id()).strip()!=""):## GET CHAINS NAMES
                chain_Name.append(item2.get_id())
    if compressedFile:
        Structure.close()
    return chain_Name
