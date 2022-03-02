from os import path, listdir
from pygubu import Builder
import get_Chain
import get_Residue
import MolHandler
import get_PDB
from tkinter import messagebox, TclError
from io import BytesIO
from PIL import Image, ImageDraw, ImageFont, ImageTk  # NEEDED FOR DEPICTION
from logging import debug
from threading import Thread, Lock
from platform import system

# HIDDEN IMPORTS NEEDED FOR NUITKA :
from pygubu.builder import tkstdwidgets
from pygubu.builder import ttkstdwidgets
from pygubu.builder import widgets
from pygubu.builder.widgets import pathchooserinput

PROJECT_PATH = path.dirname(__file__)
PROJECT_UI = path.join(PROJECT_PATH, "Main.ui")
global loadedPDB


class MainApp:
    def __init__(self):
        self.VERSION = "Abdelaziz. A, PDBaser(1.8)"
        self.PDB_Files = []
        self.format = "pdb"
        self.builder = builder = Builder()
        builder.add_resource_path(PROJECT_PATH)
        builder.add_from_file(PROJECT_UI)
        # GET MAIN WINDOW ITEMS
        self.mainwindow = builder.get_object('toplevel0')  ##GET MAIN WINDOW
        if system() == "Windows":
            self.mainwindow.iconbitmap("default_icon.ico") ##Set Icon for Windows
        self.PDB_input_DIR = builder.get_object("PDB_input_DIR")  ##GET INPUT DIR
        self.PDB_output_DIR = builder.get_object("PDB_output_DIR")  ##GET OUTPUT DIR
        self.SearchBox = builder.get_object("SearchBox")
        self.SearchBox.bind("<Return>", self.finder)
        self.ExtractButton = builder.get_object("Extract_Button")
        self.ExtractButton.config(command=self.ButtonOnClick)
        self.InputDirLabel = builder.get_object("Input_Dir_Label")
        self.OutputDirLabel = builder.get_object("Output_Dir_Label")
        self.findLabel = builder.get_object("FindLabel")
        self.versionLabel = builder.get_object("VersionLabel")
        self.getFromFTP = builder.get_object("getFromFTP")
        self.getFromFTP.bind("<Return>", self.downloadPDB)
        self.DownloaderButton = builder.get_object("DownloadButton")
        self.DownloaderButton.config(command=self.downloadPDB)
        self.img1 = ""

        # GET CheckBOXes
        self.checkBoxExtractFullProt = builder.get_variable("ExtractFullProtein")
        self.checkboxDepictionPNG = builder.get_variable("SaveDepictionPNG")
        self.checkboxDepictionSVG = builder.get_variable("SaveDepictionSVG")
        self.checkboxAddHydrogens = builder.get_variable("addHydrogens")

        # GET IMAGE SECTION
        # self.imager = builder.get_object("Depiction") #Deprecated, Instead of LABEL use CANVAS
        self.imager = builder.get_object("canvas1")


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

        self.pdbSelectionChangeLock = Lock()
        self.ChainSelectionChangeLock = Lock()
        self.ExtractorLock = Lock()
        self.Downloader = Lock()

        ##GET PROGRESSBAR VAR
        self.progressBarVar = builder.get_variable("barVar")
        builder.connect_callbacks(self)

        ## SET VERSION NUM
        self.versionLabel.config(text=self.VERSION)

        # get multiprocessing

    def input_Path_Changed(self, event=None):
        self.setList([])
        self.ListBox_PDB.delete(0, "end")
        self.ListBox_Chains.delete(0, "end")
        self.ListBox_Residues.delete(0, "end")
        self.imager.create_image(480, 480, image="", anchor="nw")
        # self.imager.config(image="") deprecated

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
        self.progressBarVar.set(0)
        self.ListBox_Chains.delete(0, "end")
        self.ListBox_Residues.delete(0, "end")
        pdbselectionThread = Thread(target=self.PDBSelectionThread)
        if not self.pdbSelectionChangeLock.locked():
            pdbselectionThread.start()

    def PDBSelectionThread(self):
        self.pdbSelectionChangeLock.acquire(True)
        if self.getList():
            try:
                self.ListBox_PDB.config(state="disabled")
                selection = self.ListBox_PDB.get(self.ListBox_PDB.curselection())
                debug("MY SELECTION : " + str(selection))
                self.ListBox_Chains.insert("end",
                                           *get_Chain.get_PDB_Chains(str(selection), self.PDB_input_DIR.cget("path")))
                # self.imager.config(image="")
                self.imager.create_image(480, 480, image="", anchor="nw")

            except Exception as exception:
                print(exception)
        self.ListBox_PDB.config(state="normal")
        self.pdbSelectionChangeLock.release()

    def On_ChainSelectionChanged(self, event=None):
        self.ListBox_Residues.delete(0, "end")
        self.progressBarVar.set(0)
        chainselectionThread = Thread(target=self.ChainSelectionThread)
        if not self.ChainSelectionChangeLock.locked():
            chainselectionThread.start()

    def ChainSelectionThread(self, event=None):
        global loadedPDB
        self.ChainSelectionChangeLock.acquire(True)
        try:
            self.ListBox_PDB.config(state="disabled")
            selection = self.ListBox_Chains.get(self.ListBox_Chains.curselection())
            debug(selection)
            get_ResidueReturn = get_Residue.get_PDB_Residues(self.ListBox_PDB.get(self.ListBox_PDB.curselection()),
                                                             selection, self.PDB_input_DIR.cget("path"))
            self.ListBox_Residues.insert("end", *get_ResidueReturn[0])
            loadedPDB = get_ResidueReturn[1]
            # self.imager.config(image="")
            self.imager.create_image(480, 480, image="", anchor="nw")

            debug("MY SELECTION : " + str(selection))
        except Exception as exc:
            debug(exc)
        self.ListBox_PDB.config(state="normal")
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
            #? DEPICTION FUNCTION
            if not (selected_res.__len__() == 0 or selected_res.__len__() > 1):
                self.drawDepiction(selected_index)
            else:
                debug("NOT PRINTING, TOO MANY SELECTIONS")
                # self.imager.config(image="")
                self.imager.create_image(480, 480, image="", anchor="nw")


        except Exception as residueSelectionException:
            debug("Residue selection error : " + str(residueSelectionException))

    def drawDepiction(self, selected_index):
        self.get_image, self.MW = MolHandler.DrawMol(self.PDB_input_DIR.cget("path"),
                                                     self.ListBox_PDB.get(self.ListBox_PDB.curselection()),
                                                     self.ListBox_Chains.get(self.ListBox_Chains.curselection()),
                                                     self.ListBox_Residues.get(selected_index),
                                                     loadedPDB)  ##MW is molecular weight
        if not (self.get_image is False):
            self.imageAsBytes = BytesIO(self.get_image)
            try:
                self.depiction = self.Resize_Image(
                    Image.open(self.imageAsBytes))  # Resizes image and adds white bars if it isn't squared

                drawMW = ImageDraw.Draw(self.depiction)
                font = ImageFont.truetype("LiberationSans-Regular.ttf", size=15,) # Avoid specifying a font for crosscompatibility
                drawMW.text((5, 5), str(self.MW + " g/mol"), fill=(0, 0, 0), font=font)
                self.img1 = ImageTk.PhotoImage(self.depiction)
                self.imager.create_image(0, 0, image=self.img1, anchor="nw")
                # self.imager.config(image=self.img1)
                self.imageAsBytes.close()
            except Exception as exc:
                print("Image Generation Exception")
                print(exc)
                self.imageAsBytes.close()

        else:
            print("Error in image depiction")
            messagebox.showerror("Error", "There was an error generating the image")

    def Resize_Image(self, inputImage):  # Thanks Jay D from SO ... you saved my life
        image = inputImage
        image_size = image.size
        width = image_size[0]
        height = image_size[1]
        x = 320
        y = 320
        bigside = width if width > height else height
        background = Image.new('RGBA', (bigside, bigside), (255, 255, 255, 255))
        offset = (int(round(((bigside - width) / 2), 0)), int(round(((bigside - height) / 2), 0)))
        background.paste(image, offset)
        background = background.resize((x, y))
        return background

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

    def downloadPDB(self, event=None):
        downloadThread = Thread(target=self.getPDBFromServer)
        if self.PDB_input_DIR.cget("path"):
            if (not downloadThread.is_alive()) or (not self.Downloader.locked()):
                downloadThread.start()
        else:
            messagebox.showerror("Error", "Please select an input path for downloading")

    def getPDBFromServer(self, event=None):
        if not all(char.isalnum() or char.isspace() for char in self.getFromFTP.get()):
            messagebox.showerror("Failed to download", "Please select correct PDB ID codes")
            return
        PDBList = self.getFromFTP.get().split()
        NotFound = []
        Existing = []
        Downloaded = []
        count = len(PDBList)
        if PDBList:
            self.getFromFTP.config(state="disabled")
            self.getFromFTP.unbind("<Return>")
            self.ListBox_PDB.config(state="disabled")
            self.ListBox_Chains.config(state="disabled")
            self.ListBox_Residues.config(state="disabled")
            self.DownloaderButton.config(state="disabled")
            self.ExtractButton.config(state="disabled")
            self.Downloader.acquire()
            i = 0
            for entry in PDBList:
                i = (i + (100 / count)).__round__(2)
                self.progressBarVar.set(i)  ## SET PROGRESS BAR TO i VALUE
                DownloadOperation = get_PDB.getPDBFromFTP(self.PDB_input_DIR.cget("path"), entry)
                if DownloadOperation == 0:
                    Downloaded.append(entry)
                elif DownloadOperation == 1:
                    messagebox.showerror("cannot access PDB", "Please check your internet connection or proxy settings")
                    return
                elif DownloadOperation == 2:
                    Existing.append(entry)
                elif DownloadOperation == 3:
                    NotFound.append(entry)

        try:
            self.getFromFTP.config(state="normal")
            self.ListBox_PDB.config(state="normal")
            self.ListBox_Chains.config(state="normal")
            self.ListBox_Residues.config(state="normal")
            self.DownloaderButton.config(state="normal")
            self.ExtractButton.config(state="normal")
            self.getFromFTP.bind("<Return>", self.downloadPDB)
            self.Downloader.release()
            self.progressBarVar.set(0)
        except Exception as runtimeError:
            pass
        if Downloaded or NotFound or Existing:  # THESE are LISTS WITH values presenting downloaded / not downloaded PDB files / Existing
            messagebox.showinfo("Task done", "\n" + "\nDownloaded : " + ", ".join(Downloaded) +
                                "\n\nNot Found : " + ", ".join(NotFound) +
                                "\n\nExisting : " + ", ".join(Existing))
        self.input_Path_Changed()

    def ButtonOnClick(self, event=None):
        if self.PDB_input_DIR.cget("path") and self.PDB_output_DIR.cget("path"):
            try:
                self.Extractor()
            except Exception as exception:
                self.ListBox_PDB.config(state="normal")
                self.ListBox_Chains.config(state="normal")
                self.ListBox_Residues.config(state="normal")
                self.DownloaderButton.config(state="normal")
                self.ExtractButton.config(state="normal")
                self.progressBarVar.set(0)
                messagebox.showerror("Error", "Please select a protein and a chain")
                print(exception)

        else:
            if not self.PDB_output_DIR.cget("path"):
                self.flashLabel(self.OutputDirLabel, 0)
            if not self.PDB_input_DIR.cget("path"):
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
        self.getFromFTP.delete(0, "end")
        ExtractionThread = Thread(target=self.extractionThread)

        if not self.ExtractorLock.locked():
            self.progressBarVar.set(20)
            ExtractionThread.start()

    def extractionThread(self):
        self.ExtractorLock.acquire()
        selected_residues = []
        extracted_values = []
        self.progressBarVar.set(45)
        try:
            self.ListBox_PDB.config(state="disabled")
            self.ListBox_Chains.config(state="disabled")
            self.ListBox_Residues.config(state="disabled")
            self.DownloaderButton.config(state="disabled")
            self.ExtractButton.config(state="disabled")
            for index in self.ListBox_Residues.curselection():
                selected_residues.append(self.ListBox_Residues.get(index))
            extracted_values.append(MolHandler.Extract(self.PDB_input_DIR.cget("path"),
                                                       self.PDB_output_DIR.cget("path"),
                                                       self.ListBox_PDB.get(self.ListBox_PDB.curselection()),
                                                       self.ListBox_Chains.get(self.ListBox_Chains.curselection()),
                                                       self.getOutputFormat(),
                                                       selected_residues, self.checkBoxExtractFullProt.get(),
                                                       self.checkboxDepictionPNG.get(),
                                                       self.checkboxDepictionSVG.get(),
                                                       self.checkboxAddHydrogens.get()))
            self.progressBarVar.set(80)

            self.ListBox_PDB.itemconfig(self.ListBox_PDB.curselection(), bg="lawn green")

            self.ExtractionDone(extracted_values)
        except TclError as exception:
            print(exception)
            print(self.ListBox_Chains.size())
            if not self.ListBox_PDB.curselection():
                messagebox.showerror("Error", "Please Select a protein and a chain")
                self.progressBarVar.set(0)
            elif not (self.ListBox_Chains.size() > 0):
                messagebox.showerror("Error", "Could not read chains from this file, perhaps it's a residue ?")
                self.ListBox_PDB.itemconfig(self.ListBox_PDB.curselection(), bg="tomato2")
                self.progressBarVar.set(0)
            elif not (self.ListBox_Chains.curselection()):
                messagebox.showerror("Error", "Please Select a chain")
                self.progressBarVar.set(0)

        self.ListBox_PDB.config(state="normal")
        self.ListBox_Chains.config(state="normal")
        self.ListBox_Residues.config(state="normal")
        self.DownloaderButton.config(state="normal")
        self.ExtractButton.config(state="normal")

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
