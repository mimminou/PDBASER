import pathlib
from re import T
from Bio.PDB import PDBParser, PDBIO
from io import StringIO
from shutil import copyfile
from logging import debug
from gzip import open as gzOpen
from prot2pqr import generate_target_H
import MolHandler


#This is a better solution than refractoring and breaking everything, needed for CLI to extract without specifying a chain
def Extract_CLI(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat=None, Residues=None, saveFullProtein=False,
            saveDepictionPNG=False, saveDepictionSVG=False, add_hydrogens=False, keep_waters=False, binding_site_radius="7",
            protonate_chain=False, protonate_BS=False, force_field="PARSE", use_propka=True, PH=7):

    pdbParser = PDBParser(QUIET=True)
    Structure = input_DIR + "/" + PDB_FILE
    pdb = pdbParser.get_structure(PDB_FILE, Structure)
    if Chain is None:
        for pdbChain in pdb.get_chains():
            if "extract_all" in Residues:
                MolHandler.Extract(input_DIR, Output_DIR, PDB_FILE, pdbChain.id, ligandExtractFormat, "extract_all", saveFullProtein,
                    saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                    protonate_chain, protonate_BS, force_field, use_propka, PH)

            elif Residues[0] == None:
                MolHandler.Extract(input_DIR, Output_DIR, PDB_FILE, pdbChain.id, ligandExtractFormat, None, saveFullProtein,
                    saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                    protonate_chain, protonate_BS, force_field, use_propka, PH)

            else:
                Extract_specific_residues(input_DIR, Output_DIR, PDB_FILE, pdbChain.id, ligandExtractFormat, Residues, saveFullProtein,
                    saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                    protonate_chain, protonate_BS, force_field, use_propka, PH)

    else:
        if "extract_all" in Residues:
            MolHandler.Extract(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat, "extract_all", saveFullProtein,
                saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                protonate_chain, protonate_BS, force_field, use_propka, PH)
            
        elif Residues[0] == None:
            MolHandler.Extract(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat, None, saveFullProtein,
                saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                protonate_chain, protonate_BS, force_field, use_propka, PH)

        else:
            Extract_specific_residues(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat, Residues, saveFullProtein,
                saveDepictionPNG, saveDepictionSVG, add_hydrogens, keep_waters, binding_site_radius,
                protonate_chain, protonate_BS, force_field, use_propka, PH)


