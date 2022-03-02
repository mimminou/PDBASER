import platform



from io import StringIO, BytesIO
from shutil import copyfile
from logging import debug
from oasa.molfile import text_to_mol
from oasa.coords_generator import coords_generator
from oasa.cairo_out import cairo_out
from gzip import open as gzOpen

# if (platform.system() == "Windows"):
#     from obabel.openbabel import pybel
# else:
#     from openbabel import pybel


from openbabel import pybel


print(pybel.informats.keys())