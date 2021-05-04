import os
import pathlib
import tkinter

import pygubu
from Bio.PDB import PDBParser, PDBIO, Select
import get_Chain
import get_Residue
from tkinter import messagebox

PROJECT_PATH = os.path.dirname(__file__)
PROJECT_UI = os.path.join(PROJECT_PATH, "Main.ui")




class MainApp:
    def __init__(self):
        self.PDB_Files = []
        self.builder = builder = pygubu.Builder()
        builder.add_resource_path(PROJECT_PATH)
        builder.add_from_file(PROJECT_UI)
        self.mainwindow = builder.get_object('toplevel0')  ##GET MAIN WINDOW
        self.PDB_input_DIR = builder.get_object("PDB_input_DIR")  ##GET INPUT DIR
        self.PDB_output_DIR = builder.get_object("PDB_output_DIR")   ##GET OUTPUT DIR
        self.SearchBox = builder.get_object("SearchBox")
        self.SearchBox.bind("<Return>", self.finder)

        input_Path = ""
        output_Path = ""

                    ## GET LISTS ##
        self.ListBox_PDB = builder.get_object("listbox1")
        self.ListBox_Chains = builder.get_object("listbox2")
        self.ListBox_Residues = builder.get_object("listbox3")

                    ## GET SCROLLBARS ##
        self.ScrollbarPDB = builder.get_object("scrollbarPDB")
        self.ScrollbarPDB.config(command=self.ListBox_PDB.yview)
        self.ScrollbarChains = builder.get_object("scrollbarChain")
        self.ScrollbarChains.config(command=self.ListBox_Chains.yview)
        self.ScrollbarResidues = builder.get_object("scrollbarResidue")
        self.ScrollbarResidues.config(command=self.ListBox_Residues.yview)

                    ## BIND SCROLLBARS ##
        self.ListBox_PDB.config(yscrollcommand=self.ScrollbarPDB.set)
        self.ListBox_Chains.config(yscrollcommand=self.ScrollbarChains.set)
        self.ListBox_Residues.config(yscrollcommand=self.ScrollbarResidues.set)

        builder.connect_callbacks(self)

    def input_Path_Changed(self, event=None):
        self.setList([])
        self.ListBox_PDB.delete(0,"end")

        extensions = [".pdb",".PDB",".ent",".ENT"]
        extractionTypes = ["_ligand.pdb","_protein.pdb"]
        path = self.PDB_input_DIR.cget("path")

        #iterate through files
        for file in os.listdir(path):
            if file.endswith(tuple(extensions)) and not file.endswith(tuple(extractionTypes)):
                self.PDB_Files.append(file)
        if not self.PDB_Files :
            messagebox.showinfo("No PDB files","No PDB / ENT files found, please select another directory")

        else :
            self.ListBox_PDB.insert("end",*self.PDB_Files)
            self.setList(self.PDB_Files)


    def output_Path_Changed(self, event):
        output_path = self.PDB_output_DIR.cget("path")
        return output_path


    ##LIST Selection Changed event listener and update Chains View
    def On_PDBSelectionChanged(self,event):
        if self.getList():
            self.ListBox_Chains.delete(0,"end")
            self.ListBox_Residues.delete(0, "end")
            try :
                selection = self.ListBox_PDB.get(self.ListBox_PDB.curselection())

                print("MY SELECTION : " + str(selection))
                #print(PROJECT_PATH)
                #print(get_Chain.get_PDB_Chains(str(selection),self.PDB_input_DIR.cget("path")))
                self.ListBox_Chains.insert("end",*get_Chain.get_PDB_Chains(str(selection),self.PDB_input_DIR.cget("path")))
            except Exception as exception:
                print(exception)


    def On_ChainSelectionChanged(self, event=None):
        self.ListBox_Residues.delete(0,"end")
        try:
            selection = self.ListBox_Chains.get(self.ListBox_Chains.curselection())
            print(selection)
            self.ListBox_Residues.insert("end",*get_Residue.get_PDB_Residues(self.ListBox_PDB.get(self.ListBox_PDB.curselection()) ,selection, self.PDB_input_DIR.cget("path")))

            print("MY SELECTION : " + str(selection))
        except Exception as exc:
            print(exc)

    def On_ResidueSelectionChanged(self, event=None):
        pass



    def finder(self,event):
        SearchTerm = self.SearchBox.get()
        list = self.ListBox_PDB.get(0,"end")
        for entry in self.PDB_Files:
            if(SearchTerm in entry):
                self.ListBox_PDB.selection_clear(0,"end")
                self.ListBox_PDB.see(list.index(entry))
                self.ListBox_PDB.selection_set(list.index(entry))

                print("HAHAHAHAHAHA")
                self.ListBox_PDB.event_generate('<<ListboxSelect>>')
                break

        else :
            self.SearchBox.selection_range(0,"end")
            messagebox.showinfo("Warning","No entry ' " + str(SearchTerm) + " ' in this directory")

    def Extractor(self):
        output = self.output_Path_Changed(None)
        #TODO : EXTRACT SELECTION IN A SINGLE FOLDER

    def getList(self):
        return self.PDB_Files

    def setList(self,list):
        self.PDB_Files = list

    def run(self):
        self.mainwindow.mainloop()


if __name__ == '__main__':

    app = MainApp()
    app.run()

