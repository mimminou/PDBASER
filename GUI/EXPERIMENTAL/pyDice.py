from Bio.PDB import Dice,PDBParser,PDBIO


parser = PDBParser()

protein = parser.get_structure("4EY7","4ey7.pdb")

