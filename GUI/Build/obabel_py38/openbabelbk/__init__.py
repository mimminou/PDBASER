import sys
import warnings

# unofficial Windows binaries: set BABEL environment variables
import os

try:
    if 'BABEL_DATADIR' not in os.environ:
        here = os.path.dirname(__file__)
        os.environ['BABEL_LIBDIR'] = here
        os.environ['BABEL_DATADIR'] = os.path.join(here, 'data')
        os.environ['PATH'] = here + ";" + os.environ['PATH']
except Exception:
    pass

from . import openbabel

__version__ = "3.1.1"

_thismodule = sys.modules[__name__]

class OBProxy(object):
    def __getattr__(self, name):
        if hasattr(_thismodule, name):
            return getattr(_thismodule, name)
        elif hasattr(openbabel, name):
            warnings.warn('"import openbabel" is deprecated, instead use "from openbabel import openbabel"')
            return getattr(openbabel, name)
        else:
            raise AttributeError

sys.modules[__name__] = OBProxy()
