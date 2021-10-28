#--------------------------------------------------------------------------
#     This file is part of OASA - a free chemical python library
#     Copyright (C) 2003-2008 Beda Kosata <beda@zirael.org>

#     This program is free software; you can redistribute it and/or modify
#     it under the terms of the GNU General Public License as published by
#     the Free Software Foundation; either version 2 of the License, or
#     (at your option) any later version.

#     This program is distributed in the hope that it will be useful,
#     but WITHOUT ANY WARRANTY; without even the implied warranty of
#     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#     GNU General Public License for more details.

#     Complete text of GNU GPL can be found in the file gpl.txt in the
#     main directory of the program

#--------------------------------------------------------------------------

"""this is just a file for tests, it has no real value"""

from . import smiles
from . import molfile
from time import time


def test( function, times):
    t1 = time()
    for i in range( times):
        function()
    return time() - t1

def test_method( obj, method, args, times):
    t1 = time()
    for i in range( times):
        getattr( obj, method)( *args)
    return time() - t1



def is_edge_a_bridge_speed():
    mol = smiles.text_to_mol( "CCCC(CCC)CCCC1CC2CC1C2")
    t1 = time()
    for i in range( 100):
        b = 0
        for e in mol.edges:
            b += mol.is_edge_a_bridge( e)
    print(b)
    return time() - t1


sssr_smiles = "C1CC2CC1CC2"

def sssr_old():
    mol = smiles.text_to_mol( sssr_smiles)
    t1 = time()
    cs = mol.get_smallest_independent_cycles_e()
    print(len( cs))
    return time() - t1

def sssr():
    mol = smiles.text_to_mol( sssr_smiles)
    t1 = time()
    cs = mol.get_smallest_independent_cycles_e_new()
    print(len( cs))
    return time() - t1

    


def find_all_cycles_speed():
    pass


def stereo():
    sms = ["C\C=C\C","C\C=C/C"]
    c = smiles.converter()
    c.configuration['R_GENERATE_COORDS'] = True
    for i,sm in enumerate( sms):
        fname = "pokus%d.mol" % i
        m = c.read_text( sm)[0]
        print([(a.x,a.y) for a in m.vertices])
        f = file( fname, "w")
        molfile.mol_to_file( m, f)

def stereo2():
    sms = ["C\C=C\C","C\C=C/C"]
    c = smiles.converter()
    c.configuration['R_GENERATE_COORDS'] = True
    for i,sm in enumerate( sms):
        m = c.read_text( sm)[0]
        print(m.stereochemistry)


