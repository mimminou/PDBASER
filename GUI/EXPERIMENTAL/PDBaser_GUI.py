import tkinter as tk
import tkinter.messagebox
import tkinter.ttk as ttk
from pygubu.widgets.pathchooserinput import PathChooserInput




class MainApp:
    def __init__(self, master=None):
        # build ui
        self.toplevel0 = tk.Tk() if master is None else tk.Toplevel(master)
        self.frame0 = ttk.Frame(self.toplevel0)
        self.label1 = ttk.Label(self.frame0)
        self.label1.configure(font='{Arial} 14 {}', text='PDB File')
        self.label1.grid(column='0', columnspan='3', row='0')
        self.label1.columnconfigure('0', minsize='180', weight='10')
        self.listbox1 = tk.Listbox(self.frame0)
        self.listbox1.grid(column='0', columnspan='3', ipadx='50', ipady='100', padx='5', row='1', rowspan='6', sticky='nsew')
        self.listbox1.rowconfigure('1', minsize='0', pad='10', weight='10')
        self.listbox1.columnconfigure('0', minsize='180', weight='10')
        self.label2 = ttk.Label(self.frame0)
        self.label2.configure(font='{Arial} 14 {}', text='Chain')
        self.label2.grid(column='4', columnspan='3', row='0')
        self.label2.columnconfigure('4', minsize='180', weight='10')
        self.listbox2 = tk.Listbox(self.frame0)
        self.listbox2.grid(column='4', columnspan='3', ipadx='50', ipady='100', row='1', rowspan='6', sticky='nsew')
        self.listbox2.rowconfigure('1', minsize='0', pad='10', weight='10')
        self.listbox2.columnconfigure('4', minsize='180', weight='10')
        self.label3 = ttk.Label(self.frame0)
        self.label3.configure(font='{Arial} 14 {}', text='Residue')
        self.label3.grid(column='8', columnspan='3', row='0')
        self.label3.columnconfigure('8', minsize='180', weight='10')
        self.listbox3 = tk.Listbox(self.frame0)
        self.listbox3.configure(takefocus=False)
        self.listbox3.grid(column='8', columnspan='3', ipadx='50', ipady='100', padx='5', row='1', rowspan='6', sticky='nsew')
        self.listbox3.rowconfigure('1', minsize='0', pad='10', weight='10')
        self.listbox3.columnconfigure('8', minsize='180', weight='10')
        self.separator3 = ttk.Separator(self.frame0)
        self.separator3.configure(orient='vertical')
        self.separator3.grid(column='3', padx='20', row='0', rowspan='7', sticky='ns')
        self.separator4 = ttk.Separator(self.frame0)
        self.separator4.configure(orient='vertical')
        self.separator4.grid(column='7', padx='20', row='0', rowspan='7', sticky='ns')
        self.frame0.configure(padding='5')
        self.frame0.grid(column='0', columnspan='10', ipadx='0', ipady='0', padx='10', pady='10', row='0', rowspan='6', sticky='nsew')
        self.frame0.rowconfigure('0', minsize='150', pad='10', weight='12')
        self.frame0.columnconfigure('0', minsize='0', weight='8')
        self.frame1 = ttk.Frame(self.toplevel0)
        self.label4 = tk.Label(self.frame1)
        self.label4.configure(relief='flat', text='Input Directory')
        self.label4.grid(column='0', row='0', sticky='ew')
        self.label4.rowconfigure('0', minsize='0')
        self.PDB_input_DIR = PathChooserInput(self.frame1)
        self.PDB_input_DIR.configure(mustexist='true', title='PDB directory Folder', type='directory')
        self.PDB_input_DIR.grid(column='1', columnspan='3', ipadx='180', padx='5', row='0', sticky='ew')
        self.PDB_input_DIR.rowconfigure('0', minsize='0')
        self.PDB_input_DIR.columnconfigure('0', minsize='0', pad='0')
        self.PDB_input_DIR.bind('<PathChooserPathChanged>', self.input_Path_Changed, add='')
        self.separator2 = ttk.Separator(self.frame1)
        self.separator2.configure(orient='vertical')
        self.separator2.grid(column='5', columnspan='2', padx='20', row='0', rowspan='2', sticky='ns')
        self.separator2.rowconfigure('0', minsize='0')
        self.label5 = tk.Label(self.frame1)
        self.label5.configure(relief='flat', text='Output Directory')
        self.label5.grid(column='0', row='1', sticky='ew')
        self.PDB_output_DIR = PathChooserInput(self.frame1)
        self.PDB_output_DIR.configure(mustexist='true', title='PDB directory Folder', type='directory')
        self.PDB_output_DIR.grid(column='1', columnspan='3', ipadx='180', padx='5', row='1', sticky='ew')
        self.PDB_output_DIR.rowconfigure('0', minsize='0')
        self.PDB_output_DIR.columnconfigure('0', minsize='0', pad='0')
        self.PDB_output_DIR.bind('<PathChooserPathChanged>', self.output_Path_Changed, add='')
        self.Extract_Button = ttk.Button(self.frame1)
        self.Extract_Button.configure(text='Extract')
        self.Extract_Button.grid(column='7', columnspan='2', padx='10', row='0', rowspan='2', sticky='nsew')
        self.Extract_Button.rowconfigure('0', minsize='0')
        self.frame1.configure(height='100', width='800')
        self.frame1.grid(column='0', columnspan='10', padx='10', pady='10', row='6', rowspan='2', sticky='sew')
        self.frame1.rowconfigure('1', weight='0')
        self.frame1.rowconfigure('6', minsize='80', weight='1')
        self.frame1.columnconfigure('0', minsize='0', weight='8')
        self.toplevel0.configure(cursor='arrow', highlightbackground='#c8797b', relief='flat')
        self.toplevel0.geometry('800x480')
        self.toplevel0.minsize(800, 400)
        self.toplevel0.resizable(False, True)
        self.toplevel0.title('PDBaser - GUI')

        # Main widget
        self.mainwindow = self.toplevel0

    def input_Path_Changed(self, event=None):
        input_Path = self.PDB_input_DIR.cget("path")
        tk.messagebox.showinfo("You picked : ", input_Path)
        pass

    def output_Path_Changed(self, event=None):
        pass

    def populateList(self):
        pass

    def run(self):
        self.mainwindow.mainloop()

if __name__ == '__main__':
    app = MainApp()
    app.run()

