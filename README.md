![mainicon](GUI/icon.png?raw=true)

Are you tired of using visualization software, or full blown suites just to separate protein chains / ligands ?
Are you tired of organizing the mess of molecules into separate folders ?

PDBaser does this for you !


# What does it do ?

PDBASER reads raw .pdb / .ent files as downloaded from the pdb, extracts pure protein chains and heteroatoms (ligands and others) and removes water molecules, and then saves everything in a directory named as the original filename.



# Requirements

For Windows users, PDBaser has a GUI version, which is the one actively maintained as of now.

For Linux / MacOS users, PDBaser_GUI.py and it's dependencies will probably run, although i haven't tested myself, for this to work, this program requires Python 3.6.5 or newer, BioPython and Pygubu installed. 

# Features

- Input / Output Folder selection.
- Multiple residue extraction possibility, chain only extraction with no residues is also possible.
- Search field available.

![Screenshot](GUI/pdbaser.PNG?raw=true)

### Limitations

- No metadata extraction (Header, info etc ...), only atom 3D poses.
- No support for different file formats (yet), only .pdb and .ent are supported right now.

### Download

For Windows X86_64 : [Setup](https://github.com/mimminou/PDBASER/releases/download/v1.0/PDBaser_Win_x86_Setup.zip)


# Command line

*NOTE :* **command line version probably won't be supported anymore**

for this module to work, you need at least **python 3.6.5** as well as **BioPython**.

from the date i'm writing this, i've been experiencing some issues regarding BioPython when running python 3.9, therefore i suggest users to download any iteration of python 3.8 instead.

You can download and install **python** from the official website (3.8.5 recommended).

**BioPython** can be installed from pip.



### Usage

Very straightforward, all you have to do is put this script in the folder containing the PDBs that need to be treated, run it from command line / terminal then follow instructions for each iteration.

For now there exists only 3 commands :

- **SKIP** : command that skips the mentionned step.
- **Inserting data** : normal usage.
- **Leaving blank field** : will either default to chain A or extract all residues in the selected chain, depending on where the user left the input blank.