def stereo_from_coords():
    f = file( "ez_stereo2.mol", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    mol.detect_stereochemistry_from_coords()
    print(smiles.mol_to_text( mol))

def stereo_from_coords2():
    f = file( "cis_trans_cycles.mol", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    c = smiles.converter()
    print(c.mols_to_text( [mol]))


def aromaticity():
    mol = smiles.text_to_mol( "C1=C[CH][CH]C=C1")
    #print [v.multiplicity for v in mol.vertices]
    mol.mark_aromatic_bonds()
    print([e.aromatic for e in mol.edges])
    
def smiles_from_db():
    from . import structure_database
    import time, sys
    c = smiles.converter()
    c.configuration['R_GENERATE_COORDS'] = True
    i = 0
    errors, ok = 0, 0
    t = time.time()
    for hit in structure_database.get_compounds_from_database():
        i += 1
        try:
            mol = c.read_text( hit[3])
        except:
            print("CRASH:", hit[3], file=sys.stderr)
            errors += 1
        else:
            ok += 1
        if i % 100 == 0:
            tm = time.time() - t
            print("%d, %d ok, %d crashes;  %.1f per second" % (i, ok, errors, i/tm))

def smiles_compression():
    from . import structure_database
    import time, sys, zlib
    sms = []
    f = file( "smiles.txt", "r")
    for line in f:
        sms.append( line.strip())
    f.close()
    i = 0
    length = 0
    comp_length = 0
    c = zlib.compressobj()
    for sm in sms:
        length += len( sm)
        i += 1
        comp_length += len( c.compress( sm))
    comp_length += len( c.flush(zlib.Z_SYNC_FLUSH))
    print("Ratio:", 1.0 * comp_length / length)

    import random
    total_compressed = 0
    total_sm = 0
    for sm in random.sample( sms, 10000):
        total_sm += len( sm)
        compressed = c.compress( sm)
        compressed += c.flush(zlib.Z_SYNC_FLUSH)
        total_compressed += len( compressed)
        #print "RAW", 1.0*len( compressed) / len( sm)
    print("Ratio for individual SMILES:", 1.0*total_compressed / total_sm)


def cairo_out_test():
    from . import molfile
    import time
    cid = 22646404
    #cid = 1373132
    #cid = 18305969
    #cid = 19815256
    f = file( "%d.mol" % cid, "r")
    mol = molfile.file_to_mol( f)
    f.close()
    from . import cairo_out
    mol.normalize_bond_length( 25)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=4.0, margin=10, font_size=16,
                             bond_second_line_shortening=0.15, bond_width=6,
                             line_width=2.0, antialias_drawing=True,
                             antialias_text=True)
    #c.background_color = (1,1,0.6)
    c.show_hydrogens_on_hetero = True
    t = time.time()
    c.mol_to_cairo( mol, "%d.png" % cid)
    c.mol_to_cairo( mol, "%d.pdf" % cid, format="pdf")
    c.mol_to_cairo( mol, "%d.svg" % cid, format="svg")
    print(time.time()-t)


def cairo_out_test2():
    from . import smiles
    #mol = smiles.text_to_mol( "COC(=O)CNC(C1=CC=CC=C1)C2=C(C=CC(=C2)Br)NC(=O)C3=CC(=CC=C3)Cl")
    #mol = smiles.text_to_mol( "c1nccc2c1cncn2")
    mol = smiles.text_to_mol( "CCC=CC(=O)C.CCCC")
    from . import cairo_out
    mol.normalize_bond_length( 30)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( color_bonds=True, color_atoms=True) #, background_color=(0.4,1,0.5,0.8))
    c.show_hydrogens_on_hetero = True
    c.font_size = 20
    mols = list( mol.get_disconnected_subgraphs())
    c.mols_to_cairo( mols, "test.pdf", format="pdf")
    c.mols_to_cairo( mols, "test.png")
    c.mols_to_cairo( mols, "test.svg", format="svg")


def cairo_out_test3():
    from . import molfile
    f = file( "/tmp/!B/synchem_nitro.sdf", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    from . import cairo_out
    mol.normalize_bond_length( 25)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=1.0, margin=10, font_size=16,
                             bond_second_line_shortening=0.15, bond_width=6,
                             line_width=2.0, antialias_drawing=True,
                             antialias_text=True)
    c.show_hydrogens_on_hetero = True
    c.mol_to_cairo( mol, "out.png")

def cairo_out_test4():
    from . import molfile
    f = file( "multi.mol", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    from . import cairo_out
    mol.normalize_bond_length( 25)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=1.0, margin=10, font_size=16,
                             bond_second_line_shortening=0.15, bond_width=6,
                             line_width=2.0, antialias_drawing=True,
                             show_hydrogens_on_hetero=True,
                             antialias_text=True)
    c.show_hydrogens_on_hetero = True
    c.mol_to_cairo( mol, "out.png")
    #c.mols_to_cairo( mol.get_disconnected_subgraphs(), "out.png")

def cairo_out_test5():
    from . import molfile
    f = file( "/zaloha/temp/forever.mol", "r")
    mol = molfile.file_to_mol( f)
    print(mol)
    f.close()
    from . import cairo_out
    mol.normalize_bond_length( 25)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=1.0, margin=10, font_size=16,
                             bond_second_line_shortening=0.15, bond_width=6,
                             line_width=2.0, antialias_drawing=True,
                             antialias_text=True)
    c.show_hydrogens_on_hetero = True
    c.mol_to_cairo( mol, "out.png")
    #c.mols_to_cairo( mol.get_disconnected_subgraphs(), "out.png")


def cairo_out_test_wedge():
    from . import molfile
    import time
    f = file( "untitled0.mol", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    from . import cairo_out
    mol.normalize_bond_length( 30)
    mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=1.0, antialias_text=True, color_bonds=True, color_atoms=True)
    t = time.time()
    c.mol_to_cairo( mol, "untitled0.png")
    print(time.time()-t)


def cairo_out_test3d():
    from . import molfile
    f = file( "1.mol", "r")
    mol = molfile.file_to_mol( f)
    f.close()
    from . import cairo_out
    #mol.normalize_bond_length( 25)
    #mol.remove_unimportant_hydrogens()
    c = cairo_out.cairo_out( scaling=1.0, margin=30, font_size=16,
                             bond_second_line_shortening=0.15, bond_width=6,
                             line_width=2.0, antialias_drawing=True,
                             antialias_text=True)
    c.show_hydrogens_on_hetero = True
    c.mol_to_cairo( mol, "1.png")


