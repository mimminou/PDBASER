![mainicon](GUI/icon.png?raw=true)

Are you tired of using visualization software, or full blown suites just to separate protein chains / ligands ?
Are you tired of organizing the mess of molecules into separate folders ?

PDBaser does this for you !


# What does it do ?

PDBaser reads raw .pdb and .ent files as downloaded from the pdb, extracts pure protein chains and heteroatoms (ligands and others) and removes water molecules, and then saves everything in a directory named as the original input filename.

# Who is this for ?

This tool is perfect for RMSD reliability test preparation, where a large number of proteins and their ligands are needed. It can also help people who are not very accustomed to command line interfaces, and aren't willing to pay a (usually high) premium for other software.


# Requirements

#### Windows

For Windows users, PDBaser has a precompiled version, it can be found in the releases category, and can be installed on windows 7 SP1 / 8 / 8.1 / 10 and only requires Microsoft visual C++ 2015 x86.

#### Linux / MacOS

PDBaser_GUI.py (from GUI folder) and it's dependencies will probably run, although i haven't tested myself, for this to work, this program requires Python 3.6.5 (And only 3.6.5, other versions will not work with openbabel libraries unless you compile them yourself), Biopython, Pygubu and openbabel and it's python bindings (Again, 3.6.5) are also required.

# Features

- Input / Output Folder selection.
- Support for compressed pdb / ent files.
- 2D Depiction and PNG output.
- Outputs residues in most popular formats (pdb, sdf, mol2, smiles).
- Multiple residue extraction at once is possible, chain only extraction with no residues is also possible.
- Hydrogen generation for extracted residues is available (Except for SMILES format).
- Support for downloading proteins from the PDB directly.

![Screenshot](GUI/pdbaser.PNG?raw=true)

### Limitations

- No metadata extraction (Header, comments etc ...), only atom 3D poses with the molecule code in the PDB.
- Only .pdb / .ent inputs and their compressed (.gz) form are supported, this is done by design as most proteins come only in pdb and ent formats, however residue outputs can have different formats (pdb, mol2, sdf, smiles).
- there is a known bug where extracting a ligand in SMILES format does not generate a name for it, i'm gonna fix it as soon as i finish some work on my studies.

  

# Downloads

For Windows X86_64 :  Check releases section.



# Citations

PDBaser relies on Biopython BIO.PDB module and openbabel's pybel module.

BIO.PDB : Hamelryck T and Manderick B (2003) PDB file parser and structure class implemented in Python. [*Bioinformatics*, 22, 2308-2310](http://dx.doi.org/10.1093/bioinformatics/btg299)

openbabel's pybel : O'Boyle, N.M., Morley, C. & Hutchison, G.R. Pybel: a Python wrapper for the OpenBabel cheminformatics toolkit. *Chemistry Central Journal* **2,** 5 (2008).



If this software helped you making a scientific publication, a citation would be very appreciated :

ABDELAZIZ, A. (2021). *PDBaser*, A python tool for fast protein - ligand extraction. https://github.com/mimminou/PDBASER






# Command line (Deprecated)

*NOTE :* **CLI version is a very early release and is now DEPRECATED, and probably won't be supported anymore.**

for this module to work, you need at least **python 3.6.5** as well as **Biopython**.

from the date i'm writing this, i've been experiencing some issues regarding Biopython when running python 3.9, therefore i suggest users to download any iteration of python from 3.6.5 to 3.8.5 instead.

You can download and install **python** from the official website (3.6.5 recommended).

**Biopython** can be installed from pip.



### Usage

Very straightforward, all you have to do is put this script in the folder containing the PDBs that need to be treated, run it from command line / terminal then follow instructions for each iteration.

There exists only 3 commands :

- **SKIP** : command that skips the mentioned step.
- **Inserting data** : normal usage.
- **Leaving blank field** : will either default to chain A or extract all residues in the selected chain, depending on where the user left the input blank.

