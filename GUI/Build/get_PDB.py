from Bio.PDB import PDBList
from contextlib import redirect_stdout
from io import StringIO
import socket


def isThereInternet():
    Server = "one.one.one.one"
    try:
        host = socket.gethostbyname(Server)
        s = socket.create_connection((host, 80), 1)
        s.close()
        return True
    except Exception as exc:
        print(exc)
    return False


def getPDBFromFTP(input_DIR, PDB_FILE):
    if not isThereInternet():
        return 1
    pdbFile = PDBList()
    f = StringIO()
    NotFoundString = "Desired structure doesn't exists"
    ExistsString = "Structure exists"
    try:
        with redirect_stdout(f):
            pdbFile.retrieve_pdb_file(PDB_FILE,False,input_DIR,"pdb",False)
        returnString = f.getvalue()
        if ExistsString in returnString:   # CHECK IF FILE EXIST
            print(returnString)
            f.close()
            return 2
        elif NotFoundString in returnString : # FILE NOT FOUND IN PDB
            f.close()
            return 3
        else:
            f.close()
            return 0
    except Exception as x:
        f.close()
        print(x)
