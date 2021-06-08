from Bio.PDB import PDBList
from contextlib import redirect_stdout
from io import StringIO
def getPDBFromFTP(output_DIR, PDB_FILE):
    pdbFile = PDBList()
    f = StringIO()
    try:
        with redirect_stdout(f):
            pdbFile.retrieve_pdb_file(PDB_FILE,False,output_DIR,"pdb",False)
        returnString = f.getvalue()
        if "Desired structure doesn't exists" or "Structure exists" in returnString:
            print(returnString)
            return False
    except Exception as x:
        print(x)



# TESTS
# outputDir = "C:\\Users\\bL4nK\\Desktop\\test-extractions\\"
# PDBFile = ["4ey7","E3Y","1NV8","6OCH"]
# getPDBFromFTP(outputDir,PDBFile)

