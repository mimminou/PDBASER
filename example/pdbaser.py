import os
import pathlib
from Bio.PDB import PDBParser, PDBIO, Select
import warnings
from time import sleep


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


def get_PDB_ENTRY(PDB_FILE, num):  ## NUM IS THE VARIABLE HOLDING THE REFERENCE TO THE CALL ITERNUMBER
    ## NUM IS USED TO KNOW OF THIS FUNCTION EXECUTED AT LEAST ONCE
    pdb_file = PDB_FILE
    defaultChain_is_A = False
    saved_Lig = False
    chain_Name = []
    res_Name = []
    if (pdb_file.endswith('.pdb') or pdb_file.endswith('.ent')) \
            and not pdb_file.startswith("Lig_") and not pdb_file.startswith("Prot_") \
            and not pdb_file.startswith("Chain_"):
        if (pdb_file.startswith("pdb")):
            PDB_ID = pdb_file[3:-4].upper()
        else:
            PDB_ID = pdb_file[:-4].upper()

        print(" ")
        print("LOADING FILE : " + pdb_file)

        pdb = PDBParser().get_structure(PDB_ID, path + '/' + pdb_file)
        io = PDBIO()
        io.set_structure(pdb)
        print("AVAILABLE CHAINS IN   " + PDB_ID + "  :  ")
        for item in pdb:

            for item2 in item:  ## GET CHAINS NAMES
                chain_Name.append(item2.get_id())

            print(chain_Name)

            # ! LOAD USER INTERFACE
            ##? 
        if defaultChain_is_A is False:
            print("WHICH CHAIN ???")
            print("TYPE 'SKIP' TO IGNORE THIS PDB FILE")
            myChain = input(
                "LEAVE BLANK TO SET CHAIN 'A' AS DEFAULT FOR THIS SESSION  >>>  ")

            if myChain.upper() == "SKIP":
                chain_Name.clear()
                print("SKIPPING")
                num.setSkippedNum(num.getSkippedNum() + 1)
                defaultChain_is_A = False
                return

            elif isinstance(myChain, str) and myChain.__len__() > 0:
                CHAIN = myChain.upper()
                defaultChain_is_A = False

            else:
                defaultChain_is_A = True
                CHAIN = "A"
                print("USING CHAIN ' A ' AS DEFAULT FOR THE REST OF THE SESSION")
        else:
            defaultChain_is_A = True
            CHAIN = "A"

        while CHAIN not in chain_Name:
            print("SELECTED CHAIN NOT IN FILE")

            print(chain_Name)
            print("A IS NO LONGER THE DEFAULT CHAIN")
            CHAIN = input("PLEASE PICK A VALID CHAIN FROM THIS LIST  >>>  ").upper()

            defaultChain_is_A = False

        num.setiteratedNum(num.getIteratedNum() + 1)
        chain_Name.clear()


        print("WORKING ON : " + PDB_ID)
        print("-----------------------")
        #! PRINT RESIDUE NAMES
        for res_item in pdb:
            for res in res_item[CHAIN]:
                if (not is_het(res)):
                    continue
                if "H_" in res.id[0] :
                    res_Name.append(str(res.id[0]).replace("H_","").strip())
        print("-----------------------")
        print("Residues in chain :  ")
        print()
        print()
        print(res_Name)
        print()
        print()
        print()
        print("TYPE SKIP TO SKIP RESIDUE EXTRACTION")
        print("")
        print("LEAVE BLANK TO EXTRACT ALL RESIDUS IN THE PICKED CHAIN")
        myResname = input("INSERT RESNAME (NAME OF LIGAND IN PDB) " + PDB_ID + " >>>  ")
        myResname = myResname.upper()
        myResname = "H_" + myResname
        RESNAME = myResname
        res_Name.clear()


        for model in pdb:
            # for chain in model[CHAIN]:
            pathlib.Path(PDB_ID).mkdir(parents=True, exist_ok=True)
            #         print("ba3")
            for residue in model[CHAIN]:
                if RESNAME == "H_SKIP":
                    print("SKIPPING LIGAND EXTRACTION")
                    print("")
                    print("Saving Peptidic Chain without residus . . . ")  ## SAVE PROT CHAIN
                    io.set_structure(model[CHAIN])
                    io.save("./" + PDB_ID + "/" f"Chain_{CHAIN}_{PDB_ID}.pdb", NonHetSelect())
                    io.set_structure(pdb)
                    break
                if (not is_het(residue)):
                    continue
                if RESNAME == str(residue.id[0]).replace(" ",""):
                    print("")
                    print(str(residue.id))
                    print("RESIDUE FOUND : " + str(residue.id[0]).replace(" ",""))
                    print("")
                    print("Saving Ligand " + str(residue.id[0]).replace("H_","") + "_" + str(residue.id[1]) + " . . . ")
                    pathlib.Path(PDB_ID).mkdir(parents=True, exist_ok=True)
                    io.save("./" + PDB_ID + "/" + PDB_ID +  "_Lig_" + residue.id[0][2:] + ".pdb",
                            ResidueSelect(model[CHAIN], residue))
                    saved_Lig = True
            else:
                print("Saving Peptidic Chain . . .")
                io.set_structure(model[CHAIN])
                io.save("./" + PDB_ID + "/" f"{PDB_ID}_Chain_{CHAIN}.pdb", NonHetSelect())
                io.set_structure(pdb)
                if RESNAME != "H_SKIP" and saved_Lig == False :
                    print("No ligand " + RESNAME[2:] + " found for " + PDB_ID + " in chain " + CHAIN)
            io.save("./" + PDB_ID + "/" f"{PDB_ID}.pdb")
            saved_Lig = False


def extract_ligands(mypath):
    # ? MAIN FUNCTION
    num = iterNum()

    for pdb_file in os.listdir(mypath + '/'):  # ? LOADING ALL RAW PDB FILES IN CURRENT FOLDER LOOP
        get_PDB_ENTRY(pdb_file, num)
    if num.getIteratedNum() > 0 or num.getSkippedNum() > 0:
        print("-------------------")
        print("TOTAL FILES : " + str(num.getIteratedNum() + num.getSkippedNum()))
        print("Iterated over : " + str(num.getIteratedNum()))
        print("Skipped over : " + str(num.getSkippedNum()))
        print("-------------------")

    else:
        print("no PDB / ENT Files in this directory ... ")


class iterNum:  ## Class of setter and getter to hold the number of iterations and skips

    def __init__(self, iterated=0, skipped=0):
        self.__iterated = iterated
        self.__skipped = skipped

    def setSkippedNum(self, skippedNum):
        self.__skipped = skippedNum

    def getSkippedNum(self):
        return self.__skipped

    def setiteratedNum(self, iteratedNum):
        self.__iterated = iteratedNum

    def getIteratedNum(self):
        return self.__iterated


warnings.filterwarnings("ignore")
path = str(pathlib.Path(__file__).parent)

print("")
print("")
print(" --- CHAIN / LIGAND EXTRACTOR --- ")
print("")
print("")
print("""  _____  _____  ____           _____ ______ _____  
 |  __ \|  __ \|  _ \   /\    / ____|  ____|  __ \ 
 | |__) | |  | | |_) | /  \  | (___ | |__  | |__) |
 |  ___/| |  | |  _ < / /\ \  \___ \|  __| |  _  / 
 | |    | |__| | |_) / ____ \ ____) | |____| | \ \ 
 |_|    |_____/|____/_/    \_\_____/|______|_|  \_\
                                                   """)
for s in range(0, 2):
    sleep(1)
    print()

extract_ligands(path)
