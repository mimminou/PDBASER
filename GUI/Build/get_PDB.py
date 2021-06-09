from Bio.PDB import PDBList
from contextlib import redirect_stdout
from io import StringIO
from icmplib import ping

def isThereInternet():
    try:
        pingrequest = ping("rcsb.org",1,1,1)
        return True
    except Exception as excp:
        print(excp)
        return False

def getPDBFromFTP(output_DIR, PDB_FILE):
    if not isThereInternet():
        return 1
    pdbFile = PDBList()
    f = StringIO()
    NotFoundString = "Desired structure doesn't exists"
    ExistsString = "Structure exists"
    try:
        with redirect_stdout(f):
            pdbFile.retrieve_pdb_file(PDB_FILE,False,output_DIR,"pdb",False)
        returnString = f.getvalue()
        if ExistsString in returnString:   # CHECK IF FILE EXIST
            print(returnString)
            return 2
        elif NotFoundString in returnString : # FILE NOT FOUND IN PDB
            return 3
        else:
            return 0
    except Exception as x:
        print(x)
