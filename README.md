![mainicon](GUI/icon.png?raw=true)

Are you tired of using visualization software, or full blown suites just to separate protein chains / ligands ?
Are you tired of organizing the mess of molecules into separate folders ?

PDBaser does this for you !


# What does it do ?

PDBaser reads raw .pdb and .ent files as downloaded from the pdb, extracts pure protein chains and heteroatoms (ligands and others) and (optionally) removes water molecules, and then saves everything in a directory named as the original input filename.
You can also use it to generate and extract a binding site provided there is a ligand in a cavity in the protein file.

# Who is this for ?

This tool is perfect for RMSD reliability test preparation, where a large number of proteins and their ligands are needed. It can also help people who are not very accustomed to command line interfaces, and aren't willing to pay a (usually high) premium for other software.


# Features

- Folder organization (Outputs are organized in a single folder named as the pdb file name).
- Support for compressed pdb / ent files.
- 2D Depiction and PNG/SVG output.
- Outputs residues in most popular formats (pdb, sdf, mol2, smiles).
- Multiple residue extraction at once is possible, chain only extraction with no residues is also possible.
- Binding Site Extraction is available for up to 12Å in radius from a selected residue.
- Water extraction in chains and binding site is available.
- Protonation and titration states predictions for proteins and binding sites using PROPKA.  
- Hydrogen generation for extracted residues is available.
- Support for downloading proteins from the PDB directly (files are saved in input directory).
- Powerfull batch extraction mode through CLI.



![Screenshot](GUI/pdbaser.PNG?raw=true)

# Installation

#### Windows

For Windows users, PDBaser has a precompiled version, it can be found in the releases category, and can be installed on windows 7 SP1 / 8 / 8.1 / 10 / 11 and only requires Microsoft visual C++ 2015 x86, which is embedded in the installation. ( For Windows 7 Users : Service Pack 1 with update KB3063858 Must be installed in order for PDBaser to run )

#### Linux / MacOS and other Unix / Unix-like systems

There are 2 possible ways to run PDBaser in this case :


1. **Using Wine**


    The quickest way to get PDBaser running on those systems is by using Wine (Tested on Wine 6.0.1 +, works only on a 64bit prefix for some reason),
    
    - 1 - Download and install the windows setup package and install it.
    - 2 - open a terminal window where you installed PDBaser and run `wine pdbaser.exe` (or `wine PDBaser_GUI.exe` if release is older than 2.0).


2. **Building from source**


    PDBaser is not OS dependant, and will probably run on any operating system provided the environment is correctly setup. However, since software distribution on Linux is a nightmare, and i do not have a mac system to package PDBaser for, you will have to either use Wine, or deal with setting up the environment from scratch.

    - 1 - First, you need a working python 3.6+ environment with support for Tkinter, PILLOW and PMW.
    - 2 - Install BioPython and Pygubu from pip (`pip install biopython`, `pip install pygubu`)
    - 3 - You need to install openbabel 3.1.1 with python bindings (pybel), or directly build openbabel 3.1.1 with SWIG and python bindings from source ( follow [this](http://openbabel.org/docs/dev/Installation/install.html) ), and then install it's python library from pip (`pip install openbabel==3.1.1`).
    - 4 - Install the OASA library, easely obtained from pip ( `pip install oasa3` )
    - 5 - Install PDB2PQR (which in turn will automatically install PROPKA, both are needed)

    If everything is setup correctly, running GUI/Build/pdbaser.py from terminal should work, if not, email me at abdz.amine@gmail.com or open an issue in the repository.

### Limitations

- No metadata extraction (Header, comments etc ...), only atom 3D poses with the molecule code in the PDB.
- Only .pdb / .ent inputs and their compressed (.gz) form are supported, this is done by design as most proteins come only in pdb and ent formats, however residue outputs can have different formats(pdb, mol2, sdf, smiles).
- Extracting a ligand in SMILES format does not generate a name for it, this is a known bug, I will probably fix it if it raises issues.
- PDBaser does not handle well structures that are composed of multiple models, try to avoid them as much as possible.

### Roadmap

From most to least important :
- Add multiprocessing / multithreading support for batch mode in cli.
- If binding site is composed of multiple chains, add support to show them when generating it instead of just showing a list of residues.
- Add cif (mmcif) support.
- Packaging binaries for Linux (Maybe through flatpak).


# Downloads

For Windows x86/x64 : A binary setup is available in releases section.


For Unix/Unix-like : Source is available in releases section, although I recommend installing the windows version and using it through Wine.


# Citations

PDBaser relies on Biopython's BIO.PDB module, openbabel's pybel module, the OASA library and PDB2PQR.

BIO.PDB : Hamelryck T and Manderick B (2003) PDB file parser and structure class implemented in Python. [*Bioinformatics*, 22, 2308-2310](http://dx.doi.org/10.1093/bioinformatics/btg299)

Openbabel + pybel : O'Boyle, N.M., Morley, C. & Hutchison, G.R. Pybel: a Python wrapper for the OpenBabel cheminformatics toolkit. *Chemistry Central Journal* **2,** 5 (2008).

PDB2PQR (+ PROPKA ) : https://github.com/Electrostatics/pdb2pqr



**If this software helped you making a scientific publication, please cite it using the citation below :**

M. A. Abdelaziz, “PDBaser, A python tool for fast protein - ligand extraction”, https://github.com/mimminou/PDBASER





# Command line
Starting from PDBaser 2.0, command line functionality is back with batch operations and arguments support.
However, it is still in testing phase and should be used carefully.

### Usage

Invoke pdbaser by passing arguments:

`pdbaser -i [INPUT] -o [OUTPUT]`
use pdbaser -h for further instructions

PDBaser, Protein preparation made fast and easy

**Help** :

Running `pdbaser -h` will show a help message.

  -h, --help            shows a help message and exit


**Required arguments:**

`-i INPUT_DIR, --input INPUT_DIR` : Input directory for pdbs, if a file is specified instead, it will only treat t hat file.
  
`-o OUTPUT_DIR, --output OUTPUT_DIR` : Output directory for processed files ( only pass a path to a directory , PDBaser will take care of the rest )

**Example** :

`$ ./pdbaser.exe -i C:\Users\USER\Desktop\zz\IC50MOLES\cli_test -o ./exp/ -r -bs 8 -pbs -ff CHARMM -ph 8 -w`

**Optional arguments**

A list of optional arguments can be found in USAGE.txt (https://github.com/mimminou/PDBASER/GUI/Build/Usage.txt)
