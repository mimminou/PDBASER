import threading
from os import path, listdir
from pygubu import Builder
import get_Chain
import get_Residue
import MolHandler
from tkinter import messagebox
from io import BytesIO
from PIL import Image, ImageTk  # NEEDED FOR DEPICTION
from logging import debug
from threading import Thread

PROJECT_PATH = path.dirname(__file__)
PROJECT_UI = path.join(PROJECT_PATH, "Main.ui")


class MainApp:
    def __init__(self):
        self.PDB_Files = []
        self.format = "pdb"
        self.builder = builder = Builder()
        builder.add_resource_path(PROJECT_PATH)
        builder.add_from_file(PROJECT_UI)
        # GET MAIN WINDOW ITEMS
        self.mainwindow = builder.get_object('toplevel0')  ##GET MAIN WINDOW
        self.mainwindow.iconbitmap("default_icon.ico")
        self.PDB_input_DIR = builder.get_object("PDB_input_DIR")  ##GET INPUT DIR
        self.PDB_output_DIR = builder.get_object("PDB_output_DIR")  ##GET OUTPUT DIR
        self.SearchBox = builder.get_object("SearchBox")
        self.SearchBox.bind("<Return>", self.finder)
        self.ExtractButton = builder.get_object("Extract_Button")
        self.InputDirLabel = builder.get_object("Input_Dir_Label")
        self.OutputDirLabel = builder.get_object("Output_Dir_Label")
        self.findLabel = builder.get_object("FindLabel")

        # GET CheckBOXes
        self.checkBoxExtractFullProt = builder.get_variable("ExtractFullProtein")
        self.checkboxDepiction = builder.get_variable("SaveDepiction")

        # GET IMAGE SECTION
        self.imager = builder.get_object("Depiction")

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

        ## GET COMBOBOX FOR RESIDUES TYPES
        self.combobox = builder.get_object("formatComboBox")

        ##GET THREAD LOCKS

        self.pdbSelectionChangeLock = threading.Lock()
        self.ChainSelectionChangeLock = threading.Lock()
        self.ExtractorLock = threading.Lock()

        ##GET PROGRESSBAR VAR
        self.progressBarVar = builder.get_variable("barVar")


        builder.connect_callbacks(self)

    def input_Path_Changed(self, event=None):
        self.setList([])
        self.ListBox_PDB.delete(0, "end")
        self.ListBox_Chains.delete(0, "end")
        self.ListBox_Residues.delete(0, "end")

        extensions = [".pdb", ".PDB", ".ent", ".ENT", ".ent.gz", ".pdb.gz"]
        path = self.PDB_input_DIR.cget("path")

        # iterate through files
        try:
            for file in listdir(path):
                if file.endswith(tuple(extensions)):
                    self.PDB_Files.append(file)
            if not self.PDB_Files:
                messagebox.showerror("No PDB files", "No PDB / ENT files found, please select another directory")
                self.InputDirLabel.config(foreground="red")
            else:
                self.ListBox_PDB.insert("end", *self.PDB_Files)
                self.setList(self.PDB_Files)
                self.findLabel.config(foreground="black")
                self.InputDirLabel.config(foreground="Green")
                return True

        except Exception as inputException:
            debug("Error in input path")
            debug(inputException)

    def output_Path_Changed(self, event=None):
        output_path = self.PDB_output_DIR.cget("path")
        self.OutputDirLabel.config(foreground="green")
        return output_path

    ##LIST Selection Changed event listener and update Chains View
    def On_PDBSelectionChanged(self, event=None):
        self.ListBox_Chains.delete(0, "end")
        self.ListBox_Residues.delete(0, "end")
        pdbselectionThread = Thread(target=self.PDBSelectionThread)
        if not self.pdbSelectionChangeLock.locked():
            pdbselectionThread.start()


    def PDBSelectionThread(self):
        self.pdbSelectionChangeLock.acquire(True)
        if self.getList():
            try:
                selection = self.ListBox_PDB.get(self.ListBox_PDB.curselection())
                debug("MY SELECTION : " + str(selection))
                self.ListBox_Chains.insert("end",
                                           *get_Chain.get_PDB_Chains(str(selection), self.PDB_input_DIR.cget("path")))
                self.imager.config(image="")
            except Exception as exception:
                print(exception)
        self.pdbSelectionChangeLock.release()

    def On_ChainSelectionChanged(self, event=None):
        self.ListBox_Residues.delete(0, "end")
        chainselectionThread = Thread(target=self.ChainSelectionThread)
        if not self.ChainSelectionChangeLock.locked():
            chainselectionThread.start()

    def ChainSelectionThread(self, event=None):
        self.ChainSelectionChangeLock.acquire(True)
        try:
            selection = self.ListBox_Chains.get(self.ListBox_Chains.curselection())
            debug(selection)
            self.ListBox_Residues.insert("end", *get_Residue.get_PDB_Residues(
                self.ListBox_PDB.get(self.ListBox_PDB.curselection()), selection, self.PDB_input_DIR.cget("path")))
            self.imager.config(image="")
            debug("MY SELECTION : " + str(selection))
        except Exception as exc:
            debug(exc)
        self.ChainSelectionChangeLock.release()

    def On_ResidueSelectionChanged(self, event=None):
        # DRAWING FUNCTION THREAD
        ResSelectionThread = Thread(target=self.ResidueSelectionChangeFunction)
        if not (ResSelectionThread.is_alive()):
            ResSelectionThread.start()

    def ResidueSelectionChangeFunction(self):
        selected_res = []
        selected_index = 0
        try:
            for index in self.ListBox_Residues.curselection():
                selected_res.append(self.ListBox_Residues.get(index))
                selected_index = index
            # //// DEPICTION FUNCTION
            if not (selected_res.__len__() == 0 or selected_res.__len__() > 1):
                get_image = MolHandler.DrawMol(self.PDB_input_DIR.cget("path"),
                                               self.PDB_output_DIR.cget("path"),
                                               self.ListBox_PDB.get(self.ListBox_PDB.curselection()),
                                               self.ListBox_Chains.get(self.ListBox_Chains.curselection()),
                                               self.ListBox_Residues.get(selected_index))

                imageAsBytes = BytesIO(get_image)
                depiction = Image.open(imageAsBytes)
                self.img1 = ImageTk.PhotoImage(depiction)
                self.imager.config(image=self.img1)
                imageAsBytes.close()
            else:
                debug("NOT PRINTING, TOO MANY SELECTIONS")
                self.imager.config(image="")


        except Exception as residueSelectionException:
            debug("Residue selection error : " + str(residueSelectionException))

    def finder(self, event=None):
        SearchTerm = self.SearchBox.get()
        list = self.ListBox_PDB.get(0, "end")
        for entry in self.PDB_Files:
            if (SearchTerm.casefold() in entry.casefold()):
                self.ListBox_PDB.selection_clear(0, "end")
                self.ListBox_PDB.see(list.index(entry))
                self.ListBox_PDB.selection_set(list.index(entry))
                self.findLabel.config(foreground="black")
                self.ListBox_PDB.event_generate('<<ListboxSelect>>')
                break
        else:
            self.SearchBox.selection_range(0, "end")
            messagebox.showinfo("Warning", "No entry ' " + str(SearchTerm) + " ' in this directory")
            self.findLabel.config(foreground="red")

    def ButtonOnClick(self, event=None):
        if self.PDB_input_DIR.cget("path") and self.PDB_output_DIR.cget("path"):
            try:
                self.Extractor()
            except Exception as exception:
                messagebox.showerror("Error", "Please select a protein and a chain")
                print(exception)

        else:
            if not self.PDB_output_DIR.cget("path"):
                # self.OutputDirLabel.config(foreground="red")
                self.flashLabel(self.OutputDirLabel, 0)
            if not self.PDB_input_DIR.cget("path"):  # or not self.input_Path_Changed():
                # self.InputDirLabel.config(foreground="red")
                self.flashLabel(self.InputDirLabel, 0)

    def flashLabel(self, Label, iteration):
        current_color = Label.cget("foreground")
        next_color = "black" if current_color == "red" else "red"
        Label.config(foreground=next_color)
        if not iteration > 5:
            iteration = iteration + 1
            Label.after(200, self.flashLabel, Label, iteration)
        else:
            Label.config(foreground="red")

    def ComboxSelected(self, event=None):
        debug("CBOX SELECTED : " + self.combobox.get())
        self.setOutputFormat(self.combobox.get())

    def Extractor(self):
        ExtractionThread = Thread(target=self.extractionThread)

        if not self.ExtractorLock.locked():
            self.progressBarVar.set(20)
            ExtractionThread.start()

    def extractionThread(self):
        self.ExtractorLock.acquire()
        selected_residues = []
        extracted_values = []
        self.progressBarVar.set(45)

        for index in self.ListBox_Residues.curselection():
            selected_residues.append(self.ListBox_Residues.get(index))
        extracted_values.append(MolHandler.Extract(self.PDB_input_DIR.cget("path"),
                                                   self.PDB_output_DIR.cget("path"),
                                                   self.ListBox_PDB.get(self.ListBox_PDB.curselection()),
                                                   self.ListBox_Chains.get(self.ListBox_Chains.curselection()),
                                                   self.getOutputFormat(),
                                                   selected_residues, self.checkBoxExtractFullProt.get(),
                                                   self.checkboxDepiction.get()))
        self.ListBox_PDB.itemconfig(self.ListBox_PDB.curselection(), bg="lawn green")

        self.ExtractionDone(extracted_values)
        self.ExtractorLock.release()

    def ExtractionDone(self, values):
        self.progressBarVar.set(100)
        messagebox.showinfo("Extraction Successeful",
                            "Protein : " + self.ListBox_PDB.get(self.ListBox_PDB.curselection()) + "\n"
                                                                                                   "Chain : " + self.ListBox_Chains.get(
                                self.ListBox_Chains.curselection()) + "\n"
                                                                      "Residue : \n" + "\n".join(values[0]))
        self.progressBarVar.set(0)

    def setOutputFormat(self, format):
        self.format = format
        return format

    def getOutputFormat(self):
        return self.format

    def getList(self):
        return self.PDB_Files

    def setList(self, list):
        self.PDB_Files = list

    def run(self):
        self.mainwindow.mainloop()


if __name__ == '__main__':
    app = MainApp()
    app.run()
