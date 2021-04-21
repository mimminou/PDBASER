



                                                    
            _____ ____  _____ _____ _____ _____ _____ 
            |  _  |    \| __  |  _  |   __|   __| __  |
            |   __|  |  | __ -|     |__   |   __|    -|
            |__|  |____/|_____|__|__|_____|_____|__|__|
                                                    



Are you tired from using visualization software to separate tens and hundreds of proteic chains / ligands ?
Are you tired of organizing the mess of molecules into separate folders ?

this python program is for you !


# What does it do ?

PDBASER reads raw .pdb / .ent files as downloaded from the pdb, extracts chains and ligands and removes water molecules, and then saves everything in a directory named as the PDB code of the file. eg :

4EY7.pdb

this file will be treated and the output will **depend** on the user's input, if everything is left to default it will create a folder named **4EY7** containing :

- 4EY7.pdb with no metadata, found it to be lighter this way, and the original file will still remain.
- chain 'A' File ( if left on default and chain A exists ) with no ligand / water molecules.
- all hetero residues in that chain ( in this example, there is E20, NAG, ED0 and others but the main ligand is E20 )

All outputs will have .PDB format for now, i will add MOL2 and maybe SDF formats when and if i'm free ( i have lots of studies . . .)



# Requirments

for this module to work, you need at least **python 3.6.5** as well as **BioPython**

from the date i'm writing this, i've been experiencing some issues regarding BioPython when running python 3.9, therefore i suggest users to download any iteration of python 3.7 instead.

You can download and install **python** from the official website (3.7.x recommended).

**BioPython** can be installed from pip.

# Usage

Very straightforward, all you have to do is put this script in the folder containing the PDBs that need to be treated, run it from command line / terminal then follow instructions for each iteration.

For now there exists only 3 commands :

- **SKIP** : command that skips the mentionned step.
- **Inserting data** : normal usage.
- **Leaving blank field** : will either default to chain A or extract all residues in the selected chain, depending on where the user left the input blank.

