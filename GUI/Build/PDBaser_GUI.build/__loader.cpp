
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 513 > 0
static unsigned char *bytecode_data[513];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_Bio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Align(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Align$substitution_matrices(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$ClustalIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$EmbossIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$FastaIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$Interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$MafIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$MauveIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$MsfIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$NexusIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$PhylipIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$AlignIO$StockholmIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Data$CodonTable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Data$IUPACData(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Data$SCOPData(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$File(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$GenBank(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$GenBank$Record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$GenBank$Scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$GenBank$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Nexus(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Nexus$Nexus(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Nexus$Nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Nexus$StandardData(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Nexus$Trees(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$AbstractPropertyMap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Atom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Chain(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$DSSP(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Dice(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Entity(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$FragmentMapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$HSExposure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$MMCIF2Dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$MMCIFParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$NeighborSearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$PDBExceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$PDBIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$PDBList(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$PDBParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Polypeptide(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Residue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$ResidueDepth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Selection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Structure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$StructureAlignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$StructureBuilder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$Superimposer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$ic_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$internal_coords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$mmcifio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$parse_pdb_header(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$PDB$vectors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SVDSuperimposer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Seq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqFeature(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$AbiIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$AceIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$FastaIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$GckIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$IgIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$InsdcIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$Interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$NibIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$PdbIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$PhdIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$PirIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$QualityIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$SeqXmlIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$SffIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$SnapGeneIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$SwissIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$TabIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$UniprotIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$XdnaIO(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqIO$_index(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqRecord(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SeqUtils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Sequencing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Sequencing$Ace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$Sequencing$Phd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$SwissProt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Bio$bgzf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_BioSQL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_BioSQL$BioSeq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_MolHandler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_tkinter_finder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cairo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cffi_opcode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$recompiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_get_Chain(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_get_PDB(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_get_Residue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_add_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_array_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_char_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_dtype_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_generic_alias(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_nbit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$atom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$bond(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$cairo_out(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$cdml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$chem_vertex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$converter_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$coords_generator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$coords_optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$dom_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$geometry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph$diedge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph$digraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph$edge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$graph$vertex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$inchi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$inchi_key(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$known_groups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$linear_formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$molecule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$molfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$name_database(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$oasa_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$periodic_table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$plugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$pybel_bridge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$query_atom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$reaction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$smiles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$stereochemistry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$structure_database(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$subsearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$subsearch_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$svg_out(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_oasa$transform3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openbabel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openbabel$openbabel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openbabel$pybel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$builderobject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$tkstdwidgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$ttkstdwidgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$uidefinition(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$widgetmeta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$builder$widgets$pathchooserinput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$stockimage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$widgets$pathchooserinput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygubu$widgets$ttkspinbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pythoncom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywintypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tkinter$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$shell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_win32com$shell$shellcon(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"Bio", modulecode_Bio, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Align", modulecode_Bio$Align, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Align._aligners", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"Bio.Align.substitution_matrices", modulecode_Bio$Align$substitution_matrices, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.AlignIO", modulecode_Bio$AlignIO, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.AlignIO.ClustalIO", modulecode_Bio$AlignIO$ClustalIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.EmbossIO", modulecode_Bio$AlignIO$EmbossIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.FastaIO", modulecode_Bio$AlignIO$FastaIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.Interfaces", modulecode_Bio$AlignIO$Interfaces, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.MafIO", modulecode_Bio$AlignIO$MafIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.MauveIO", modulecode_Bio$AlignIO$MauveIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.MsfIO", modulecode_Bio$AlignIO$MsfIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.NexusIO", modulecode_Bio$AlignIO$NexusIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.PhylipIO", modulecode_Bio$AlignIO$PhylipIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.AlignIO.StockholmIO", modulecode_Bio$AlignIO$StockholmIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Data", modulecode_Bio$Data, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Data.CodonTable", modulecode_Bio$Data$CodonTable, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Data.IUPACData", modulecode_Bio$Data$IUPACData, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Data.SCOPData", modulecode_Bio$Data$SCOPData, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.File", modulecode_Bio$File, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.GenBank", modulecode_Bio$GenBank, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.GenBank.Record", modulecode_Bio$GenBank$Record, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.GenBank.Scanner", modulecode_Bio$GenBank$Scanner, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.GenBank.utils", modulecode_Bio$GenBank$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Nexus", modulecode_Bio$Nexus, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Nexus.Nexus", modulecode_Bio$Nexus$Nexus, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Nexus.Nodes", modulecode_Bio$Nexus$Nodes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Nexus.StandardData", modulecode_Bio$Nexus$StandardData, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Nexus.Trees", modulecode_Bio$Nexus$Trees, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB", modulecode_Bio$PDB, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.PDB.AbstractPropertyMap", modulecode_Bio$PDB$AbstractPropertyMap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Atom", modulecode_Bio$PDB$Atom, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Chain", modulecode_Bio$PDB$Chain, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.DSSP", modulecode_Bio$PDB$DSSP, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Dice", modulecode_Bio$PDB$Dice, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Entity", modulecode_Bio$PDB$Entity, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.FragmentMapper", modulecode_Bio$PDB$FragmentMapper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.HSExposure", modulecode_Bio$PDB$HSExposure, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.MMCIF2Dict", modulecode_Bio$PDB$MMCIF2Dict, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.MMCIFParser", modulecode_Bio$PDB$MMCIFParser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Model", modulecode_Bio$PDB$Model, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.NeighborSearch", modulecode_Bio$PDB$NeighborSearch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.PDBExceptions", modulecode_Bio$PDB$PDBExceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.PDBIO", modulecode_Bio$PDB$PDBIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.PDBList", modulecode_Bio$PDB$PDBList, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.PDBParser", modulecode_Bio$PDB$PDBParser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Polypeptide", modulecode_Bio$PDB$Polypeptide, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Residue", modulecode_Bio$PDB$Residue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.ResidueDepth", modulecode_Bio$PDB$ResidueDepth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Selection", modulecode_Bio$PDB$Selection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Structure", modulecode_Bio$PDB$Structure, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.StructureAlignment", modulecode_Bio$PDB$StructureAlignment, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.StructureBuilder", modulecode_Bio$PDB$StructureBuilder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.Superimposer", modulecode_Bio$PDB$Superimposer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.ic_data", modulecode_Bio$PDB$ic_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.internal_coords", modulecode_Bio$PDB$internal_coords, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.kdtrees", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"Bio.PDB.mmcifio", modulecode_Bio$PDB$mmcifio, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.parse_pdb_header", modulecode_Bio$PDB$parse_pdb_header, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.PDB.vectors", modulecode_Bio$PDB$vectors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SVDSuperimposer", modulecode_Bio$SVDSuperimposer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Seq", modulecode_Bio$Seq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqFeature", modulecode_Bio$SeqFeature, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO", modulecode_Bio$SeqIO, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.SeqIO.AbiIO", modulecode_Bio$SeqIO$AbiIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.AceIO", modulecode_Bio$SeqIO$AceIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.FastaIO", modulecode_Bio$SeqIO$FastaIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.GckIO", modulecode_Bio$SeqIO$GckIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.IgIO", modulecode_Bio$SeqIO$IgIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.InsdcIO", modulecode_Bio$SeqIO$InsdcIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.Interfaces", modulecode_Bio$SeqIO$Interfaces, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.NibIO", modulecode_Bio$SeqIO$NibIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.PdbIO", modulecode_Bio$SeqIO$PdbIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.PhdIO", modulecode_Bio$SeqIO$PhdIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.PirIO", modulecode_Bio$SeqIO$PirIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.QualityIO", modulecode_Bio$SeqIO$QualityIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.SeqXmlIO", modulecode_Bio$SeqIO$SeqXmlIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.SffIO", modulecode_Bio$SeqIO$SffIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.SnapGeneIO", modulecode_Bio$SeqIO$SnapGeneIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.SwissIO", modulecode_Bio$SeqIO$SwissIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.TabIO", modulecode_Bio$SeqIO$TabIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.UniprotIO", modulecode_Bio$SeqIO$UniprotIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO.XdnaIO", modulecode_Bio$SeqIO$XdnaIO, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqIO._index", modulecode_Bio$SeqIO$_index, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqRecord", modulecode_Bio$SeqRecord, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SeqUtils", modulecode_Bio$SeqUtils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Sequencing", modulecode_Bio$Sequencing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.Sequencing.Ace", modulecode_Bio$Sequencing$Ace, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.Sequencing.Phd", modulecode_Bio$Sequencing$Phd, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"Bio.SwissProt", modulecode_Bio$SwissProt, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"Bio.bgzf", modulecode_Bio$bgzf, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"BioSQL", modulecode_BioSQL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"BioSQL.BioSeq", modulecode_BioSQL$BioSeq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"MolHandler", modulecode_MolHandler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageDraw", modulecode_PIL$ImageDraw, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageDraw2", modulecode_PIL$ImageDraw2, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageFont", modulecode_PIL$ImageFont, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImagePath", modulecode_PIL$ImagePath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"PIL._imagingft", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"PIL._imagingtk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"PIL._tkinter_finder", modulecode_PIL$_tkinter_finder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_msi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"_win32sysloader", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"argparse", NULL, 0, 62303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 1, 24947, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cairo", modulecode_cairo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cairo._cairo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.cffi_opcode", modulecode_cffi$cffi_opcode, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.recompiler", modulecode_cffi$recompiler, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"dbm", NULL, 2, 4218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.ndbm", NULL, 3, 228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 4, 410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 5, 12992, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 6, 6565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 7, 33323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 8, 13974, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 9, 569, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.build_ext", NULL, 10, 16163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 11, 3535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 12, 6640, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 13, 220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 14, 2740, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 15, 5849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 16, 34518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 17, 5276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 18, 6949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 19, 10682, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 20, 5959, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 21, 9893, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 22, 2341, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 23, 17536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 24, 5132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 25, 12127, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 26, 8465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 27, 15572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 28, 7337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 29, 5161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 30, 76000, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 31, 1717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 32, 5712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 33, 79959, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 34, 12480, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 35, 14836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 36, 3261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 37, 11485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 38, 7387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 39, 1638, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 40, 5931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 41, 10668, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 42, 12550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 43, 16465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 44, 22070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 45, 1946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 46, 37904, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 47, 5748, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 48, 9684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 49, 7704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 50, 9568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"get_Chain", modulecode_get_Chain, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"get_PDB", modulecode_get_PDB, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"get_Residue", modulecode_get_Residue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"http", NULL, 51, 6090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 52, 34698, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 53, 34418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 54, 155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 55, 4903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 56, 6176, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 57, 12224, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 58, 5665, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 59, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 60, 5167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 61, 5691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 62, 1580, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 63, 6524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 64, 9802, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 65, 1913, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 66, 15298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 67, 1286, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 68, 24368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 69, 20466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 70, 688, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multiprocessing.connection", NULL, 71, 25260, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 72, 13044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 73, 3929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 74, 2574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 75, 8385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 76, 7663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 77, 41572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 78, 25051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 79, 3487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 80, 11027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 81, 9580, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 82, 8229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 83, 5282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 84, 5248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 85, 14416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 86, 7075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 87, 6722, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 88, 11317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 89, 11512, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"numpy.testing", NULL, 90, 1065, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.typing", modulecode_numpy$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.typing._add_docstring", modulecode_numpy$typing$_add_docstring, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._array_like", modulecode_numpy$typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._char_codes", modulecode_numpy$typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._dtype_like", modulecode_numpy$typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._generic_alias", modulecode_numpy$typing$_generic_alias, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._nbit", modulecode_numpy$typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._scalars", modulecode_numpy$typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.typing._shape", modulecode_numpy$typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa", modulecode_oasa, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"oasa.atom", modulecode_oasa$atom, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.bond", modulecode_oasa$bond, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.cairo_out", modulecode_oasa$cairo_out, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.cdml", modulecode_oasa$cdml, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.chem_vertex", modulecode_oasa$chem_vertex, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.common", modulecode_oasa$common, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.config", modulecode_oasa$config, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.converter_base", modulecode_oasa$converter_base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.coords_generator", modulecode_oasa$coords_generator, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.coords_optimizer", modulecode_oasa$coords_optimizer, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.dom_extensions", modulecode_oasa$dom_extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.geometry", modulecode_oasa$geometry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.graph", modulecode_oasa$graph, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"oasa.graph.diedge", modulecode_oasa$graph$diedge, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.graph.digraph", modulecode_oasa$graph$digraph, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.graph.edge", modulecode_oasa$graph$edge, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.graph.graph", modulecode_oasa$graph$graph, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.graph.vertex", modulecode_oasa$graph$vertex, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.inchi", modulecode_oasa$inchi, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.inchi_key", modulecode_oasa$inchi_key, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.known_groups", modulecode_oasa$known_groups, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.linear_formula", modulecode_oasa$linear_formula, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.misc", modulecode_oasa$misc, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.molecule", modulecode_oasa$molecule, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.molfile", modulecode_oasa$molfile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.name_database", modulecode_oasa$name_database, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.oasa_exceptions", modulecode_oasa$oasa_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.periodic_table", modulecode_oasa$periodic_table, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.plugin", modulecode_oasa$plugin, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.pybel_bridge", modulecode_oasa$pybel_bridge, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.query_atom", modulecode_oasa$query_atom, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.reaction", modulecode_oasa$reaction, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.smiles", modulecode_oasa$smiles, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.stereochemistry", modulecode_oasa$stereochemistry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.structure_database", modulecode_oasa$structure_database, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.subsearch", modulecode_oasa$subsearch, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.subsearch_data", modulecode_oasa$subsearch_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.svg_out", modulecode_oasa$svg_out, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.transform", modulecode_oasa$transform, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"oasa.transform3d", modulecode_oasa$transform3d, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"openbabel", modulecode_openbabel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"openbabel.openbabel", modulecode_openbabel$openbabel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"openbabel.pybel", modulecode_openbabel$pybel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pdb", NULL, 91, 47252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources", NULL, 92, 100416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 93, 183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 94, 20536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 95, 571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 96, 725, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 97, 1143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 98, 2897, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._typing", NULL, 99, 1488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 100, 9332, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 101, 4085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 102, 20606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.utils", NULL, 103, 1660, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 104, 13335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 105, 201661, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 106, 2870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"plistlib", NULL, 107, 27191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 108, 7378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser", NULL, 109, 2492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ast_transforms", NULL, 110, 2543, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.c_ast", NULL, 111, 35299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.c_lexer", NULL, 112, 11893, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.c_parser", NULL, 113, 60630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.lextab", NULL, 114, 5640, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.ply", NULL, 115, 224, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ply.lex", NULL, 116, 21424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.ply.yacc", NULL, 117, 53065, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.plyparser", NULL, 118, 4678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pycparser.yacctab", NULL, 119, 139372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 120, 83359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"pygubu", modulecode_pygubu, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pygubu.binding", modulecode_pygubu$binding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder", modulecode_pygubu$builder, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pygubu.builder.builderobject", modulecode_pygubu$builder$builderobject, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder.tkstdwidgets", modulecode_pygubu$builder$tkstdwidgets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder.ttkstdwidgets", modulecode_pygubu$builder$ttkstdwidgets, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder.uidefinition", modulecode_pygubu$builder$uidefinition, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder.widgetmeta", modulecode_pygubu$builder$widgetmeta, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.builder.widgets", modulecode_pygubu$builder$widgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pygubu.builder.widgets.pathchooserinput", modulecode_pygubu$builder$widgets$pathchooserinput, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.stockimage", modulecode_pygubu$stockimage, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.widgets", modulecode_pygubu$widgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"pygubu.widgets.pathchooserinput", modulecode_pygubu$widgets$pathchooserinput, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pygubu.widgets.ttkspinbox", modulecode_pygubu$widgets$ttkspinbox, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pythoncom", modulecode_pythoncom, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"pywintypes", modulecode_pywintypes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"runpy", NULL, 121, 8207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"site", NULL, 122, 16687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 123, 186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 124, 2530, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 125, 176233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter-preLoad", modulecode_tkinter$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"tkinter.commondialog", NULL, 126, 1138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 127, 1680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 128, 1498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 129, 12329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 130, 3017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 131, 11024, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 132, 56724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"unittest", NULL, 133, 3152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 134, 4209, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 135, 50510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 136, 14562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 137, 7560, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 138, 7317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 139, 7042, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 140, 2246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 141, 9961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 142, 4457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"win32api", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"win32com", modulecode_win32com, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"win32com.shell", modulecode_win32com$shell, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"win32com.shell.shell", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG},
    {"win32com.shell.shellcon", modulecode_win32com$shell$shellcon, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__future__", NULL, 143, 4123, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 144, 1208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 145, 28706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 146, 5466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 147, 4111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 148, 6002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 149, 7755, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 150, 11558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 151, 4635, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 152, 74044, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 153, 3446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 154, 16009, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 155, 6411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 156, 7565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 157, 5299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 158, 25439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 159, 16728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 160, 6816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 161, 706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 162, 50985, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 163, 1863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 164, 9381, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 165, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 166, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 167, 6619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 168, 28022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 169, 2514, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 170, 2297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 171, 11158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 172, 16333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 173, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 174, 24110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 175, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 176, 8346, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 177, 1912, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 178, 29650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 179, 21583, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 180, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 181, 20605, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 182, 7323, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 183, 24246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 184, 12227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 185, 8448, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 186, 24548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 187, 4436, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 188, 15993, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 189, 17036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 190, 12099, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 191, 2319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 192, 11410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 193, 27029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 194, 26509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 195, 10115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 196, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 197, 12591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 198, 9878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 199, 33921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 200, 6382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 201, 46392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 202, 28705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 203, 3205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 204, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 205, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 206, 21905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 207, 20265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 208, 5783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 209, 45683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 210, 20194, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 211, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 212, 6952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 213, 4283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 214, 11875, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 215, 16328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 216, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 217, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 218, 255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 219, 4631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 220, 1881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 221, 2161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 222, 8026, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 223, 5068, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 224, 23618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 225, 57138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 226, 160697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 227, 59403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 228, 15773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 229, 1075, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 230, 3859, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 231, 6295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 232, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 233, 2364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 234, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 235, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 236, 3255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 237, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 238, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 239, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 240, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 241, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 242, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 243, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 244, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 245, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 246, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 247, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 248, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 249, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 250, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 251, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 252, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 253, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 254, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 255, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 256, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 257, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 258, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 259, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 260, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 261, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 262, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 263, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 264, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 265, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 266, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 267, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 268, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 269, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 270, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 271, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 272, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 273, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 274, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 275, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 276, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 277, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 278, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 279, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 280, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 281, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 282, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 283, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 284, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 285, 2351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 286, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 287, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 288, 5582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 289, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 290, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 291, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 292, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 293, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 294, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 295, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 296, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 297, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 298, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 299, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 300, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 301, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 302, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 303, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 304, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 305, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 306, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 307, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 308, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 309, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 310, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 311, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 312, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 313, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 314, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 315, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 316, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 317, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 318, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 319, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 320, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 321, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 322, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 323, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 324, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 325, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 326, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 327, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 328, 1676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 329, 1489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 330, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 331, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 332, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 333, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 334, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 335, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 336, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 337, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 338, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 339, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 340, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 341, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 342, 4837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 343, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 344, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 345, 4730, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 346, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 347, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 348, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 349, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 350, 4511, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 351, 3214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 352, 3074, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 353, 25927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 354, 8392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 355, 13338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 356, 3320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 357, 17510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 358, 18704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 359, 27972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 360, 27866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 361, 3966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 362, 6236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 363, 4143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 364, 17848, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 365, 4308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 366, 18149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 367, 6692, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 368, 14035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 369, 6353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 370, 3574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 371, 50494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 372, 11163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 373, 41307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 374, 4083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 375, 9774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 376, 3714, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 377, 28570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 378, 45148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 379, 13538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 380, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 381, 20841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 382, 6475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 383, 9257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 384, 80558, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 385, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 386, 59851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 387, 12564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 388, 9809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 389, 11136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 390, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 391, 1861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 392, 963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 393, 3832, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 394, 34654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 395, 65234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 396, 23189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 397, 43163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 398, 11983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 399, 60229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 400, 6441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 401, 15996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 402, 16080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib", NULL, 403, 15965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 404, 52135, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 405, 2565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 406, 8427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 407, 3742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 408, 14622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 409, 1709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 410, 12167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 411, 5385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 412, 13656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 413, 31362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 414, 44174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 415, 46873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 416, 67169, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 417, 7760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 418, 16274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 419, 24291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 420, 13424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 421, 10393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 422, 16246, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 423, 22031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 424, 10416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 425, 10591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 426, 5713, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 427, 20073, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 428, 14387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 429, 5268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 430, 5720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 431, 6497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 432, 2155, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 433, 16900, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 434, 9455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 435, 7501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 436, 37184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 437, 2808, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 438, 26428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 439, 6954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 440, 27752, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 441, 25326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 442, 15107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 443, 6324, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 444, 21612, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 445, 44561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 446, 4337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 447, 33618, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 448, 7265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 449, 10982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 450, 295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 451, 41932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 452, 2369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 453, 11287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 454, 15744, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 455, 62626, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 456, 23362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 457, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 458, 39941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 459, 11742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 460, 2450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 461, 17125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 462, 19991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 463, 19903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 464, 17328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 465, 9142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 466, 62385, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 467, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 468, 2774, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 469, 34271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 470, 72578, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 471, 3254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 472, 7292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 473, 3570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 474, 23648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"warnings", NULL, 475, 13617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 476, 18114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 477, 19483, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 478, 17085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 479, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 480, 16411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 481, 7721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 482, 5226, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 483, 5377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 484, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 485, 8186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 486, 648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 487, 5486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 488, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 489, 2815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 490, 27306, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 491, 2707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 492, 55339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 493, 10656, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 494, 12459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 495, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 496, 1544, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 497, 8399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 498, 55587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 499, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 500, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 501, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 502, 3175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 503, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 504, 12460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 505, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 506, 12884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 507, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 508, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 509, 34504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 510, 29373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 511, 5819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 512, 58479, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 145, 28706},
    {"abc", 157, 5299},
    {"codecs", 199, 33921},
    {"collections", 201, -46392},
    {"collections.abc", 202, 28705},
    {"copyreg", 213, 4283},
    {"dis", 228, 15773},
    {"encodings", 230, -3859},
    {"encodings.aliases", 231, 6295},
    {"encodings.ascii", 232, 1846},
    {"encodings.big5", 234, 1374},
    {"encodings.big5hkscs", 235, 1384},
    {"encodings.charmap", 237, 2856},
    {"encodings.cp037", 238, 2387},
    {"encodings.cp1006", 239, 2463},
    {"encodings.cp1026", 240, 2391},
    {"encodings.cp1125", 241, 8094},
    {"encodings.cp1140", 242, 2377},
    {"encodings.cp1250", 243, 2414},
    {"encodings.cp1251", 244, 2411},
    {"encodings.cp1252", 245, 2414},
    {"encodings.cp1253", 246, 2427},
    {"encodings.cp1254", 247, 2416},
    {"encodings.cp1255", 248, 2435},
    {"encodings.cp1256", 249, 2413},
    {"encodings.cp1257", 250, 2421},
    {"encodings.cp1258", 251, 2419},
    {"encodings.cp273", 252, 2373},
    {"encodings.cp424", 253, 2417},
    {"encodings.cp437", 254, 7811},
    {"encodings.cp500", 255, 2387},
    {"encodings.cp720", 256, 2484},
    {"encodings.cp737", 257, 8133},
    {"encodings.cp775", 258, 7841},
    {"encodings.cp850", 259, 7472},
    {"encodings.cp852", 260, 7849},
    {"encodings.cp855", 261, 8102},
    {"encodings.cp856", 262, 2449},
    {"encodings.cp857", 263, 7452},
    {"encodings.cp858", 264, 7442},
    {"encodings.cp860", 265, 7790},
    {"encodings.cp861", 266, 7805},
    {"encodings.cp862", 267, 7994},
    {"encodings.cp863", 268, 7805},
    {"encodings.cp864", 269, 7949},
    {"encodings.cp865", 270, 7805},
    {"encodings.cp866", 271, 8138},
    {"encodings.cp869", 272, 7829},
    {"encodings.cp874", 273, 2515},
    {"encodings.cp875", 274, 2384},
    {"encodings.cp932", 275, 1376},
    {"encodings.cp949", 276, 1376},
    {"encodings.cp950", 277, 1376},
    {"encodings.euc_jis_2004", 278, 1390},
    {"encodings.euc_jisx0213", 279, 1390},
    {"encodings.euc_jp", 280, 1378},
    {"encodings.euc_kr", 281, 1378},
    {"encodings.gb18030", 282, 1380},
    {"encodings.gb2312", 283, 1378},
    {"encodings.gbk", 284, 1372},
    {"encodings.hp_roman8", 286, 2588},
    {"encodings.hz", 287, 1370},
    {"encodings.iso2022_jp", 289, 1391},
    {"encodings.iso2022_jp_1", 290, 1395},
    {"encodings.iso2022_jp_2", 291, 1395},
    {"encodings.iso2022_jp_2004", 292, 1401},
    {"encodings.iso2022_jp_3", 293, 1395},
    {"encodings.iso2022_jp_ext", 294, 1399},
    {"encodings.iso2022_kr", 295, 1391},
    {"encodings.iso8859_1", 296, 2386},
    {"encodings.iso8859_10", 297, 2391},
    {"encodings.iso8859_11", 298, 2485},
    {"encodings.iso8859_13", 299, 2394},
    {"encodings.iso8859_14", 300, 2412},
    {"encodings.iso8859_15", 301, 2391},
    {"encodings.iso8859_16", 302, 2393},
    {"encodings.iso8859_2", 303, 2386},
    {"encodings.iso8859_3", 304, 2393},
    {"encodings.iso8859_4", 305, 2386},
    {"encodings.iso8859_5", 306, 2387},
    {"encodings.iso8859_6", 307, 2431},
    {"encodings.iso8859_7", 308, 2394},
    {"encodings.iso8859_8", 309, 2425},
    {"encodings.iso8859_9", 310, 2386},
    {"encodings.johab", 311, 1376},
    {"encodings.koi8_r", 312, 2438},
    {"encodings.koi8_t", 313, 2349},
    {"encodings.koi8_u", 314, 2424},
    {"encodings.kz1048", 315, 2401},
    {"encodings.latin_1", 316, 1858},
    {"encodings.mac_arabic", 317, 7705},
    {"encodings.mac_centeuro", 318, 2425},
    {"encodings.mac_croatian", 319, 2433},
    {"encodings.mac_cyrillic", 320, 2423},
    {"encodings.mac_farsi", 321, 2367},
    {"encodings.mac_greek", 322, 2407},
    {"encodings.mac_iceland", 323, 2426},
    {"encodings.mac_latin2", 324, 2567},
    {"encodings.mac_roman", 325, 2424},
    {"encodings.mac_romanian", 326, 2434},
    {"encodings.mac_turkish", 327, 2427},
    {"encodings.mbcs", 328, 1676},
    {"encodings.oem", 329, 1489},
    {"encodings.palmos", 330, 2414},
    {"encodings.ptcp154", 331, 2508},
    {"encodings.punycode", 332, 6280},
    {"encodings.quopri_codec", 333, 2380},
    {"encodings.raw_unicode_escape", 334, 1727},
    {"encodings.shift_jis", 336, 1384},
    {"encodings.shift_jis_2004", 337, 1394},
    {"encodings.shift_jisx0213", 338, 1394},
    {"encodings.tis_620", 339, 2476},
    {"encodings.undefined", 340, 2060},
    {"encodings.unicode_escape", 341, 1707},
    {"encodings.utf_16", 342, 4837},
    {"encodings.utf_16_be", 343, 1615},
    {"encodings.utf_16_le", 344, 1615},
    {"encodings.utf_32", 345, 4730},
    {"encodings.utf_32_be", 346, 1508},
    {"encodings.utf_32_le", 347, 1508},
    {"encodings.utf_7", 348, 1536},
    {"encodings.utf_8", 349, 1595},
    {"encodings.utf_8_sig", 350, 4511},
    {"encodings.uu_codec", 351, 3214},
    {"encodings.zlib_codec", 352, 3074},
    {"enum", 353, 25927},
    {"functools", 360, 27866},
    {"genericpath", 361, 3966},
    {"heapq", 368, 14035},
    {"importlib", 376, -3714},
    {"importlib._bootstrap", 377, 28570},
    {"importlib._bootstrap_external", 378, 45148},
    {"importlib.machinery", 380, 927},
    {"inspect", 384, 80558},
    {"io", 385, 3419},
    {"keyword", 392, 963},
    {"linecache", 393, 3832},
    {"locale", 394, 34654},
    {"ntpath", 408, 14622},
    {"opcode", 411, 5385},
    {"operator", 412, 13656},
    {"os", 413, 31362},
    {"quopri", 426, 5713},
    {"re", 428, 14387},
    {"reprlib", 429, 5268},
    {"sre_compile", 442, 15107},
    {"sre_constants", 443, 6324},
    {"sre_parse", 444, 21612},
    {"stat", 446, 4337},
    {"token", 460, 2450},
    {"tokenize", 461, 17125},
    {"types", 465, 9142},
    {"warnings", 475, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