## Main Function
def Extract_specific_residues(input_DIR, Output_DIR, PDB_FILE, Chain, ligandExtractFormat=None, Residues=None, saveFullProtein=False,
            saveDepictionPNG=False, saveDepictionSVG=False, add_hydrogens=False, keep_waters=False, binding_site_radius="7",
            protonate_chain=False, protonate_BS=False, force_field="PARSE", use_propka=True, PH=7):
    Structure = input_DIR + "/" + PDB_FILE
    extensions = [".pdb.gz", ".ent.gz"]
    compressedFile = False
    nonHetSelect = MolHandler.NonHetSelect()
    keepWaterSelect = MolHandler.KeepWaterSelect()

    if(binding_site_radius != "No"):
        binding_site_radius = int(binding_site_radius)
    else:
        binding_site_radius = 0
    if PDB_FILE.endswith(tuple(extensions)):
        compressedFile = True
        zippedFile = gzOpen(input_DIR + "/" + PDB_FILE, "rt")

        temp_file = zippedFile.read()
        zippedFile.close()
        Structure = StringIO(temp_file)
    if ligandExtractFormat is None:
        ligandExtractFormat = "pdb"
    pdbParser = PDBParser(QUIET=True)
    try:
        pdb = pdbParser.get_structure(PDB_FILE, Structure)
        io = PDBIO()
        io.set_structure(pdb)
        PDB_ID = PDB_FILE.replace(".pdb", "").replace(".ent", "").replace(".gz", "")
        pathlib.Path(Output_DIR + "/" + PDB_ID).mkdir(parents=True, exist_ok=True)
    except Exception as E:
        print(E)
        return ["ERROR, FILE NOT FOUND"]
    if PDB_ID.startswith("pdb"):            ##? To Handle PDB files downloaded from the RCSPDB, if you name your files manually starting with "pdb" this can break stuff
        PDB_Name = PDB_ID[3:]
    else:
        PDB_Name = PDB_ID

    for model in pdb:
        for residue in model[Chain]:  ## ITERATE OVER CHAIN
            if (Residues is None) or (not residue):
                break
            elif (not MolHandler.is_het(residue)):
                continue
            elif (residue.id[0].replace("H_", "")) in (Residues):
                resSelect = MolHandler.ResidueSelect(model[Chain], residue)
                residue.id[0].replace(" ", "")
                resname = residue.id[0].replace("H_", "") + "_" + str(residue.id[1])
                # SAVE RESIDUE IN VIRTUAL FILE
                debug("SAVING TO VIRTUAL FILE")
                virtualFilePDBFormat = StringIO()
                io.save(virtualFilePDBFormat, resSelect)
                ## CONVERT RESIDUE TO SAVE IT IN OUTPUT DIRECTORY
                if ligandExtractFormat == "smiles":
                    ligandExtractFormat = "smi"

                filenameOfOutput = Output_DIR + "/" + PDB_ID + "/" + PDB_Name + f"_{Chain}_" + \
                                   residue.id[0].replace("H_", "") + "_" + str(residue.id[1])
                if MolHandler.__PYBEL_STATE__ == "FULL":
                    molecule = MolHandler.pybel.readstring("pdb", virtualFilePDBFormat.getvalue())

                    if (add_hydrogens):  # ADD HYDROGEN
                        if not ligandExtractFormat == "smi":
                            molecule.addh()

                    virtualString = StringIO(molecule.write(ligandExtractFormat))
                    virtualString.seek(0)

                    if ligandExtractFormat == "sdf":
                        virtualString.writelines(resname + "\n")
                        virtualString.seek(0, 0)
                        content = virtualString.readlines()
                        content.insert(2, "Extracted with PDBaser")  ## INSERT THIS IN 3rd Line
                        VS = "".join(content)
                        virtualString = StringIO(VS)

                    elif ligandExtractFormat == "mol2":
                        virtualString.seek(0, 0)  ## SKIP THE FIRST LINE OF THE HEADER IN TRIPOS MOL2 FILES
                        content = virtualString.readlines()
                        content.pop(1)
                        content.insert(1, resname + "\n")
                        VS = "".join(content)
                        virtualString = StringIO(VS)

                    elif ligandExtractFormat == "smi":
                        # todo FIX LIGAND NAME IN SMI FILE FORMAT
                        pass

                    if (add_hydrogens):  # LIGAND STUFF
                        with open(filenameOfOutput + "_H." + ligandExtractFormat,
                                  "w") as savedFile:  ## ITS LATE AND I WAS LAZY, I JUST ADDED _H AS A QUICK FIX, I COULD HAVE DONE THIS BETTER I KNOW ...
                            savedFile.write(virtualString.getvalue())
                    else:
                        with open(filenameOfOutput + "." + ligandExtractFormat, "w") as savedFile:
                            savedFile.write(virtualString.getvalue())

                    # Check IF SAVE DEPICTION IS TRUE
                    if (saveDepictionPNG):
                        with open(filenameOfOutput + ".png", "wb") as imgPNG:
                            imgPNG.write(MolHandler.drawImg(virtualFilePDBFormat, "png"))

                    if (saveDepictionSVG):
                        with open(filenameOfOutput + ".svg", "wt") as imgSVG:
                            imgSVG.write(MolHandler.drawImg(virtualFilePDBFormat, "svg").decode("utf-8"))

                    virtualFilePDBFormat.close()
                    virtualString.close()
                else:
                    ligandExtractFormat = "pdb"
                    io.save(filenameOfOutput + "." + ligandExtractFormat, resSelect)
                    virtualFilePDBFormat.close()

                if (binding_site_radius > 0):  # THIS GENERATES THE BINDING SITE
                    if keep_waters:
                        output = Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}_" + \
                                 residue.id[0].replace("H_", "") + "_" + str(
                            residue.id[1]) + "_BS_H_W.pqr"  # todo maybe change to pdb
                    else:
                        output = Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}_" + \
                                 residue.id[0].replace("H_", "") + "_" + str(
                            residue.id[1]) + "_BS_H.pqr"  # todo maybe change to pdb
                    if (protonate_BS):
                        binding_site_atoms = MolHandler.generateBindingSite(pdb[0], io, PDB_Name, PDB_ID, Chain, Output_DIR,
                                                                 residue,
                                                                 binding_site_radius, keep_waters,
                                                                 WRITE_TO_FILE=False)
                        generate_target_H(binding_site_atoms, output, force_field, use_propka, PH, WRITE_TO_OUTPUT=True)
                    else:
                        binding_site_atoms = MolHandler.generateBindingSite(pdb[0], io, PDB_Name, PDB_ID, Chain, Output_DIR,
                                                                 residue,
                                                                 binding_site_radius, keep_waters,
                                                                 WRITE_TO_FILE=True)
                    binding_site_atoms.close()


        debug("Saving Peptidic Chain . . .")
        io.set_structure(model[Chain])

        if (protonate_chain):
            try: 
                ChainVirtualString = StringIO()
                if (keep_waters):
                    chain_out_dir = Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}_H_W.pqr" #todo maybe change to pdb or even mol2
                    io.save(ChainVirtualString, keepWaterSelect)
                    generate_target_H(PDB_FILE=ChainVirtualString, OUTPUT_FILE=chain_out_dir, force_field=force_field,
                                USE_PROPKA=use_propka, PH=PH, WRITE_TO_OUTPUT=True)

                else:
                    chain_out_dir = Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}_H.pqr" #todo maybe change to pdb or even mol2
                    io.save(ChainVirtualString, nonHetSelect)
                    generate_target_H(PDB_FILE=ChainVirtualString, OUTPUT_FILE=chain_out_dir, force_field=force_field,
                                USE_PROPKA=use_propka, PH=PH, WRITE_TO_OUTPUT=True)

            
            except Exception as e:
                print("Chain protonation failed, Chain " + Chain +" of " + PDB_ID +  " might not peptidic, skipping")
            finally:
                ChainVirtualString.close()

        else :
            if (keep_waters):
                io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}_W_.pdb", keepWaterSelect)
            else:
                io.save(Output_DIR + "/" + PDB_ID + "/" f"{PDB_Name}_{Chain}.pdb", nonHetSelect)

        io.set_structure(pdb)
        # SAVING FULL PROTEIN
        if saveFullProtein:
            debug("saving full protein")
            copyfile(input_DIR + "/" + PDB_FILE, Output_DIR + "/" + PDB_ID + "/" + f"{PDB_Name}.pdb")
    if compressedFile:
        Structure.close()  # CLOSE STRING IO IF FILE IS COMPRESSED