def test_inchi_stereo():
    from . import inchi
    f = file( "stereobonds.txt", "r")
    for line in f:
        orig = line.strip()
        try:
            mol = inchi.text_to_mol( orig, calc_coords=True, include_hydrogens=False)
        except:
            #print "cannot read inchi", orig
            continue
        new = inchi.mol_to_text( mol)
        if new != orig:
            pass
            print("problem")
            print(orig)
            print(new)
            print("------------------------------")
        else:
            pass
            #print "ok", orig
    f.close()

def test_CIP():
    from . import smiles
    m = smiles.text_to_mol( "HC(C(CCC)CCC)(C1CC1C)C2CC2")
    from .atom import atom
    a = m.atoms[1]
    print(a.is_chiral())
    print([m.atoms.index( x) for x in a.get_neighbors_CIP_sorted()])


def test_CIP_2():
    from . import smiles
    m = smiles.text_to_mol( "HC(CC)(O)C")
    from .atom import atom
    a = m.atoms[1]
    dg = m.create_CIP_digraph( a)
    print(dg)



def test_3d_rot():
    from . import geometry
    p = [10,1,1]
    t = geometry.create_transformation_to_coincide_point_with_z_axis( [-9,1,4], p)
    print(t.transform_xyz( *p))
    print(t.transform_xyz( -9,1,4))
    inv = t.get_inverse()
    print(inv.transform_xyz( *t.transform_xyz( *p)))


def test_multimol_molfile():
    from . import molfile
    f = file( 'test.mol', 'r')
    mol = molfile.file_to_mol( f)
    f.close()
    print(mol.is_connected())
    for mol in mol.get_disconnected_subgraphs():
        print(mol)


def test_multimol_molfile2():
    from . import molfile, smiles
    mols = [smiles.text_to_mol( t) for t in ["CCC(=O)[O-].[K+]"]]
    for mol in mols:
        mol.remove_zero_order_bonds()
    m = molfile.converter()
    text = m.mols_to_text( mols)
    f = file("multi2.mol","w")
    f.write( text)
    f.close()
    f = file("prase.sdf","r")
    for mol in m.read_text( text):
        print(smiles.mol_to_text( mol))
    f.close()
    
##     import pybel
##     for m in pybel.readfile( "sdf", "prase.sdf"):
##         print m

def test_new_ring_perception():
    from . import smiles
    mol = smiles.text_to_mol( "C2369C478C56C179C34C1258", calc_coords=False, localize_aromatic_bonds=False)
    t = time()
    for i, ring in enumerate( mol.get_all_cycles()):
        print(len( ring), end=' ')
    print()
    print(i, time()-t)

def test_sdf_processing():
    import gzip
    from . import molfile, smiles
    m = molfile.converter()
    m2 = smiles.converter()
    f = gzip.open("00000001_00025000.sdf.gz","r")
    for mol in m.read_file( f):
        mol.remove_unimportant_hydrogens()
        mols = mol.get_disconnected_subgraphs()
        print(m2.mols_to_text( mols))
    f.close()

def test_sdf_processing2():
    import gzip
    from . import molfile
    m = molfile.converter()
    f = gzip.open("00000001_00025000.sdf.gz","r")
    f2 = file( "AAAA.sdf","w")
    for mol in m.read_file( f):
        mol.remove_unimportant_hydrogens()
        m.mols_to_file( [mol], f2)
    f.close()
    f2.close()

def test_fullerene_lockdown():
    from . import inchi
    from . import smiles
    from time import time
    t = time()
    #mol = inchi.text_to_mol( "InChI=1/C60/c1-2-5-6-3(1)8-12-10-4(1)9-11-7(2)17-21-13(5)23-24-14(6)22-18(8)28-20(12)30-26-16(10)15(9)25-29-19(11)27(17)37-41-31(21)33(23)43-44-34(24)32(22)42-38(28)48-40(30)46-36(26)35(25)45-39(29)47(37)55-49(41)51(43)57-52(44)50(42)56(48)59-54(46)53(45)58(55)60(57)59")
    string = "C12=C3C4=C5C6=C1C7=C8C9=C1C%10=C%11C(=C29)C3=C2C3=C4C4=C5C5=C9C6=C7C6=C7C8=C1C1=C8C%10=C%10C%11=C2C2=C3C3=C4C4=C5C5=C%11C%12=C(C6=C95)C7=C1C1=C%12C5=C%11C4=C3C3=C5C(=C81)C%10=C23"
    #string = "C12C3C2C13"
    string = "c1=%31c%25c8c%23c%19c%18c7c8c%17c%25c%29C=%21C=%31c%12c2-c%11c=%21c%20c%24c=4c%11C=6c2c9c(c5%28)c%12c1c%23c5c%19c3c%16c%18c%14c7c(c%17c%10c%20%29)c%22c%10c%24c%26c-%13c%22c%14c(c-%13c%15=C%27C=4%26)c%16c(c%15=%30)=c3c%28=C9C=%30C=6%27"
    mol = smiles.text_to_mol( string, calc_coords=True)
    print(time()-t)
    t = time()
    #print mol.get_all_cycles()
    print(smiles.mol_to_text( mol))
    print(time()-t)
    print(mol)

