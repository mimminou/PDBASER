from Bio.PDB import PDBParser, PDBIO, Select, NeighborSearch, Selection
import pprint
from numpy import unique, array




class BINDING_SITE_SELECT(Select):
    def __init__(self, binding_site_residues):
        self.binding_site_residues = binding_site_residues

    def accept_residue(self, residue):
        if residue in self.binding_site_residues:
            return 1
        else:
            return 0

def getAtomList():
    return binding_site_final


class SELECT_ALL(Select):
    def __init__(self, atom):
        self.atom = atom

    def accept_atom(self, atom):
        if(atom) in getAtomList():
            return 1


pdbParser = PDBParser(QUIET=True)
pdbFile = pdbParser.get_structure("4ey7", "./exp/pdb4ey7.ent")
structure = pdbFile[0]
io = PDBIO()
io.set_structure(pdbFile)

target_res = structure["A"]
print(structure)
atom_distance = 6.0
binding_site = []
for residue in target_res:
    if residue.get_resname() == "E20":
        print(residue.get_resname())
        print(residue.id[1])
        atoms = Selection.unfold_entities(residue, "A")
        querySet = Selection.unfold_entities(structure, "A")
        ns = NeighborSearch(querySet)
        for atom in atoms:
            binding_site.append(ns.search(atom.coord, atom_distance, "R"))
        # mAtoms = Selection.unfold_entities(close_atoms, "A")

# pprint.pprint(binding_site)
binding_site_final = []
for item in binding_site:
    for obj in item:
        binding_site_final.append(obj)

binding_site_final = array(binding_site_final, dtype="object")
binding_site_final = unique(binding_site_final).tolist()

# print(binding_site_final)
bss = BINDING_SITE_SELECT(binding_site_final)

io.save("./exp/sett.pdb", bss)







#
#
# atom_list = Selection.unfold_entities(structure, 'A') # A for atoms
# ns = NeighborSearch(atom_list)
# center = atom_list[0].get_coord()
# neighbors = ns.search(center, 5.0) # 5.0 for distance in angstrom
# residue_list = Selection.unfold_entities(neighbors, 'R') # R for residues
# print(residue_list)