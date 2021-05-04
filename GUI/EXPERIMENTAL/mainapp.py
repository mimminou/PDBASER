import os
import pygubu


PROJECT_PATH = os.path.dirname(__file__)
PROJECT_UI = os.path.join(PROJECT_PATH, "Main.ui")


class MainApp:
    def __init__(self):
        self.builder = builder = pygubu.Builder()
        builder.add_resource_path(PROJECT_PATH)
        builder.add_from_file(PROJECT_UI)
        self.mainwindow = builder.get_object('toplevel0')
        builder.connect_callbacks(self)
    
    def On_PDBSelectionChanged(self, event=None):
        pass

    def On_ChainSelectionChanged(self, event=None):
        pass

    def On_ResidueSelectionChanged(self, event=None):
        pass

    def input_Path_Changed(self, event=None):
        pass

    def output_Path_Changed(self, event=None):
        pass

    def run(self):
        self.mainwindow.mainloop()

if __name__ == '__main__':
    app = MainApp()
    app.run()