def test_sssr():
    from . import smiles
    string = "C1CCCC1C2CCC2"
    string = "C36C1C5C4C2C6C7CCC2CCC4CCC5CCC1CCC3CC7"
    string = "c1=%31c%25c8c%23c%19c%18c7c8c%17c%25c%29C=%21C=%31c%12c2-c%11c=%21c%20c%24c=4c%11C=6c2c9c(c5%28)c%12c1c%23c5c%19c3c%16c%18c%14c7c(c%17c%10c%20%29)c%22c%10c%24c%26c-%13c%22c%14c(c-%13c%15=C%27C=4%26)c%16c(c%15=%30)=c3c%28=C9C=%30C=6%27"
    string = "C12C3C2C13"
    string = "C12C34C5C24C135"
    mol = smiles.text_to_mol( string, calc_coords=False, localize_aromatic_bonds=False)
    print("AAA")
    for i,v in enumerate( mol.vertices):
        for rings in mol._get_smallest_cycles_for_vertex( v, to_reach=v):
            if rings:
                print(list(map( len, rings)))
                break

def test_sssr2():
    from . import smiles
    string = "C1CCCC1C2CCC2"
    string = "C36C1C5C4C2C6C7CCC2CCC4CCC5CCC1CCC3CC7"
    string = "c1=%31c%25c8c%23c%19c%18c7c8c%17c%25c%29C=%21C=%31c%12c2-c%11c=%21c%20c%24c=4c%11C=6c2c9c(c5%28)c%12c1c%23c5c%19c3c%16c%18c%14c7c(c%17c%10c%20%29)c%22c%10c%24c%26c-%13c%22c%14c(c-%13c%15=C%27C=4%26)c%16c(c%15=%30)=c3c%28=C9C=%30C=6%27"
    string = "C12C34C5C24C135"
    mol = smiles.text_to_mol( string, calc_coords=False, localize_aromatic_bonds=False)
    print(list(map( len, mol.get_smallest_independent_cycles())))


def test_rings_in_disconnected_mol():
    from . import smiles
    sc = smiles.converter()
    mol = smiles.text_to_mol( "c1ccccc1.c1ccccc1.c1ccccc1CC=C")
    mol.remove_zero_order_bonds()
    print(mol, mol.is_connected())
    print([len( c) for c in mol.get_smallest_independent_cycles_e()])


def test_charge_property_line():
    from . import molfile
    f = file( 'fromOBabel.mol', 'r')
    mol = molfile.file_to_mol( f)
    f.close()
    print(mol.is_connected())
    for mol in mol.get_disconnected_subgraphs():
        for atom in mol.atoms:
            print(atom.charge)

def show_dump():
    from .molecule import molecule
    from .graph.graph import graph
    imp = molecule()
    imp.read_simple_text_file( file("aaa9.txt","r"))
    removed = True
    while removed:
        removed = False
        for e in list(imp.edges):
            a1,a2 = e.vertices
            for e2 in list(imp.edges):
                if (e is not e2) and set(e.vertices) == set(e2.vertices):
                    imp.disconnect_edge( e2)
                    removed = True
                    break
            if removed:
                break
    from . import coords_generator
    for part in imp.get_disconnected_subgraphs():
        if len( part.vertices) > 1:
            coords_generator.calculate_coords( part, force=1)
            coords_generator.show_mol( part)

#show_dump()

#test_charge_property_line()

#test_rings_in_disconnected_mol()

#test_sssr2()
#test_fullerene_lockdown()

#print "new", sssr()
#print "old", sssr_old()
#print is_edge_a_bridge_speed()

#stereo_from_coords2()
#aromaticity()

#smiles_from_db()
#smiles_compression()

#cairo_out_test()
#cairo_out_test2()
#cairo_out_test3()
#cairo_out_test4()
cairo_out_test5()
#cairo_out_test_wedge()
#cairo_out_test3d()

#test_inchi_stereo()

#test_CIP_2()
#test_3d_rot()

#test_multimol_molfile()
#test_multimol_molfile2()

#test_new_ring_perception()
#test_sdf_processing()


