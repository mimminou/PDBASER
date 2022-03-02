/* Generated code for Python module 'Bio.PDB.ResidueDepth'
 * created by Nuitka version 0.7
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_Bio$PDB$ResidueDepth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Bio$PDB$ResidueDepth;
PyDictObject *moduledict_Bio$PDB$ResidueDepth;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[330];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[330];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Bio.PDB.ResidueDepth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 330; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Bio$PDB$ResidueDepth(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 330; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6ca8e58c2d1229abd75b2e6538732ff9;
static PyCodeObject *codeobj_c9aae9d49d6c335673b0056b4a3ff0f6;
static PyCodeObject *codeobj_02da032eb3969afbeecbf0374f8f0497;
static PyCodeObject *codeobj_53bfd78a763bdfb0c03ac12075efeb9b;
static PyCodeObject *codeobj_283a51625ddea0fbb54bb9a97ed76eaa;
static PyCodeObject *codeobj_1cf288fa6609a915a9ef0184e52a1d7a;
static PyCodeObject *codeobj_ac7ed95f1a80fccab86d9b60fe066d8c;
static PyCodeObject *codeobj_cc0f9aade3484862275554d0414550a3;
static PyCodeObject *codeobj_6903d0c995738ae0a02069b249325a5e;
static PyCodeObject *codeobj_cb31dd89a16d7b25544763f160e71c22;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[318]); CHECK_OBJECT(module_filename_obj);
    codeobj_6ca8e58c2d1229abd75b2e6538732ff9 = MAKE_CODEOBJECT(module_filename_obj, 516, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[319], mod_consts[320], NULL, 1, 0, 0);
    codeobj_c9aae9d49d6c335673b0056b4a3ff0f6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[321], NULL, NULL, 0, 0, 0);
    codeobj_02da032eb3969afbeecbf0374f8f0497 = MAKE_CODEOBJECT(module_filename_obj, 598, CO_NOFREE, mod_consts[306], mod_consts[322], NULL, 0, 0, 0);
    codeobj_53bfd78a763bdfb0c03ac12075efeb9b = MAKE_CODEOBJECT(module_filename_obj, 601, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[281], mod_consts[323], NULL, 4, 0, 0);
    codeobj_283a51625ddea0fbb54bb9a97ed76eaa = MAKE_CODEOBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[232], mod_consts[324], NULL, 2, 0, 0);
    codeobj_1cf288fa6609a915a9ef0184e52a1d7a = MAKE_CODEOBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[249], mod_consts[325], NULL, 1, 0, 0);
    codeobj_ac7ed95f1a80fccab86d9b60fe066d8c = MAKE_CODEOBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[271], mod_consts[326], NULL, 2, 0, 0);
    codeobj_cc0f9aade3484862275554d0414550a3 = MAKE_CODEOBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[267], mod_consts[327], NULL, 3, 0, 0);
    codeobj_6903d0c995738ae0a02069b249325a5e = MAKE_CODEOBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[258], mod_consts[328], NULL, 2, 0, 0);
    codeobj_cb31dd89a16d7b25544763f160e71c22 = MAKE_CODEOBJECT(module_filename_obj, 574, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[270], mod_consts[329], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array();


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__3_get_surface(PyObject *defaults);


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__4_min_dist();


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__5_residue_depth();


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__6_ca_depth();


static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__7___init__(PyObject *defaults);


// The module function definitions.
static PyObject *impl_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_atom = python_pars[0];
    PyObject *par_rtype = python_pars[1];
    PyObject *var_typekey = NULL;
    PyObject *var_resname = NULL;
    PyObject *var_het_atm = NULL;
    PyObject *var_at_name = NULL;
    PyObject *var_at_elem = NULL;
    struct Nuitka_FrameObject *frame_283a51625ddea0fbb54bb9a97ed76eaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_283a51625ddea0fbb54bb9a97ed76eaa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_283a51625ddea0fbb54bb9a97ed76eaa)) {
        Py_XDECREF(cache_frame_283a51625ddea0fbb54bb9a97ed76eaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_283a51625ddea0fbb54bb9a97ed76eaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_283a51625ddea0fbb54bb9a97ed76eaa = MAKE_FUNCTION_FRAME(codeobj_283a51625ddea0fbb54bb9a97ed76eaa, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_283a51625ddea0fbb54bb9a97ed76eaa->m_type_description == NULL);
    frame_283a51625ddea0fbb54bb9a97ed76eaa = cache_frame_283a51625ddea0fbb54bb9a97ed76eaa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_283a51625ddea0fbb54bb9a97ed76eaa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_283a51625ddea0fbb54bb9a97ed76eaa) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_rtype);
        tmp_cmp_expr_left_1 = par_rtype;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[1];
        assert(var_typekey == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_typekey = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_rtype);
        tmp_cmp_expr_left_2 = par_rtype;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[3];
        assert(var_typekey == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_typekey = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = mod_consts[4];
        CHECK_OBJECT(par_rtype);
        tmp_right_value_1 = par_rtype;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 137;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_atom);
        tmp_expression_value_2 = par_atom;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_resname == NULL);
        var_resname = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_atom);
        tmp_expression_value_5 = par_atom;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[8];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_het_atm == NULL);
        var_het_atm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_atom);
        tmp_expression_value_6 = par_atom;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[9]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_at_name == NULL);
        var_at_name = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_atom);
        tmp_expression_value_7 = par_atom;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_at_elem == NULL);
        var_at_elem = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_3 = var_at_elem;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        assert(tmp_or_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_4 = var_at_elem;
        tmp_cmp_expr_right_4 = mod_consts[12];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[14];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_2, 15);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_het_atm);
        tmp_cmp_expr_left_5 = var_het_atm;
        tmp_cmp_expr_right_5 = mod_consts[16];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_6 = var_at_elem;
        tmp_cmp_expr_right_6 = mod_consts[17];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_subscript_value_5;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[3];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_4, 2);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_5 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_het_atm);
        tmp_cmp_expr_left_7 = var_het_atm;
        tmp_cmp_expr_right_7 = mod_consts[18];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 153;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        assert(tmp_and_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_8 = var_at_elem;
        tmp_cmp_expr_right_8 = mod_consts[19];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[20];
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_6, 18);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_7 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_het_atm);
        tmp_cmp_expr_left_9 = var_het_atm;
        tmp_cmp_expr_right_9 = mod_consts[18];
        tmp_and_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        assert(tmp_and_left_value_3 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_10 = var_at_elem;
        tmp_cmp_expr_right_10 = mod_consts[21];
        tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[22];
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_8, 22);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_9 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_11 = var_resname;
        tmp_cmp_expr_right_11 = mod_consts[23];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_4);

            exception_lineno = 157;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        assert(tmp_and_left_value_4 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_12 = var_at_name;
        tmp_cmp_expr_right_12 = mod_consts[19];
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_7 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_value_11;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[24];
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_10, 9);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_11 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_13 = var_at_name;
        tmp_cmp_expr_right_13 = mod_consts[25];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = mod_consts[26];
        tmp_expression_value_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_12, 4);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_13 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_14 = var_at_name;
        tmp_cmp_expr_right_14 = mod_consts[19];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_subscript_value_15;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[27];
        tmp_expression_value_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_14, 7);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_15 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_15 = var_at_name;
        tmp_cmp_expr_right_15 = mod_consts[28];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_subscript_value_17;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[29];
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_16, 10);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_17 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_16 = var_at_name;
        tmp_cmp_expr_right_16 = mod_consts[17];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    {
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_subscript_value_19;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = mod_consts[1];
        tmp_expression_value_24 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_18, 1);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_19 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_17 = var_at_name;
        tmp_cmp_expr_right_17 = mod_consts[30];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_subscript_value_21;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[31];
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_20, 13);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_21 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_18 = var_at_name;
        tmp_cmp_expr_right_18 = mod_consts[32];
        tmp_and_left_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_5);

            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        assert(tmp_and_left_value_5 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_19 = var_resname;
        tmp_cmp_expr_right_19 = mod_consts[33];
        tmp_and_right_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_13 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_subscript_value_23;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = mod_consts[24];
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_29, tmp_subscript_value_22, 9);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_23 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_20 = var_at_name;
        tmp_cmp_expr_right_20 = mod_consts[32];
        tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_6);

            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        assert(tmp_and_left_value_6 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_21 = var_resname;
        tmp_cmp_expr_right_21 = PySet_New(mod_consts[34]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_21, tmp_cmp_expr_left_21);
        Py_DECREF(tmp_cmp_expr_right_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_14 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_14 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_14:;
    {
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_subscript_value_25;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[27];
        tmp_expression_value_30 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_24, 7);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_25 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_22 = var_at_name;
        tmp_cmp_expr_right_22 = mod_consts[32];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    {
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_subscript_value_27;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = mod_consts[35];
        tmp_expression_value_32 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_33, tmp_subscript_value_26, 8);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_27 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_23 = var_at_name;
        tmp_cmp_expr_right_23 = mod_consts[36];
        tmp_and_left_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_7);

            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        assert(tmp_and_left_value_7 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_24 = var_resname;
        tmp_cmp_expr_right_24 = PySet_New(mod_consts[37]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_24, tmp_cmp_expr_left_24);
        Py_DECREF(tmp_cmp_expr_right_24);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_16 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_condition_result_16 = tmp_and_left_value_7;
        and_end_7:;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_16:;
    {
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_subscript_value_29;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_28 = mod_consts[29];
        tmp_expression_value_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_28, 10);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_29 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_29);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_16;
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_and_left_truth_8;
        nuitka_bool tmp_and_left_value_8;
        nuitka_bool tmp_and_right_value_8;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_25 = var_at_name;
        tmp_cmp_expr_right_25 = mod_consts[36];
        tmp_and_left_value_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_and_left_value_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_8);

            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_8 == 1) {
            goto and_right_8;
        } else {
            goto and_left_8;
        }
        and_right_8:;
        assert(tmp_and_left_value_8 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_26 = var_resname;
        tmp_cmp_expr_right_26 = mod_consts[38];
        tmp_and_right_value_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        if (tmp_and_right_value_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_and_right_value_8;
        goto and_end_8;
        and_left_8:;
        tmp_condition_result_17 = tmp_and_left_value_8;
        and_end_8:;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    {
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_subscript_value_31;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = mod_consts[27];
        tmp_expression_value_36 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_37, tmp_subscript_value_30, 7);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_31 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_27 = var_at_name;
        tmp_cmp_expr_right_27 = mod_consts[36];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    {
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_subscript_value_33;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_32 = mod_consts[35];
        tmp_expression_value_38 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_39, tmp_subscript_value_32, 8);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_33 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_and_left_truth_9;
        nuitka_bool tmp_and_left_value_9;
        nuitka_bool tmp_and_right_value_9;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_28 = var_resname;
        tmp_cmp_expr_right_28 = mod_consts[39];
        tmp_and_left_value_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        if (tmp_and_left_value_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_9);

            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_9 == 1) {
            goto and_right_9;
        } else {
            goto and_left_9;
        }
        and_right_9:;
        assert(tmp_and_left_value_9 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_29 = var_at_elem;
        tmp_cmp_expr_right_29 = mod_consts[17];
        tmp_and_right_value_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        if (tmp_and_right_value_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_and_right_value_9;
        goto and_end_9;
        and_left_9:;
        tmp_condition_result_19 = tmp_and_left_value_9;
        and_end_9:;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_19 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_subscript_value_35;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = mod_consts[40];
        tmp_expression_value_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_34, 3);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_35 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_19;
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_and_left_truth_10;
        nuitka_bool tmp_and_left_value_10;
        nuitka_bool tmp_and_right_value_10;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_30 = var_resname;
        tmp_cmp_expr_right_30 = mod_consts[23];
        tmp_and_left_value_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        if (tmp_and_left_value_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_10 = tmp_and_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_10);

            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_10 == 1) {
            goto and_right_10;
        } else {
            goto and_left_10;
        }
        and_right_10:;
        assert(tmp_and_left_value_10 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_31 = var_at_name;
        tmp_cmp_expr_right_31 = mod_consts[41];
        tmp_and_right_value_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        if (tmp_and_right_value_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_and_right_value_10;
        goto and_end_10;
        and_left_10:;
        tmp_condition_result_20 = tmp_and_left_value_10;
        and_end_10:;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
        assert(tmp_condition_result_20 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_20:;
    {
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_subscript_value_37;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_36 = mod_consts[24];
        tmp_expression_value_42 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_43, tmp_subscript_value_36, 9);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_37 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_37);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_and_left_truth_11;
        nuitka_bool tmp_and_left_value_11;
        nuitka_bool tmp_and_right_value_11;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_32 = var_resname;
        tmp_cmp_expr_right_32 = mod_consts[42];
        tmp_and_left_value_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        if (tmp_and_left_value_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_11);

            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_11 == 1) {
            goto and_right_11;
        } else {
            goto and_left_11;
        }
        and_right_11:;
        assert(tmp_and_left_value_11 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_33 = var_at_name;
        tmp_cmp_expr_right_33 = mod_consts[21];
        tmp_and_right_value_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
        if (tmp_and_right_value_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_and_right_value_11;
        goto and_end_11;
        and_left_11:;
        tmp_condition_result_21 = tmp_and_left_value_11;
        and_end_11:;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        assert(tmp_condition_result_21 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_21:;
    {
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_subscript_value_39;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = mod_consts[35];
        tmp_expression_value_44 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_38, 8);
        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_44);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_39 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_21;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_and_left_truth_12;
        nuitka_bool tmp_and_left_value_12;
        nuitka_bool tmp_and_right_value_12;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_34 = var_resname;
        tmp_cmp_expr_right_34 = mod_consts[42];
        tmp_and_left_value_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        if (tmp_and_left_value_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_12 = tmp_and_left_value_12 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_12);

            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_12 == 1) {
            goto and_right_12;
        } else {
            goto and_left_12;
        }
        and_right_12:;
        assert(tmp_and_left_value_12 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_35 = var_at_name;
        tmp_cmp_expr_right_35 = PySet_New(mod_consts[43]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_35, tmp_cmp_expr_left_35);
        Py_DECREF(tmp_cmp_expr_right_35);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_22 = tmp_and_right_value_12;
        goto and_end_12;
        and_left_12:;
        tmp_condition_result_22 = tmp_and_left_value_12;
        and_end_12:;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
        assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_22:;
    {
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_subscript_value_41;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_40 = mod_consts[26];
        tmp_expression_value_46 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_47, tmp_subscript_value_40, 4);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_46);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_41 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_41);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_22;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_and_left_truth_13;
        nuitka_bool tmp_and_left_value_13;
        nuitka_bool tmp_and_right_value_13;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_36 = var_resname;
        tmp_cmp_expr_right_36 = mod_consts[42];
        tmp_and_left_value_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        if (tmp_and_left_value_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_13 = tmp_and_left_value_13 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_13);

            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_13 == 1) {
            goto and_right_13;
        } else {
            goto and_left_13;
        }
        and_right_13:;
        assert(tmp_and_left_value_13 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_cmp_expr_left_37 = var_at_name;
        tmp_cmp_expr_right_37 = mod_consts[44];
        tmp_and_right_value_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        if (tmp_and_right_value_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = tmp_and_right_value_13;
        goto and_end_13;
        and_left_13:;
        tmp_condition_result_23 = tmp_and_left_value_13;
        and_end_13:;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        assert(tmp_condition_result_23 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_23:;
    {
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_subscript_value_43;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = mod_consts[29];
        tmp_expression_value_48 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_49, tmp_subscript_value_42, 10);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_43 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_43);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        int tmp_and_left_truth_14;
        nuitka_bool tmp_and_left_value_14;
        nuitka_bool tmp_and_right_value_14;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_38 = var_resname;
        tmp_cmp_expr_right_38 = mod_consts[42];
        tmp_and_left_value_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_and_left_value_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_14 = tmp_and_left_value_14 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_14);

            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_14 == 1) {
            goto and_right_14;
        } else {
            goto and_left_14;
        }
        and_right_14:;
        assert(tmp_and_left_value_14 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_at_name);
        tmp_expression_value_50 = var_at_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[45]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 209;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[46]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_14 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_24 = tmp_and_right_value_14;
        goto and_end_14;
        and_left_14:;
        tmp_condition_result_24 = tmp_and_left_value_14;
        and_end_14:;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_24:;
    {
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_subscript_value_45;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_44 = mod_consts[47];
        tmp_expression_value_51 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_52, tmp_subscript_value_44, 5);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_51);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_45 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_45);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_24;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_25;
        int tmp_and_left_truth_15;
        nuitka_bool tmp_and_left_value_15;
        nuitka_bool tmp_and_right_value_15;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_39 = var_resname;
        tmp_cmp_expr_right_39 = mod_consts[48];
        tmp_and_left_value_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
        if (tmp_and_left_value_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_15 = tmp_and_left_value_15 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_15);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_15 == 1) {
            goto and_right_15;
        } else {
            goto and_left_15;
        }
        and_right_15:;
        assert(tmp_and_left_value_15 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_40 = var_at_name;
        tmp_cmp_expr_right_40 = mod_consts[50];
        tmp_and_right_value_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        if (tmp_and_right_value_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_and_right_value_15;
        goto and_end_15;
        and_left_15:;
        tmp_condition_result_25 = tmp_and_left_value_15;
        and_end_15:;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
        assert(tmp_condition_result_25 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_25:;
    {
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_subscript_value_47;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_46 = mod_consts[1];
        tmp_expression_value_53 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_54, tmp_subscript_value_46, 1);
        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_47 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_47);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_25;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_26;
        int tmp_and_left_truth_16;
        nuitka_bool tmp_and_left_value_16;
        nuitka_bool tmp_and_right_value_16;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_41 = var_resname;
        tmp_cmp_expr_right_41 = mod_consts[48];
        tmp_and_left_value_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_and_left_value_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_16 = tmp_and_left_value_16 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_16);

            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_16 == 1) {
            goto and_right_16;
        } else {
            goto and_left_16;
        }
        and_right_16:;
        assert(tmp_and_left_value_16 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_42 = var_at_name;
        tmp_cmp_expr_right_42 = mod_consts[51];
        tmp_and_right_value_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        if (tmp_and_right_value_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = tmp_and_right_value_16;
        goto and_end_16;
        and_left_16:;
        tmp_condition_result_26 = tmp_and_left_value_16;
        and_end_16:;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_48;
        PyObject *tmp_subscript_value_49;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_48 = mod_consts[47];
        tmp_expression_value_55 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_48, 5);
        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_55);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_49 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_49);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_27;
        int tmp_and_left_truth_17;
        nuitka_bool tmp_and_left_value_17;
        nuitka_bool tmp_and_right_value_17;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_43 = var_resname;
        tmp_cmp_expr_right_43 = mod_consts[48];
        tmp_and_left_value_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_43, tmp_cmp_expr_right_43);
        if (tmp_and_left_value_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_17 = tmp_and_left_value_17 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_17);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_17 == 1) {
            goto and_right_17;
        } else {
            goto and_left_17;
        }
        and_right_17:;
        assert(tmp_and_left_value_17 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = var_at_name;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 215;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[52]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_17 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_27 = tmp_and_right_value_17;
        goto and_end_17;
        and_left_17:;
        tmp_condition_result_27 = tmp_and_left_value_17;
        and_end_17:;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
        assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_27:;
    {
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_subscript_value_51;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = mod_consts[40];
        tmp_expression_value_58 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_59, tmp_subscript_value_50, 3);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_51 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_27;
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_and_left_truth_18;
        nuitka_bool tmp_and_left_value_18;
        nuitka_bool tmp_and_right_value_18;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_44 = var_resname;
        tmp_cmp_expr_right_44 = mod_consts[53];
        tmp_and_left_value_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        if (tmp_and_left_value_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_18 = tmp_and_left_value_18 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_18);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_18 == 1) {
            goto and_right_18;
        } else {
            goto and_left_18;
        }
        and_right_18:;
        assert(tmp_and_left_value_18 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_60 = var_at_name;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[45]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 217;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[54]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_18 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_condition_result_28 = tmp_and_right_value_18;
        goto and_end_18;
        and_left_18:;
        tmp_condition_result_28 = tmp_and_left_value_18;
        and_end_18:;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
        assert(tmp_condition_result_28 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_28:;
    {
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_subscript_value_53;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_52 = mod_consts[40];
        tmp_expression_value_61 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_62, tmp_subscript_value_52, 3);
        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_53 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_53);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_28;
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_29;
        int tmp_and_left_truth_19;
        nuitka_bool tmp_and_left_value_19;
        nuitka_bool tmp_and_right_value_19;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_45 = var_resname;
        tmp_cmp_expr_right_45 = mod_consts[55];
        tmp_and_left_value_19 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_45, tmp_cmp_expr_right_45);
        if (tmp_and_left_value_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_19 = tmp_and_left_value_19 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_19);

            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_19 == 1) {
            goto and_right_19;
        } else {
            goto and_left_19;
        }
        and_right_19:;
        assert(tmp_and_left_value_19 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_63 = var_at_name;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[45]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 219;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[56]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_19 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_condition_result_29 = tmp_and_right_value_19;
        goto and_end_19;
        and_left_19:;
        tmp_condition_result_29 = tmp_and_left_value_19;
        and_end_19:;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
        assert(tmp_condition_result_29 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_29:;
    {
        PyObject *tmp_expression_value_64;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_subscript_value_55;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_54 = mod_consts[1];
        tmp_expression_value_64 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_65, tmp_subscript_value_54, 1);
        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_64);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_55 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_55);
        Py_DECREF(tmp_expression_value_64);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_29;
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_30;
        int tmp_and_left_truth_20;
        nuitka_bool tmp_and_left_value_20;
        nuitka_bool tmp_and_right_value_20;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_46 = var_resname;
        tmp_cmp_expr_right_46 = mod_consts[55];
        tmp_and_left_value_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_46, tmp_cmp_expr_right_46);
        if (tmp_and_left_value_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_20 = tmp_and_left_value_20 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_20);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_20 == 1) {
            goto and_right_20;
        } else {
            goto and_left_20;
        }
        and_right_20:;
        assert(tmp_and_left_value_20 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_47 = var_at_name;
        tmp_cmp_expr_right_47 = mod_consts[51];
        tmp_and_right_value_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
        if (tmp_and_right_value_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = tmp_and_right_value_20;
        goto and_end_20;
        and_left_20:;
        tmp_condition_result_30 = tmp_and_left_value_20;
        and_end_20:;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
        assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_30:;
    {
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_56;
        PyObject *tmp_subscript_value_57;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_56 = mod_consts[40];
        tmp_expression_value_66 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_67, tmp_subscript_value_56, 3);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_66);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_57 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_57);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_30;
    branch_no_30:;
    {
        nuitka_bool tmp_condition_result_31;
        int tmp_and_left_truth_21;
        nuitka_bool tmp_and_left_value_21;
        nuitka_bool tmp_and_right_value_21;
        PyObject *tmp_cmp_expr_left_48;
        PyObject *tmp_cmp_expr_right_48;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_48 = var_resname;
        tmp_cmp_expr_right_48 = mod_consts[55];
        tmp_and_left_value_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_48, tmp_cmp_expr_right_48);
        if (tmp_and_left_value_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_21 = tmp_and_left_value_21 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_21);

            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_21 == 1) {
            goto and_right_21;
        } else {
            goto and_left_21;
        }
        and_right_21:;
        assert(tmp_and_left_value_21 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_68 = var_at_name;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[45]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 223;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[57]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_21 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        tmp_condition_result_31 = tmp_and_right_value_21;
        goto and_end_21;
        and_left_21:;
        tmp_condition_result_31 = tmp_and_left_value_21;
        and_end_21:;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
        assert(tmp_condition_result_31 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_31:;
    {
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_subscript_value_59;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_58 = mod_consts[40];
        tmp_expression_value_69 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_70, tmp_subscript_value_58, 3);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_69);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_59 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_59);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_31;
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_32;
        int tmp_and_left_truth_22;
        nuitka_bool tmp_and_left_value_22;
        nuitka_bool tmp_and_right_value_22;
        PyObject *tmp_cmp_expr_left_49;
        PyObject *tmp_cmp_expr_right_49;
        PyObject *tmp_cmp_expr_left_50;
        PyObject *tmp_cmp_expr_right_50;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_49 = var_resname;
        tmp_cmp_expr_right_49 = PySet_New(mod_consts[58]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_49, tmp_cmp_expr_left_49);
        Py_DECREF(tmp_cmp_expr_right_49);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_22 = tmp_and_left_value_22 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_22 == 1) {
            goto and_right_22;
        } else {
            goto and_left_22;
        }
        and_right_22:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_50 = var_at_name;
        tmp_cmp_expr_right_50 = mod_consts[59];
        tmp_and_right_value_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_50, tmp_cmp_expr_right_50);
        if (tmp_and_right_value_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_32 = tmp_and_right_value_22;
        goto and_end_22;
        and_left_22:;
        tmp_condition_result_32 = tmp_and_left_value_22;
        and_end_22:;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
        assert(tmp_condition_result_32 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_32:;
    {
        PyObject *tmp_expression_value_71;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_60;
        PyObject *tmp_subscript_value_61;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_60 = mod_consts[31];
        tmp_expression_value_71 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_72, tmp_subscript_value_60, 13);
        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_71);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_61 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_61);
        Py_DECREF(tmp_expression_value_71);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_32;
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_33;
        int tmp_and_left_truth_23;
        nuitka_bool tmp_and_left_value_23;
        nuitka_bool tmp_and_right_value_23;
        PyObject *tmp_cmp_expr_left_51;
        PyObject *tmp_cmp_expr_right_51;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_6;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_51 = var_resname;
        tmp_cmp_expr_right_51 = PySet_New(mod_consts[60]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_51, tmp_cmp_expr_left_51);
        Py_DECREF(tmp_cmp_expr_right_51);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_23 = tmp_and_left_value_23 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_23 == 1) {
            goto and_right_23;
        } else {
            goto and_left_23;
        }
        and_right_23:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_73 = var_at_name;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[45]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 227;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[61]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_6);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_6);

            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_23 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_6);
        tmp_condition_result_33 = tmp_and_right_value_23;
        goto and_end_23;
        and_left_23:;
        tmp_condition_result_33 = tmp_and_left_value_23;
        and_end_23:;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_62;
        PyObject *tmp_subscript_value_63;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_62 = mod_consts[31];
        tmp_expression_value_74 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_75, tmp_subscript_value_62, 13);
        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_74);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_63 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_63);
        Py_DECREF(tmp_expression_value_74);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_33;
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_34;
        int tmp_and_left_truth_24;
        nuitka_bool tmp_and_left_value_24;
        nuitka_bool tmp_and_right_value_24;
        PyObject *tmp_cmp_expr_left_52;
        PyObject *tmp_cmp_expr_right_52;
        PyObject *tmp_cmp_expr_left_53;
        PyObject *tmp_cmp_expr_right_53;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_52 = var_resname;
        tmp_cmp_expr_right_52 = mod_consts[62];
        tmp_and_left_value_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_52, tmp_cmp_expr_right_52);
        if (tmp_and_left_value_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_24 = tmp_and_left_value_24 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_24);

            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_24 == 1) {
            goto and_right_24;
        } else {
            goto and_left_24;
        }
        and_right_24:;
        assert(tmp_and_left_value_24 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_53 = var_at_name;
        tmp_cmp_expr_right_53 = mod_consts[59];
        tmp_and_right_value_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_53, tmp_cmp_expr_right_53);
        if (tmp_and_right_value_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = tmp_and_right_value_24;
        goto and_end_24;
        and_left_24:;
        tmp_condition_result_34 = tmp_and_left_value_24;
        and_end_24:;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
        assert(tmp_condition_result_34 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_34:;
    {
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_64;
        PyObject *tmp_subscript_value_65;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_64 = mod_consts[63];
        tmp_expression_value_76 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_77, tmp_subscript_value_64, 12);
        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_65 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_65);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_34;
    branch_no_34:;
    {
        nuitka_bool tmp_condition_result_35;
        int tmp_and_left_truth_25;
        nuitka_bool tmp_and_left_value_25;
        nuitka_bool tmp_and_right_value_25;
        PyObject *tmp_cmp_expr_left_54;
        PyObject *tmp_cmp_expr_right_54;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_7;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_54 = var_resname;
        tmp_cmp_expr_right_54 = mod_consts[64];
        tmp_and_left_value_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_54, tmp_cmp_expr_right_54);
        if (tmp_and_left_value_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_25 = tmp_and_left_value_25 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_25);

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_25 == 1) {
            goto and_right_25;
        } else {
            goto and_left_25;
        }
        and_right_25:;
        assert(tmp_and_left_value_25 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_78 = var_at_name;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[45]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 231;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[65]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        tmp_condition_result_35 = tmp_and_right_value_25;
        goto and_end_25;
        and_left_25:;
        tmp_condition_result_35 = tmp_and_left_value_25;
        and_end_25:;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
        assert(tmp_condition_result_35 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_35:;
    {
        PyObject *tmp_expression_value_79;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_66;
        PyObject *tmp_subscript_value_67;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_66 = mod_consts[40];
        tmp_expression_value_79 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_80, tmp_subscript_value_66, 3);
        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_79);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_67 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_67);
        Py_DECREF(tmp_expression_value_79);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_35;
    branch_no_35:;
    {
        nuitka_bool tmp_condition_result_36;
        int tmp_and_left_truth_26;
        nuitka_bool tmp_and_left_value_26;
        nuitka_bool tmp_and_right_value_26;
        PyObject *tmp_cmp_expr_left_55;
        PyObject *tmp_cmp_expr_right_55;
        PyObject *tmp_cmp_expr_left_56;
        PyObject *tmp_cmp_expr_right_56;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_55 = var_resname;
        tmp_cmp_expr_right_55 = PySet_New(mod_consts[66]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_55, tmp_cmp_expr_left_55);
        Py_DECREF(tmp_cmp_expr_right_55);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_26 = tmp_and_left_value_26 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_26 == 1) {
            goto and_right_26;
        } else {
            goto and_left_26;
        }
        and_right_26:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_56 = var_at_name;
        tmp_cmp_expr_right_56 = mod_consts[21];
        tmp_and_right_value_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_56, tmp_cmp_expr_right_56);
        if (tmp_and_right_value_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_36 = tmp_and_right_value_26;
        goto and_end_26;
        and_left_26:;
        tmp_condition_result_36 = tmp_and_left_value_26;
        and_end_26:;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
        assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_36:;
    {
        PyObject *tmp_expression_value_81;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_68;
        PyObject *tmp_subscript_value_69;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_68 = mod_consts[29];
        tmp_expression_value_81 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_82, tmp_subscript_value_68, 10);
        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_69 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_69);
        Py_DECREF(tmp_expression_value_81);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_36;
    branch_no_36:;
    {
        nuitka_bool tmp_condition_result_37;
        int tmp_and_left_truth_27;
        nuitka_bool tmp_and_left_value_27;
        nuitka_bool tmp_and_right_value_27;
        PyObject *tmp_cmp_expr_left_57;
        PyObject *tmp_cmp_expr_right_57;
        PyObject *tmp_cmp_expr_left_58;
        PyObject *tmp_cmp_expr_right_58;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_57 = var_resname;
        tmp_cmp_expr_right_57 = mod_consts[39];
        tmp_and_left_value_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_57, tmp_cmp_expr_right_57);
        if (tmp_and_left_value_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_27 = tmp_and_left_value_27 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_27 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_27);

            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_27 == 1) {
            goto and_right_27;
        } else {
            goto and_left_27;
        }
        and_right_27:;
        assert(tmp_and_left_value_27 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_58 = var_at_name;
        tmp_cmp_expr_right_58 = mod_consts[67];
        tmp_and_right_value_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_58, tmp_cmp_expr_right_58);
        if (tmp_and_right_value_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_37 = tmp_and_right_value_27;
        goto and_end_27;
        and_left_27:;
        tmp_condition_result_37 = tmp_and_left_value_27;
        and_end_27:;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
        assert(tmp_condition_result_37 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_37:;
    {
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_70;
        PyObject *tmp_subscript_value_71;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_70 = mod_consts[1];
        tmp_expression_value_83 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_84, tmp_subscript_value_70, 1);
        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_83);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_71 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_71);
        Py_DECREF(tmp_expression_value_83);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_37;
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_38;
        int tmp_and_left_truth_28;
        nuitka_bool tmp_and_left_value_28;
        nuitka_bool tmp_and_right_value_28;
        PyObject *tmp_cmp_expr_left_59;
        PyObject *tmp_cmp_expr_right_59;
        PyObject *tmp_cmp_expr_left_60;
        PyObject *tmp_cmp_expr_right_60;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_59 = var_resname;
        tmp_cmp_expr_right_59 = mod_consts[39];
        tmp_and_left_value_28 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_59, tmp_cmp_expr_right_59);
        if (tmp_and_left_value_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_28 = tmp_and_left_value_28 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_28 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_28);

            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_28 == 1) {
            goto and_right_28;
        } else {
            goto and_left_28;
        }
        and_right_28:;
        assert(tmp_and_left_value_28 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_60 = var_at_name;
        tmp_cmp_expr_right_60 = mod_consts[68];
        tmp_and_right_value_28 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_60, tmp_cmp_expr_right_60);
        if (tmp_and_right_value_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_38 = tmp_and_right_value_28;
        goto and_end_28;
        and_left_28:;
        tmp_condition_result_38 = tmp_and_left_value_28;
        and_end_28:;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
        assert(tmp_condition_result_38 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_38:;
    {
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_72;
        PyObject *tmp_subscript_value_73;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_72 = mod_consts[47];
        tmp_expression_value_85 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_86, tmp_subscript_value_72, 5);
        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_73 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_73);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_38;
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_39;
        int tmp_and_left_truth_29;
        nuitka_bool tmp_and_left_value_29;
        nuitka_bool tmp_and_right_value_29;
        PyObject *tmp_cmp_expr_left_61;
        PyObject *tmp_cmp_expr_right_61;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_8;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_61 = var_resname;
        tmp_cmp_expr_right_61 = PySet_New(mod_consts[69]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_61, tmp_cmp_expr_left_61);
        Py_DECREF(tmp_cmp_expr_right_61);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_29 = tmp_and_left_value_29 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_29 == 1) {
            goto and_right_29;
        } else {
            goto and_left_29;
        }
        and_right_29:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_87 = var_at_name;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[45]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 239;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[70]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_8);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_8);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_8);
        tmp_condition_result_39 = tmp_and_right_value_29;
        goto and_end_29;
        and_left_29:;
        tmp_condition_result_39 = tmp_and_left_value_29;
        and_end_29:;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_74;
        PyObject *tmp_subscript_value_75;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_74 = mod_consts[40];
        tmp_expression_value_88 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_89, tmp_subscript_value_74, 3);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_88);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_75 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_75);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_39;
    branch_no_39:;
    {
        bool tmp_condition_result_40;
        int tmp_and_left_truth_30;
        bool tmp_and_left_value_30;
        bool tmp_and_right_value_30;
        PyObject *tmp_cmp_expr_left_62;
        PyObject *tmp_cmp_expr_right_62;
        PyObject *tmp_cmp_expr_left_63;
        PyObject *tmp_cmp_expr_right_63;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_62 = var_resname;
        tmp_cmp_expr_right_62 = PySet_New(mod_consts[71]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_62, tmp_cmp_expr_left_62);
        Py_DECREF(tmp_cmp_expr_right_62);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_30 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_30 = tmp_and_left_value_30 != false ? 1 : 0;
        if (tmp_and_left_truth_30 == 1) {
            goto and_right_30;
        } else {
            goto and_left_30;
        }
        and_right_30:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_63 = var_at_name;
        tmp_cmp_expr_right_63 = PySet_New(mod_consts[72]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_63, tmp_cmp_expr_left_63);
        Py_DECREF(tmp_cmp_expr_right_63);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_30 = (tmp_res == 1) ? true : false;
        tmp_condition_result_40 = tmp_and_right_value_30;
        goto and_end_30;
        and_left_30:;
        tmp_condition_result_40 = tmp_and_left_value_30;
        and_end_30:;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_76;
        PyObject *tmp_subscript_value_77;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_76 = mod_consts[73];
        tmp_expression_value_90 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_91, tmp_subscript_value_76, 11);
        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_90);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_77 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_77);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_40;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_41;
        int tmp_and_left_truth_31;
        nuitka_bool tmp_and_left_value_31;
        nuitka_bool tmp_and_right_value_31;
        PyObject *tmp_cmp_expr_left_64;
        PyObject *tmp_cmp_expr_right_64;
        PyObject *tmp_cmp_expr_left_65;
        PyObject *tmp_cmp_expr_right_65;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_64 = var_resname;
        tmp_cmp_expr_right_64 = PySet_New(mod_consts[74]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_64, tmp_cmp_expr_left_64);
        Py_DECREF(tmp_cmp_expr_right_64);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_31 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_31 = tmp_and_left_value_31 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_31 == 1) {
            goto and_right_31;
        } else {
            goto and_left_31;
        }
        and_right_31:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_65 = var_at_name;
        tmp_cmp_expr_right_65 = mod_consts[75];
        tmp_and_right_value_31 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_65, tmp_cmp_expr_right_65);
        if (tmp_and_right_value_31 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = tmp_and_right_value_31;
        goto and_end_31;
        and_left_31:;
        tmp_condition_result_41 = tmp_and_left_value_31;
        and_end_31:;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
        assert(tmp_condition_result_41 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_41:;
    {
        PyObject *tmp_expression_value_92;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_78;
        PyObject *tmp_subscript_value_79;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_78 = mod_consts[76];
        tmp_expression_value_92 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_93, tmp_subscript_value_78, 14);
        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_92);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_79 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_79);
        Py_DECREF(tmp_expression_value_92);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_41;
    branch_no_41:;
    {
        bool tmp_condition_result_42;
        int tmp_and_left_truth_32;
        bool tmp_and_left_value_32;
        bool tmp_and_right_value_32;
        PyObject *tmp_cmp_expr_left_66;
        PyObject *tmp_cmp_expr_right_66;
        PyObject *tmp_cmp_expr_left_67;
        PyObject *tmp_cmp_expr_right_67;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_66 = var_resname;
        tmp_cmp_expr_right_66 = PySet_New(mod_consts[77]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_66, tmp_cmp_expr_left_66);
        Py_DECREF(tmp_cmp_expr_right_66);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_32 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_32 = tmp_and_left_value_32 != false ? 1 : 0;
        if (tmp_and_left_truth_32 == 1) {
            goto and_right_32;
        } else {
            goto and_left_32;
        }
        and_right_32:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_67 = var_at_name;
        tmp_cmp_expr_right_67 = PySet_New(mod_consts[78]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_67, tmp_cmp_expr_left_67);
        Py_DECREF(tmp_cmp_expr_right_67);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_32 = (tmp_res == 1) ? true : false;
        tmp_condition_result_42 = tmp_and_right_value_32;
        goto and_end_32;
        and_left_32:;
        tmp_condition_result_42 = tmp_and_left_value_32;
        and_end_32:;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_80;
        PyObject *tmp_subscript_value_81;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_80 = mod_consts[26];
        tmp_expression_value_94 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_95, tmp_subscript_value_80, 4);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_94);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_81 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_81);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_42;
    branch_no_42:;
    {
        bool tmp_condition_result_43;
        int tmp_and_left_truth_33;
        bool tmp_and_left_value_33;
        bool tmp_and_right_value_33;
        PyObject *tmp_cmp_expr_left_68;
        PyObject *tmp_cmp_expr_right_68;
        PyObject *tmp_cmp_expr_left_69;
        PyObject *tmp_cmp_expr_right_69;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_68 = var_resname;
        tmp_cmp_expr_right_68 = PySet_New(mod_consts[79]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_68, tmp_cmp_expr_left_68);
        Py_DECREF(tmp_cmp_expr_right_68);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_33 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_33 = tmp_and_left_value_33 != false ? 1 : 0;
        if (tmp_and_left_truth_33 == 1) {
            goto and_right_33;
        } else {
            goto and_left_33;
        }
        and_right_33:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_69 = var_at_name;
        tmp_cmp_expr_right_69 = PySet_New(mod_consts[80]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_69, tmp_cmp_expr_left_69);
        Py_DECREF(tmp_cmp_expr_right_69);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_33 = (tmp_res == 1) ? true : false;
        tmp_condition_result_43 = tmp_and_right_value_33;
        goto and_end_33;
        and_left_33:;
        tmp_condition_result_43 = tmp_and_left_value_33;
        and_end_33:;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_82;
        PyObject *tmp_subscript_value_83;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_82 = mod_consts[26];
        tmp_expression_value_96 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_97, tmp_subscript_value_82, 4);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_96);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_83 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_83);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_43;
    branch_no_43:;
    {
        bool tmp_condition_result_44;
        int tmp_and_left_truth_34;
        bool tmp_and_left_value_34;
        bool tmp_and_right_value_34;
        PyObject *tmp_cmp_expr_left_70;
        PyObject *tmp_cmp_expr_right_70;
        PyObject *tmp_cmp_expr_left_71;
        PyObject *tmp_cmp_expr_right_71;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_70 = var_resname;
        tmp_cmp_expr_right_70 = PySet_New(mod_consts[81]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_70, tmp_cmp_expr_left_70);
        Py_DECREF(tmp_cmp_expr_right_70);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_34 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_34 = tmp_and_left_value_34 != false ? 1 : 0;
        if (tmp_and_left_truth_34 == 1) {
            goto and_right_34;
        } else {
            goto and_left_34;
        }
        and_right_34:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_71 = var_at_name;
        tmp_cmp_expr_right_71 = PySet_New(mod_consts[80]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_71, tmp_cmp_expr_left_71);
        Py_DECREF(tmp_cmp_expr_right_71);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_34 = (tmp_res == 1) ? true : false;
        tmp_condition_result_44 = tmp_and_right_value_34;
        goto and_end_34;
        and_left_34:;
        tmp_condition_result_44 = tmp_and_left_value_34;
        and_end_34:;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_84;
        PyObject *tmp_subscript_value_85;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_84 = mod_consts[76];
        tmp_expression_value_98 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_99, tmp_subscript_value_84, 14);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_98);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_85 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_85);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_44;
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_45;
        int tmp_and_left_truth_35;
        nuitka_bool tmp_and_left_value_35;
        nuitka_bool tmp_and_right_value_35;
        PyObject *tmp_cmp_expr_left_72;
        PyObject *tmp_cmp_expr_right_72;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_9;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_72 = var_resname;
        tmp_cmp_expr_right_72 = PySet_New(mod_consts[82]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_72, tmp_cmp_expr_left_72);
        Py_DECREF(tmp_cmp_expr_right_72);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_35 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_35 = tmp_and_left_value_35 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_35 == 1) {
            goto and_right_35;
        } else {
            goto and_left_35;
        }
        and_right_35:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_100 = var_at_name;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[45]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 258;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[83]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_9);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_9);

            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_35 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_9);
        tmp_condition_result_45 = tmp_and_right_value_35;
        goto and_end_35;
        and_left_35:;
        tmp_condition_result_45 = tmp_and_left_value_35;
        and_end_35:;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_86;
        PyObject *tmp_subscript_value_87;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_86 = mod_consts[26];
        tmp_expression_value_101 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_102, tmp_subscript_value_86, 4);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_101);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_87 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_101, tmp_subscript_value_87);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_45;
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_46;
        int tmp_and_left_truth_36;
        nuitka_bool tmp_and_left_value_36;
        nuitka_bool tmp_and_right_value_36;
        PyObject *tmp_cmp_expr_left_73;
        PyObject *tmp_cmp_expr_right_73;
        PyObject *tmp_cmp_expr_left_74;
        PyObject *tmp_cmp_expr_right_74;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_73 = var_resname;
        tmp_cmp_expr_right_73 = mod_consts[84];
        tmp_and_left_value_36 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_73, tmp_cmp_expr_right_73);
        if (tmp_and_left_value_36 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_36 = tmp_and_left_value_36 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_36 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_36);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_36 == 1) {
            goto and_right_36;
        } else {
            goto and_left_36;
        }
        and_right_36:;
        assert(tmp_and_left_value_36 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_74 = var_at_name;
        tmp_cmp_expr_right_74 = mod_consts[85];
        tmp_and_right_value_36 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_74, tmp_cmp_expr_right_74);
        if (tmp_and_right_value_36 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_46 = tmp_and_right_value_36;
        goto and_end_36;
        and_left_36:;
        tmp_condition_result_46 = tmp_and_left_value_36;
        and_end_36:;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
        assert(tmp_condition_result_46 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_46:;
    {
        PyObject *tmp_expression_value_103;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_subscript_value_88;
        PyObject *tmp_subscript_value_89;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_88 = mod_consts[35];
        tmp_expression_value_103 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_104, tmp_subscript_value_88, 8);
        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_89 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_89);
        Py_DECREF(tmp_expression_value_103);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_46;
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_47;
        int tmp_and_left_truth_37;
        nuitka_bool tmp_and_left_value_37;
        nuitka_bool tmp_and_right_value_37;
        PyObject *tmp_cmp_expr_left_75;
        PyObject *tmp_cmp_expr_right_75;
        PyObject *tmp_cmp_expr_left_76;
        PyObject *tmp_cmp_expr_right_76;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_75 = var_resname;
        tmp_cmp_expr_right_75 = mod_consts[84];
        tmp_and_left_value_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_75, tmp_cmp_expr_right_75);
        if (tmp_and_left_value_37 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_37 = tmp_and_left_value_37 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_37 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_37);

            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_37 == 1) {
            goto and_right_37;
        } else {
            goto and_left_37;
        }
        and_right_37:;
        assert(tmp_and_left_value_37 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_76 = var_at_name;
        tmp_cmp_expr_right_76 = mod_consts[86];
        tmp_and_right_value_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_76, tmp_cmp_expr_right_76);
        if (tmp_and_right_value_37 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_47 = tmp_and_right_value_37;
        goto and_end_37;
        and_left_37:;
        tmp_condition_result_47 = tmp_and_left_value_37;
        and_end_37:;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
        assert(tmp_condition_result_47 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_47:;
    {
        PyObject *tmp_expression_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_90;
        PyObject *tmp_subscript_value_91;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_90 = mod_consts[24];
        tmp_expression_value_105 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_106, tmp_subscript_value_90, 9);
        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_105);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_91 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_105, tmp_subscript_value_91);
        Py_DECREF(tmp_expression_value_105);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_47;
    branch_no_47:;
    {
        nuitka_bool tmp_condition_result_48;
        int tmp_and_left_truth_38;
        nuitka_bool tmp_and_left_value_38;
        nuitka_bool tmp_and_right_value_38;
        PyObject *tmp_cmp_expr_left_77;
        PyObject *tmp_cmp_expr_right_77;
        PyObject *tmp_cmp_expr_left_78;
        PyObject *tmp_cmp_expr_right_78;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_77 = var_resname;
        tmp_cmp_expr_right_77 = mod_consts[84];
        tmp_and_left_value_38 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_77, tmp_cmp_expr_right_77);
        if (tmp_and_left_value_38 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_38 = tmp_and_left_value_38 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_38 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_38);

            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_38 == 1) {
            goto and_right_38;
        } else {
            goto and_left_38;
        }
        and_right_38:;
        assert(tmp_and_left_value_38 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_78 = var_at_name;
        tmp_cmp_expr_right_78 = PySet_New(mod_consts[87]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_78, tmp_cmp_expr_left_78);
        Py_DECREF(tmp_cmp_expr_right_78);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_48 = tmp_and_right_value_38;
        goto and_end_38;
        and_left_38:;
        tmp_condition_result_48 = tmp_and_left_value_38;
        and_end_38:;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
        assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_48:;
    {
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_subscript_value_92;
        PyObject *tmp_subscript_value_93;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_92 = mod_consts[24];
        tmp_expression_value_107 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_108, tmp_subscript_value_92, 9);
        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_107);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_93 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_93);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_48;
    branch_no_48:;
    {
        nuitka_bool tmp_condition_result_49;
        int tmp_and_left_truth_39;
        nuitka_bool tmp_and_left_value_39;
        nuitka_bool tmp_and_right_value_39;
        PyObject *tmp_cmp_expr_left_79;
        PyObject *tmp_cmp_expr_right_79;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_10;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_79 = var_resname;
        tmp_cmp_expr_right_79 = mod_consts[38];
        tmp_and_left_value_39 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_79, tmp_cmp_expr_right_79);
        if (tmp_and_left_value_39 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_39 = tmp_and_left_value_39 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_39 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_39);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_39 == 1) {
            goto and_right_39;
        } else {
            goto and_left_39;
        }
        and_right_39:;
        assert(tmp_and_left_value_39 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_109 = var_at_name;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[45]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 267;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[88]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_10);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_10);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_39 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_10);
        tmp_condition_result_49 = tmp_and_right_value_39;
        goto and_end_39;
        and_left_39:;
        tmp_condition_result_49 = tmp_and_left_value_39;
        and_end_39:;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
        assert(tmp_condition_result_49 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_49:;
    {
        PyObject *tmp_expression_value_110;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_94;
        PyObject *tmp_subscript_value_95;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_94 = mod_consts[24];
        tmp_expression_value_110 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_111, tmp_subscript_value_94, 9);
        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_110);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_95 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_110, tmp_subscript_value_95);
        Py_DECREF(tmp_expression_value_110);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_49;
    branch_no_49:;
    {
        nuitka_bool tmp_condition_result_50;
        int tmp_and_left_truth_40;
        nuitka_bool tmp_and_left_value_40;
        nuitka_bool tmp_and_right_value_40;
        PyObject *tmp_cmp_expr_left_80;
        PyObject *tmp_cmp_expr_right_80;
        PyObject *tmp_cmp_expr_left_81;
        PyObject *tmp_cmp_expr_right_81;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_80 = var_resname;
        tmp_cmp_expr_right_80 = mod_consts[89];
        tmp_and_left_value_40 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_80, tmp_cmp_expr_right_80);
        if (tmp_and_left_value_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_40 = tmp_and_left_value_40 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_40 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_40);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_40 == 1) {
            goto and_right_40;
        } else {
            goto and_left_40;
        }
        and_right_40:;
        assert(tmp_and_left_value_40 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_81 = var_at_name;
        tmp_cmp_expr_right_81 = PySet_New(mod_consts[90]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_81, tmp_cmp_expr_left_81);
        Py_DECREF(tmp_cmp_expr_right_81);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_40 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_50 = tmp_and_right_value_40;
        goto and_end_40;
        and_left_40:;
        tmp_condition_result_50 = tmp_and_left_value_40;
        and_end_40:;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
        assert(tmp_condition_result_50 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_50:;
    {
        PyObject *tmp_expression_value_112;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_96;
        PyObject *tmp_subscript_value_97;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_96 = mod_consts[35];
        tmp_expression_value_112 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_113, tmp_subscript_value_96, 8);
        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_112);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_97 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_112, tmp_subscript_value_97);
        Py_DECREF(tmp_expression_value_112);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_50;
    branch_no_50:;
    {
        nuitka_bool tmp_condition_result_51;
        int tmp_and_left_truth_41;
        nuitka_bool tmp_and_left_value_41;
        nuitka_bool tmp_and_right_value_41;
        PyObject *tmp_cmp_expr_left_82;
        PyObject *tmp_cmp_expr_right_82;
        PyObject *tmp_cmp_expr_left_83;
        PyObject *tmp_cmp_expr_right_83;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_82 = var_resname;
        tmp_cmp_expr_right_82 = mod_consts[89];
        tmp_and_left_value_41 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_82, tmp_cmp_expr_right_82);
        if (tmp_and_left_value_41 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_41 = tmp_and_left_value_41 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_41 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_41);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_41 == 1) {
            goto and_right_41;
        } else {
            goto and_left_41;
        }
        and_right_41:;
        assert(tmp_and_left_value_41 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_83 = var_at_name;
        tmp_cmp_expr_right_83 = PySet_New(mod_consts[91]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_83, tmp_cmp_expr_left_83);
        Py_DECREF(tmp_cmp_expr_right_83);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_41 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_51 = tmp_and_right_value_41;
        goto and_end_41;
        and_left_41:;
        tmp_condition_result_51 = tmp_and_left_value_41;
        and_end_41:;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
        assert(tmp_condition_result_51 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_51:;
    {
        PyObject *tmp_expression_value_114;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_98;
        PyObject *tmp_subscript_value_99;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_98 = mod_consts[92];
        tmp_expression_value_114 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_115, tmp_subscript_value_98, 6);
        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_114);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_99 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_114, tmp_subscript_value_99);
        Py_DECREF(tmp_expression_value_114);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_51;
    branch_no_51:;
    {
        nuitka_bool tmp_condition_result_52;
        int tmp_and_left_truth_42;
        nuitka_bool tmp_and_left_value_42;
        nuitka_bool tmp_and_right_value_42;
        PyObject *tmp_cmp_expr_left_84;
        PyObject *tmp_cmp_expr_right_84;
        PyObject *tmp_cmp_expr_left_85;
        PyObject *tmp_cmp_expr_right_85;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_84 = var_resname;
        tmp_cmp_expr_right_84 = mod_consts[93];
        tmp_and_left_value_42 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_84, tmp_cmp_expr_right_84);
        if (tmp_and_left_value_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_42 = tmp_and_left_value_42 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_42 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_42);

            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_42 == 1) {
            goto and_right_42;
        } else {
            goto and_left_42;
        }
        and_right_42:;
        assert(tmp_and_left_value_42 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_85 = var_at_name;
        tmp_cmp_expr_right_85 = mod_consts[94];
        tmp_and_right_value_42 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_85, tmp_cmp_expr_right_85);
        if (tmp_and_right_value_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = tmp_and_right_value_42;
        goto and_end_42;
        and_left_42:;
        tmp_condition_result_52 = tmp_and_left_value_42;
        and_end_42:;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
        assert(tmp_condition_result_52 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_52:;
    {
        PyObject *tmp_expression_value_116;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_subscript_value_100;
        PyObject *tmp_subscript_value_101;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_100 = mod_consts[31];
        tmp_expression_value_116 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_117, tmp_subscript_value_100, 13);
        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_116);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_101 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_116, tmp_subscript_value_101);
        Py_DECREF(tmp_expression_value_116);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_52;
    branch_no_52:;
    {
        nuitka_bool tmp_condition_result_53;
        int tmp_and_left_truth_43;
        nuitka_bool tmp_and_left_value_43;
        nuitka_bool tmp_and_right_value_43;
        PyObject *tmp_cmp_expr_left_86;
        PyObject *tmp_cmp_expr_right_86;
        PyObject *tmp_cmp_expr_left_87;
        PyObject *tmp_cmp_expr_right_87;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_86 = var_resname;
        tmp_cmp_expr_right_86 = mod_consts[93];
        tmp_and_left_value_43 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_86, tmp_cmp_expr_right_86);
        if (tmp_and_left_value_43 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_43 = tmp_and_left_value_43 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_43 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_43);

            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_43 == 1) {
            goto and_right_43;
        } else {
            goto and_left_43;
        }
        and_right_43:;
        assert(tmp_and_left_value_43 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_87 = var_at_name;
        tmp_cmp_expr_right_87 = mod_consts[95];
        tmp_and_right_value_43 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_87, tmp_cmp_expr_right_87);
        if (tmp_and_right_value_43 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_53 = tmp_and_right_value_43;
        goto and_end_43;
        and_left_43:;
        tmp_condition_result_53 = tmp_and_left_value_43;
        and_end_43:;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
        assert(tmp_condition_result_53 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_53:;
    {
        PyObject *tmp_expression_value_118;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_102;
        PyObject *tmp_subscript_value_103;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_102 = mod_consts[24];
        tmp_expression_value_118 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_119, tmp_subscript_value_102, 9);
        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_118);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_103 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_118, tmp_subscript_value_103);
        Py_DECREF(tmp_expression_value_118);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_53;
    branch_no_53:;
    {
        nuitka_bool tmp_condition_result_54;
        int tmp_and_left_truth_44;
        nuitka_bool tmp_and_left_value_44;
        nuitka_bool tmp_and_right_value_44;
        PyObject *tmp_cmp_expr_left_88;
        PyObject *tmp_cmp_expr_right_88;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_11;
        int tmp_truth_name_11;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_88 = var_resname;
        tmp_cmp_expr_right_88 = mod_consts[96];
        tmp_and_left_value_44 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_88, tmp_cmp_expr_right_88);
        if (tmp_and_left_value_44 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_44 = tmp_and_left_value_44 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_44 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_44);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_44 == 1) {
            goto and_right_44;
        } else {
            goto and_left_44;
        }
        and_right_44:;
        assert(tmp_and_left_value_44 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_120 = var_at_name;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[45]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 277;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[97]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_call_result_11);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_11);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_44 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_11);
        tmp_condition_result_54 = tmp_and_right_value_44;
        goto and_end_44;
        and_left_44:;
        tmp_condition_result_54 = tmp_and_left_value_44;
        and_end_44:;
        if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
        assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_54:;
    {
        PyObject *tmp_expression_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_104;
        PyObject *tmp_subscript_value_105;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_104 = mod_consts[73];
        tmp_expression_value_121 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_122, tmp_subscript_value_104, 11);
        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_121);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_105 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_105);
        Py_DECREF(tmp_expression_value_121);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_54;
    branch_no_54:;
    {
        nuitka_bool tmp_condition_result_55;
        int tmp_and_left_truth_45;
        nuitka_bool tmp_and_left_value_45;
        nuitka_bool tmp_and_right_value_45;
        PyObject *tmp_cmp_expr_left_89;
        PyObject *tmp_cmp_expr_right_89;
        PyObject *tmp_cmp_expr_left_90;
        PyObject *tmp_cmp_expr_right_90;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_89 = var_resname;
        tmp_cmp_expr_right_89 = mod_consts[98];
        tmp_and_left_value_45 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_89, tmp_cmp_expr_right_89);
        if (tmp_and_left_value_45 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_45 = tmp_and_left_value_45 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_45 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_45);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_45 == 1) {
            goto and_right_45;
        } else {
            goto and_left_45;
        }
        and_right_45:;
        assert(tmp_and_left_value_45 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_90 = var_at_name;
        tmp_cmp_expr_right_90 = PySet_New(mod_consts[99]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_90, tmp_cmp_expr_left_90);
        Py_DECREF(tmp_cmp_expr_right_90);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_45 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_55 = tmp_and_right_value_45;
        goto and_end_45;
        and_left_45:;
        tmp_condition_result_55 = tmp_and_left_value_45;
        and_end_45:;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
        assert(tmp_condition_result_55 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_55:;
    {
        PyObject *tmp_expression_value_123;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_106;
        PyObject *tmp_subscript_value_107;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_106 = mod_consts[35];
        tmp_expression_value_123 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_124, tmp_subscript_value_106, 8);
        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_123);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_107 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_123, tmp_subscript_value_107);
        Py_DECREF(tmp_expression_value_123);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_55;
    branch_no_55:;
    {
        nuitka_bool tmp_condition_result_56;
        int tmp_and_left_truth_46;
        nuitka_bool tmp_and_left_value_46;
        nuitka_bool tmp_and_right_value_46;
        PyObject *tmp_cmp_expr_left_91;
        PyObject *tmp_cmp_expr_right_91;
        PyObject *tmp_cmp_expr_left_92;
        PyObject *tmp_cmp_expr_right_92;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_91 = var_resname;
        tmp_cmp_expr_right_91 = mod_consts[100];
        tmp_and_left_value_46 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_91, tmp_cmp_expr_right_91);
        if (tmp_and_left_value_46 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_46 = tmp_and_left_value_46 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_46 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_46);

            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_46 == 1) {
            goto and_right_46;
        } else {
            goto and_left_46;
        }
        and_right_46:;
        assert(tmp_and_left_value_46 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_92 = var_at_name;
        tmp_cmp_expr_right_92 = PySet_New(mod_consts[101]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_92, tmp_cmp_expr_left_92);
        Py_DECREF(tmp_cmp_expr_right_92);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_46 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_56 = tmp_and_right_value_46;
        goto and_end_46;
        and_left_46:;
        tmp_condition_result_56 = tmp_and_left_value_46;
        and_end_46:;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
        assert(tmp_condition_result_56 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_56:;
    {
        PyObject *tmp_expression_value_125;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_108;
        PyObject *tmp_subscript_value_109;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_108 = mod_consts[24];
        tmp_expression_value_125 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_126, tmp_subscript_value_108, 9);
        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_125);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_109 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_125, tmp_subscript_value_109);
        Py_DECREF(tmp_expression_value_125);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_56;
    branch_no_56:;
    {
        nuitka_bool tmp_condition_result_57;
        int tmp_and_left_truth_47;
        nuitka_bool tmp_and_left_value_47;
        nuitka_bool tmp_and_right_value_47;
        PyObject *tmp_cmp_expr_left_93;
        PyObject *tmp_cmp_expr_right_93;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_12;
        int tmp_truth_name_12;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_93 = var_resname;
        tmp_cmp_expr_right_93 = mod_consts[100];
        tmp_and_left_value_47 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_93, tmp_cmp_expr_right_93);
        if (tmp_and_left_value_47 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_47 = tmp_and_left_value_47 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_47 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_47);

            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_47 == 1) {
            goto and_right_47;
        } else {
            goto and_left_47;
        }
        and_right_47:;
        assert(tmp_and_left_value_47 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_127 = var_at_name;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[45]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 283;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[102]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_call_result_12);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_12);

            exception_lineno = 283;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_47 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_12);
        tmp_condition_result_57 = tmp_and_right_value_47;
        goto and_end_47;
        and_left_47:;
        tmp_condition_result_57 = tmp_and_left_value_47;
        and_end_47:;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
        assert(tmp_condition_result_57 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_57:;
    {
        PyObject *tmp_expression_value_128;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_subscript_value_110;
        PyObject *tmp_subscript_value_111;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_110 = mod_consts[40];
        tmp_expression_value_128 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_129, tmp_subscript_value_110, 3);
        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_128);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_111 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_128, tmp_subscript_value_111);
        Py_DECREF(tmp_expression_value_128);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_57;
    branch_no_57:;
    {
        nuitka_bool tmp_condition_result_58;
        int tmp_and_left_truth_48;
        nuitka_bool tmp_and_left_value_48;
        nuitka_bool tmp_and_right_value_48;
        PyObject *tmp_cmp_expr_left_94;
        PyObject *tmp_cmp_expr_right_94;
        PyObject *tmp_cmp_expr_left_95;
        PyObject *tmp_cmp_expr_right_95;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_94 = var_resname;
        tmp_cmp_expr_right_94 = mod_consts[103];
        tmp_and_left_value_48 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_94, tmp_cmp_expr_right_94);
        if (tmp_and_left_value_48 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_48 = tmp_and_left_value_48 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_48 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_48);

            exception_lineno = 285;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_48 == 1) {
            goto and_right_48;
        } else {
            goto and_left_48;
        }
        and_right_48:;
        assert(tmp_and_left_value_48 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_95 = var_at_name;
        tmp_cmp_expr_right_95 = mod_consts[104];
        tmp_and_right_value_48 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_95, tmp_cmp_expr_right_95);
        if (tmp_and_right_value_48 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_58 = tmp_and_right_value_48;
        goto and_end_48;
        and_left_48:;
        tmp_condition_result_58 = tmp_and_left_value_48;
        and_end_48:;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
        assert(tmp_condition_result_58 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_58:;
    {
        PyObject *tmp_expression_value_130;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_subscript_value_112;
        PyObject *tmp_subscript_value_113;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_112 = mod_consts[3];
        tmp_expression_value_130 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_131, tmp_subscript_value_112, 2);
        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_130);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_113 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_130, tmp_subscript_value_113);
        Py_DECREF(tmp_expression_value_130);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_58;
    branch_no_58:;
    {
        nuitka_bool tmp_condition_result_59;
        int tmp_and_left_truth_49;
        nuitka_bool tmp_and_left_value_49;
        nuitka_bool tmp_and_right_value_49;
        PyObject *tmp_cmp_expr_left_96;
        PyObject *tmp_cmp_expr_right_96;
        PyObject *tmp_cmp_expr_left_97;
        PyObject *tmp_cmp_expr_right_97;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_96 = var_resname;
        tmp_cmp_expr_right_96 = mod_consts[105];
        tmp_and_left_value_49 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_96, tmp_cmp_expr_right_96);
        if (tmp_and_left_value_49 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_49 = tmp_and_left_value_49 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_49 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_49);

            exception_lineno = 287;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_49 == 1) {
            goto and_right_49;
        } else {
            goto and_left_49;
        }
        and_right_49:;
        assert(tmp_and_left_value_49 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_97 = var_at_name;
        tmp_cmp_expr_right_97 = mod_consts[106];
        tmp_and_right_value_49 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_97, tmp_cmp_expr_right_97);
        if (tmp_and_right_value_49 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_59 = tmp_and_right_value_49;
        goto and_end_49;
        and_left_49:;
        tmp_condition_result_59 = tmp_and_left_value_49;
        and_end_49:;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
        assert(tmp_condition_result_59 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_59:;
    {
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_114;
        PyObject *tmp_subscript_value_115;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_114 = mod_consts[3];
        tmp_expression_value_132 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_133, tmp_subscript_value_114, 2);
        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_132);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_115 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_132, tmp_subscript_value_115);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_59;
    branch_no_59:;
    {
        nuitka_bool tmp_condition_result_60;
        int tmp_and_left_truth_50;
        nuitka_bool tmp_and_left_value_50;
        nuitka_bool tmp_and_right_value_50;
        PyObject *tmp_cmp_expr_left_98;
        PyObject *tmp_cmp_expr_right_98;
        PyObject *tmp_cmp_expr_left_99;
        PyObject *tmp_cmp_expr_right_99;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_98 = var_resname;
        tmp_cmp_expr_right_98 = mod_consts[105];
        tmp_and_left_value_50 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_98, tmp_cmp_expr_right_98);
        if (tmp_and_left_value_50 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_50 = tmp_and_left_value_50 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_50 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_50);

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_50 == 1) {
            goto and_right_50;
        } else {
            goto and_left_50;
        }
        and_right_50:;
        assert(tmp_and_left_value_50 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_99 = var_at_name;
        tmp_cmp_expr_right_99 = mod_consts[86];
        tmp_and_right_value_50 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_99, tmp_cmp_expr_right_99);
        if (tmp_and_right_value_50 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_60 = tmp_and_right_value_50;
        goto and_end_50;
        and_left_50:;
        tmp_condition_result_60 = tmp_and_left_value_50;
        and_end_50:;
        if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
        assert(tmp_condition_result_60 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_60:;
    {
        PyObject *tmp_expression_value_134;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_subscript_value_116;
        PyObject *tmp_subscript_value_117;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_116 = mod_consts[24];
        tmp_expression_value_134 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_135, tmp_subscript_value_116, 9);
        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_134);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_117 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_134, tmp_subscript_value_117);
        Py_DECREF(tmp_expression_value_134);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_60;
    branch_no_60:;
    {
        nuitka_bool tmp_condition_result_61;
        int tmp_and_left_truth_51;
        nuitka_bool tmp_and_left_value_51;
        nuitka_bool tmp_and_right_value_51;
        PyObject *tmp_cmp_expr_left_100;
        PyObject *tmp_cmp_expr_right_100;
        PyObject *tmp_cmp_expr_left_101;
        PyObject *tmp_cmp_expr_right_101;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_100 = var_resname;
        tmp_cmp_expr_right_100 = mod_consts[107];
        tmp_and_left_value_51 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_100, tmp_cmp_expr_right_100);
        if (tmp_and_left_value_51 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_51 = tmp_and_left_value_51 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_51 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_51);

            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_51 == 1) {
            goto and_right_51;
        } else {
            goto and_left_51;
        }
        and_right_51:;
        assert(tmp_and_left_value_51 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_101 = var_at_name;
        tmp_cmp_expr_right_101 = mod_consts[108];
        tmp_and_right_value_51 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_101, tmp_cmp_expr_right_101);
        if (tmp_and_right_value_51 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_61 = tmp_and_right_value_51;
        goto and_end_51;
        and_left_51:;
        tmp_condition_result_61 = tmp_and_left_value_51;
        and_end_51:;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
        assert(tmp_condition_result_61 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_61:;
    {
        PyObject *tmp_expression_value_136;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_subscript_value_118;
        PyObject *tmp_subscript_value_119;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_118 = mod_consts[73];
        tmp_expression_value_136 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_137, tmp_subscript_value_118, 11);
        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_136);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_119 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_136, tmp_subscript_value_119);
        Py_DECREF(tmp_expression_value_136);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_61;
    branch_no_61:;
    {
        nuitka_bool tmp_condition_result_62;
        int tmp_and_left_truth_52;
        nuitka_bool tmp_and_left_value_52;
        nuitka_bool tmp_and_right_value_52;
        PyObject *tmp_cmp_expr_left_102;
        PyObject *tmp_cmp_expr_right_102;
        PyObject *tmp_cmp_expr_left_103;
        PyObject *tmp_cmp_expr_right_103;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_102 = var_resname;
        tmp_cmp_expr_right_102 = mod_consts[107];
        tmp_and_left_value_52 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_102, tmp_cmp_expr_right_102);
        if (tmp_and_left_value_52 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_52 = tmp_and_left_value_52 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_52 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_52);

            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_52 == 1) {
            goto and_right_52;
        } else {
            goto and_left_52;
        }
        and_right_52:;
        assert(tmp_and_left_value_52 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_103 = var_at_name;
        tmp_cmp_expr_right_103 = PySet_New(mod_consts[109]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_103, tmp_cmp_expr_left_103);
        Py_DECREF(tmp_cmp_expr_right_103);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_52 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_62 = tmp_and_right_value_52;
        goto and_end_52;
        and_left_52:;
        tmp_condition_result_62 = tmp_and_left_value_52;
        and_end_52:;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
        assert(tmp_condition_result_62 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_62:;
    {
        PyObject *tmp_expression_value_138;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_120;
        PyObject *tmp_subscript_value_121;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_120 = mod_consts[29];
        tmp_expression_value_138 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_139, tmp_subscript_value_120, 10);
        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_138);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_121 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_138, tmp_subscript_value_121);
        Py_DECREF(tmp_expression_value_138);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_62;
    branch_no_62:;
    {
        nuitka_bool tmp_condition_result_63;
        int tmp_and_left_truth_53;
        nuitka_bool tmp_and_left_value_53;
        nuitka_bool tmp_and_right_value_53;
        PyObject *tmp_cmp_expr_left_104;
        PyObject *tmp_cmp_expr_right_104;
        PyObject *tmp_cmp_expr_left_105;
        PyObject *tmp_cmp_expr_right_105;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_104 = var_resname;
        tmp_cmp_expr_right_104 = mod_consts[107];
        tmp_and_left_value_53 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_104, tmp_cmp_expr_right_104);
        if (tmp_and_left_value_53 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_53 = tmp_and_left_value_53 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_53 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_53);

            exception_lineno = 295;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_53 == 1) {
            goto and_right_53;
        } else {
            goto and_left_53;
        }
        and_right_53:;
        assert(tmp_and_left_value_53 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_105 = var_at_name;
        tmp_cmp_expr_right_105 = mod_consts[110];
        tmp_and_right_value_53 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_105, tmp_cmp_expr_right_105);
        if (tmp_and_right_value_53 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_63 = tmp_and_right_value_53;
        goto and_end_53;
        and_left_53:;
        tmp_condition_result_63 = tmp_and_left_value_53;
        and_end_53:;
        if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
        assert(tmp_condition_result_63 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_63:;
    {
        PyObject *tmp_expression_value_140;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_subscript_value_122;
        PyObject *tmp_subscript_value_123;
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_122 = mod_consts[26];
        tmp_expression_value_140 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_141, tmp_subscript_value_122, 4);
        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_140);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_123 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_140, tmp_subscript_value_123);
        Py_DECREF(tmp_expression_value_140);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_63;
    branch_no_63:;
    {
        nuitka_bool tmp_condition_result_64;
        int tmp_and_left_truth_54;
        nuitka_bool tmp_and_left_value_54;
        nuitka_bool tmp_and_right_value_54;
        PyObject *tmp_cmp_expr_left_106;
        PyObject *tmp_cmp_expr_right_106;
        PyObject *tmp_cmp_expr_left_107;
        PyObject *tmp_cmp_expr_right_107;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_106 = var_resname;
        tmp_cmp_expr_right_106 = mod_consts[107];
        tmp_and_left_value_54 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_106, tmp_cmp_expr_right_106);
        if (tmp_and_left_value_54 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_54 = tmp_and_left_value_54 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_54 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_54);

            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_54 == 1) {
            goto and_right_54;
        } else {
            goto and_left_54;
        }
        and_right_54:;
        assert(tmp_and_left_value_54 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_107 = var_at_name;
        tmp_cmp_expr_right_107 = PySet_New(mod_consts[111]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_107, tmp_cmp_expr_left_107);
        Py_DECREF(tmp_cmp_expr_right_107);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_54 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_64 = tmp_and_right_value_54;
        goto and_end_54;
        and_left_54:;
        tmp_condition_result_64 = tmp_and_left_value_54;
        and_end_54:;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
        assert(tmp_condition_result_64 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_64:;
    {
        PyObject *tmp_expression_value_142;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_subscript_value_124;
        PyObject *tmp_subscript_value_125;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_124 = mod_consts[73];
        tmp_expression_value_142 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_143, tmp_subscript_value_124, 11);
        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_142);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_125 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_142, tmp_subscript_value_125);
        Py_DECREF(tmp_expression_value_142);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_64;
    branch_no_64:;
    {
        nuitka_bool tmp_condition_result_65;
        int tmp_and_left_truth_55;
        nuitka_bool tmp_and_left_value_55;
        nuitka_bool tmp_and_right_value_55;
        PyObject *tmp_cmp_expr_left_108;
        PyObject *tmp_cmp_expr_right_108;
        PyObject *tmp_cmp_expr_left_109;
        PyObject *tmp_cmp_expr_right_109;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_108 = var_resname;
        tmp_cmp_expr_right_108 = mod_consts[112];
        tmp_and_left_value_55 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_108, tmp_cmp_expr_right_108);
        if (tmp_and_left_value_55 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_55 = tmp_and_left_value_55 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_55 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_55);

            exception_lineno = 299;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_55 == 1) {
            goto and_right_55;
        } else {
            goto and_left_55;
        }
        and_right_55:;
        assert(tmp_and_left_value_55 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 299;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_109 = var_at_name;
        tmp_cmp_expr_right_109 = PySet_New(mod_consts[113]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_109, tmp_cmp_expr_left_109);
        Py_DECREF(tmp_cmp_expr_right_109);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_55 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_65 = tmp_and_right_value_55;
        goto and_end_55;
        and_left_55:;
        tmp_condition_result_65 = tmp_and_left_value_55;
        and_end_55:;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
        assert(tmp_condition_result_65 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_65:;
    {
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_126;
        PyObject *tmp_subscript_value_127;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_126 = mod_consts[73];
        tmp_expression_value_144 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_145, tmp_subscript_value_126, 11);
        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_144);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_127 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_144, tmp_subscript_value_127);
        Py_DECREF(tmp_expression_value_144);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_65;
    branch_no_65:;
    {
        nuitka_bool tmp_condition_result_66;
        int tmp_and_left_truth_56;
        nuitka_bool tmp_and_left_value_56;
        nuitka_bool tmp_and_right_value_56;
        PyObject *tmp_cmp_expr_left_110;
        PyObject *tmp_cmp_expr_right_110;
        PyObject *tmp_cmp_expr_left_111;
        PyObject *tmp_cmp_expr_right_111;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_110 = var_resname;
        tmp_cmp_expr_right_110 = mod_consts[112];
        tmp_and_left_value_56 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_110, tmp_cmp_expr_right_110);
        if (tmp_and_left_value_56 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_56 = tmp_and_left_value_56 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_56 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_56);

            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_56 == 1) {
            goto and_right_56;
        } else {
            goto and_left_56;
        }
        and_right_56:;
        assert(tmp_and_left_value_56 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_111 = var_at_name;
        tmp_cmp_expr_right_111 = mod_consts[44];
        tmp_and_right_value_56 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_111, tmp_cmp_expr_right_111);
        if (tmp_and_right_value_56 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_66 = tmp_and_right_value_56;
        goto and_end_56;
        and_left_56:;
        tmp_condition_result_66 = tmp_and_left_value_56;
        and_end_56:;
        if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
        assert(tmp_condition_result_66 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_66:;
    {
        PyObject *tmp_expression_value_146;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_subscript_value_128;
        PyObject *tmp_subscript_value_129;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_128 = mod_consts[29];
        tmp_expression_value_146 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_147, tmp_subscript_value_128, 10);
        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_146);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_129 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_146, tmp_subscript_value_129);
        Py_DECREF(tmp_expression_value_146);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_66;
    branch_no_66:;
    {
        nuitka_bool tmp_condition_result_67;
        int tmp_and_left_truth_57;
        nuitka_bool tmp_and_left_value_57;
        nuitka_bool tmp_and_right_value_57;
        PyObject *tmp_cmp_expr_left_112;
        PyObject *tmp_cmp_expr_right_112;
        PyObject *tmp_cmp_expr_left_113;
        PyObject *tmp_cmp_expr_right_113;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_112 = var_resname;
        tmp_cmp_expr_right_112 = mod_consts[112];
        tmp_and_left_value_57 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_112, tmp_cmp_expr_right_112);
        if (tmp_and_left_value_57 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_57 = tmp_and_left_value_57 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_57 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_57);

            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_57 == 1) {
            goto and_right_57;
        } else {
            goto and_left_57;
        }
        and_right_57:;
        assert(tmp_and_left_value_57 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_113 = var_at_name;
        tmp_cmp_expr_right_113 = mod_consts[114];
        tmp_and_right_value_57 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_113, tmp_cmp_expr_right_113);
        if (tmp_and_right_value_57 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_67 = tmp_and_right_value_57;
        goto and_end_57;
        and_left_57:;
        tmp_condition_result_67 = tmp_and_left_value_57;
        and_end_57:;
        if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
        assert(tmp_condition_result_67 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_67:;
    {
        PyObject *tmp_expression_value_148;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_subscript_value_130;
        PyObject *tmp_subscript_value_131;
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_130 = mod_consts[3];
        tmp_expression_value_148 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_149, tmp_subscript_value_130, 2);
        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_148);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_131 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_148, tmp_subscript_value_131);
        Py_DECREF(tmp_expression_value_148);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_67;
    branch_no_67:;
    {
        nuitka_bool tmp_condition_result_68;
        int tmp_and_left_truth_58;
        nuitka_bool tmp_and_left_value_58;
        nuitka_bool tmp_and_right_value_58;
        PyObject *tmp_cmp_expr_left_114;
        PyObject *tmp_cmp_expr_right_114;
        PyObject *tmp_cmp_expr_left_115;
        PyObject *tmp_cmp_expr_right_115;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_114 = var_resname;
        tmp_cmp_expr_right_114 = mod_consts[115];
        tmp_and_left_value_58 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_114, tmp_cmp_expr_right_114);
        if (tmp_and_left_value_58 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_58 = tmp_and_left_value_58 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_58 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_58);

            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_58 == 1) {
            goto and_right_58;
        } else {
            goto and_left_58;
        }
        and_right_58:;
        assert(tmp_and_left_value_58 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_115 = var_at_name;
        tmp_cmp_expr_right_115 = PySet_New(mod_consts[116]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_115, tmp_cmp_expr_left_115);
        Py_DECREF(tmp_cmp_expr_right_115);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_58 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_68 = tmp_and_right_value_58;
        goto and_end_58;
        and_left_58:;
        tmp_condition_result_68 = tmp_and_left_value_58;
        and_end_58:;
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
        assert(tmp_condition_result_68 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_68:;
    {
        PyObject *tmp_expression_value_150;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_132;
        PyObject *tmp_subscript_value_133;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_132 = mod_consts[24];
        tmp_expression_value_150 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_151, tmp_subscript_value_132, 9);
        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_150);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_133 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_150, tmp_subscript_value_133);
        Py_DECREF(tmp_expression_value_150);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_68;
    branch_no_68:;
    {
        bool tmp_condition_result_69;
        PyObject *tmp_cmp_expr_left_116;
        PyObject *tmp_cmp_expr_right_116;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_116 = var_at_name;
        tmp_cmp_expr_right_116 = PySet_New(mod_consts[117]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_116, tmp_cmp_expr_left_116);
        Py_DECREF(tmp_cmp_expr_right_116);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_69 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_expression_value_152;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_subscript_value_134;
        PyObject *tmp_subscript_value_135;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_134 = mod_consts[35];
        tmp_expression_value_152 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_153, tmp_subscript_value_134, 8);
        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_152);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_135 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_152, tmp_subscript_value_135);
        Py_DECREF(tmp_expression_value_152);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_69;
    branch_no_69:;
    {
        nuitka_bool tmp_condition_result_70;
        int tmp_and_left_truth_59;
        nuitka_bool tmp_and_left_value_59;
        nuitka_bool tmp_and_right_value_59;
        PyObject *tmp_cmp_expr_left_117;
        PyObject *tmp_cmp_expr_right_117;
        int tmp_and_left_truth_60;
        nuitka_bool tmp_and_left_value_60;
        nuitka_bool tmp_and_right_value_60;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_call_result_13;
        int tmp_truth_name_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_14;
        int tmp_truth_name_14;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_117 = var_resname;
        tmp_cmp_expr_right_117 = PySet_New(mod_consts[118]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_117, tmp_cmp_expr_left_117);
        Py_DECREF(tmp_cmp_expr_right_117);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_59 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_59 = tmp_and_left_value_59 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_59 == 1) {
            goto and_right_59;
        } else {
            goto and_left_59;
        }
        and_right_59:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_154 = var_at_name;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[45]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 312;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[119]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_call_result_13);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_13);

            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_60 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_13);
        tmp_and_left_truth_60 = tmp_and_left_value_60 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_60 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_60 == 1) {
            goto and_right_60;
        } else {
            goto and_left_60;
        }
        and_right_60:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_155 = var_at_name;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[120]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 313;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[121]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_call_result_14);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_14);

            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_60 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_14);
        tmp_and_right_value_59 = tmp_and_right_value_60;
        goto and_end_60;
        and_left_60:;
        tmp_and_right_value_59 = tmp_and_left_value_60;
        and_end_60:;
        tmp_condition_result_70 = tmp_and_right_value_59;
        goto and_end_59;
        and_left_59:;
        tmp_condition_result_70 = tmp_and_left_value_59;
        and_end_59:;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_136;
        PyObject *tmp_subscript_value_137;
        tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_157 == NULL)) {
            tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_136 = mod_consts[122];
        tmp_expression_value_156 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_157, tmp_subscript_value_136, 21);
        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_156);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_137 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_156, tmp_subscript_value_137);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_70;
    branch_no_70:;
    {
        nuitka_bool tmp_condition_result_71;
        int tmp_and_left_truth_61;
        nuitka_bool tmp_and_left_value_61;
        nuitka_bool tmp_and_right_value_61;
        PyObject *tmp_cmp_expr_left_118;
        PyObject *tmp_cmp_expr_right_118;
        int tmp_and_left_truth_62;
        nuitka_bool tmp_and_left_value_62;
        nuitka_bool tmp_and_right_value_62;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_call_result_15;
        int tmp_truth_name_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_call_result_16;
        int tmp_truth_name_16;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_118 = var_resname;
        tmp_cmp_expr_right_118 = PySet_New(mod_consts[118]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_118, tmp_cmp_expr_left_118);
        Py_DECREF(tmp_cmp_expr_right_118);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_61 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_61 = tmp_and_left_value_61 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_61 == 1) {
            goto and_right_61;
        } else {
            goto and_left_61;
        }
        and_right_61:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_158 = var_at_name;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[45]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 318;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[123]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_call_result_15);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_15);

            exception_lineno = 318;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_62 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_15);
        tmp_and_left_truth_62 = tmp_and_left_value_62 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_62 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_62 == 1) {
            goto and_right_62;
        } else {
            goto and_left_62;
        }
        and_right_62:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_159 = var_at_name;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[120]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 319;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[121]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_call_result_16);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_16);

            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_62 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_16);
        tmp_and_right_value_61 = tmp_and_right_value_62;
        goto and_end_62;
        and_left_62:;
        tmp_and_right_value_61 = tmp_and_left_value_62;
        and_end_62:;
        tmp_condition_result_71 = tmp_and_right_value_61;
        goto and_end_61;
        and_left_61:;
        tmp_condition_result_71 = tmp_and_left_value_61;
        and_end_61:;
        if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_expression_value_160;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_subscript_value_138;
        PyObject *tmp_subscript_value_139;
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_138 = mod_consts[31];
        tmp_expression_value_160 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_161, tmp_subscript_value_138, 13);
        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_160);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_139 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_160, tmp_subscript_value_139);
        Py_DECREF(tmp_expression_value_160);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_71;
    branch_no_71:;
    {
        nuitka_bool tmp_condition_result_72;
        int tmp_and_left_truth_63;
        nuitka_bool tmp_and_left_value_63;
        nuitka_bool tmp_and_right_value_63;
        PyObject *tmp_cmp_expr_left_119;
        PyObject *tmp_cmp_expr_right_119;
        PyObject *tmp_cmp_expr_left_120;
        PyObject *tmp_cmp_expr_right_120;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_119 = var_resname;
        tmp_cmp_expr_right_119 = mod_consts[124];
        tmp_and_left_value_63 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_119, tmp_cmp_expr_right_119);
        if (tmp_and_left_value_63 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_63 = tmp_and_left_value_63 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_63 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_63);

            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_63 == 1) {
            goto and_right_63;
        } else {
            goto and_left_63;
        }
        and_right_63:;
        assert(tmp_and_left_value_63 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_120 = var_at_name;
        tmp_cmp_expr_right_120 = mod_consts[125];
        tmp_and_right_value_63 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_120, tmp_cmp_expr_right_120);
        if (tmp_and_right_value_63 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_72 = tmp_and_right_value_63;
        goto and_end_63;
        and_left_63:;
        tmp_condition_result_72 = tmp_and_left_value_63;
        and_end_63:;
        if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
            goto branch_yes_72;
        } else {
            goto branch_no_72;
        }
        assert(tmp_condition_result_72 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_72:;
    {
        PyObject *tmp_expression_value_162;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_subscript_value_140;
        PyObject *tmp_subscript_value_141;
        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_163 == NULL)) {
            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_140 = mod_consts[1];
        tmp_expression_value_162 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_163, tmp_subscript_value_140, 1);
        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_162);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_141 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_162, tmp_subscript_value_141);
        Py_DECREF(tmp_expression_value_162);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_72;
    branch_no_72:;
    {
        nuitka_bool tmp_condition_result_73;
        int tmp_and_left_truth_64;
        nuitka_bool tmp_and_left_value_64;
        nuitka_bool tmp_and_right_value_64;
        PyObject *tmp_cmp_expr_left_121;
        PyObject *tmp_cmp_expr_right_121;
        PyObject *tmp_cmp_expr_left_122;
        PyObject *tmp_cmp_expr_right_122;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_121 = var_resname;
        tmp_cmp_expr_right_121 = mod_consts[126];
        tmp_and_left_value_64 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_121, tmp_cmp_expr_right_121);
        if (tmp_and_left_value_64 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_64 = tmp_and_left_value_64 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_64 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_64);

            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_64 == 1) {
            goto and_right_64;
        } else {
            goto and_left_64;
        }
        and_right_64:;
        assert(tmp_and_left_value_64 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_122 = var_at_name;
        tmp_cmp_expr_right_122 = PySet_New(mod_consts[127]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_122, tmp_cmp_expr_left_122);
        Py_DECREF(tmp_cmp_expr_right_122);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_64 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_73 = tmp_and_right_value_64;
        goto and_end_64;
        and_left_64:;
        tmp_condition_result_73 = tmp_and_left_value_64;
        and_end_64:;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
        assert(tmp_condition_result_73 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_73:;
    {
        PyObject *tmp_expression_value_164;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_subscript_value_142;
        PyObject *tmp_subscript_value_143;
        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_165 == NULL)) {
            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_142 = mod_consts[122];
        tmp_expression_value_164 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_165, tmp_subscript_value_142, 21);
        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_164);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_143 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_164, tmp_subscript_value_143);
        Py_DECREF(tmp_expression_value_164);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_73;
    branch_no_73:;
    {
        nuitka_bool tmp_condition_result_74;
        int tmp_and_left_truth_65;
        nuitka_bool tmp_and_left_value_65;
        nuitka_bool tmp_and_right_value_65;
        PyObject *tmp_cmp_expr_left_123;
        PyObject *tmp_cmp_expr_right_123;
        PyObject *tmp_cmp_expr_left_124;
        PyObject *tmp_cmp_expr_right_124;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_123 = var_resname;
        tmp_cmp_expr_right_123 = mod_consts[128];
        tmp_and_left_value_65 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_123, tmp_cmp_expr_right_123);
        if (tmp_and_left_value_65 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_65 = tmp_and_left_value_65 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_65 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_65);

            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_65 == 1) {
            goto and_right_65;
        } else {
            goto and_left_65;
        }
        and_right_65:;
        assert(tmp_and_left_value_65 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_124 = var_at_name;
        tmp_cmp_expr_right_124 = PySet_New(mod_consts[129]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_124, tmp_cmp_expr_left_124);
        Py_DECREF(tmp_cmp_expr_right_124);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_65 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_74 = tmp_and_right_value_65;
        goto and_end_65;
        and_left_65:;
        tmp_condition_result_74 = tmp_and_left_value_65;
        and_end_65:;
        if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
        assert(tmp_condition_result_74 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_74:;
    {
        PyObject *tmp_expression_value_166;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_subscript_value_144;
        PyObject *tmp_subscript_value_145;
        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_167 == NULL)) {
            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_144 = mod_consts[1];
        tmp_expression_value_166 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_167, tmp_subscript_value_144, 1);
        if (tmp_expression_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_166);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_145 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_166, tmp_subscript_value_145);
        Py_DECREF(tmp_expression_value_166);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_74;
    branch_no_74:;
    {
        nuitka_bool tmp_condition_result_75;
        int tmp_and_left_truth_66;
        nuitka_bool tmp_and_left_value_66;
        nuitka_bool tmp_and_right_value_66;
        PyObject *tmp_cmp_expr_left_125;
        PyObject *tmp_cmp_expr_right_125;
        PyObject *tmp_cmp_expr_left_126;
        PyObject *tmp_cmp_expr_right_126;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_125 = var_resname;
        tmp_cmp_expr_right_125 = mod_consts[128];
        tmp_and_left_value_66 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_125, tmp_cmp_expr_right_125);
        if (tmp_and_left_value_66 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_66 = tmp_and_left_value_66 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_66 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_66);

            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_66 == 1) {
            goto and_right_66;
        } else {
            goto and_left_66;
        }
        and_right_66:;
        assert(tmp_and_left_value_66 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_126 = var_at_name;
        tmp_cmp_expr_right_126 = mod_consts[130];
        tmp_and_right_value_66 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_126, tmp_cmp_expr_right_126);
        if (tmp_and_right_value_66 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_75 = tmp_and_right_value_66;
        goto and_end_66;
        and_left_66:;
        tmp_condition_result_75 = tmp_and_left_value_66;
        and_end_66:;
        if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
        assert(tmp_condition_result_75 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_75:;
    {
        PyObject *tmp_expression_value_168;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_subscript_value_146;
        PyObject *tmp_subscript_value_147;
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_146 = mod_consts[122];
        tmp_expression_value_168 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_169, tmp_subscript_value_146, 21);
        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_168);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_147 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_168, tmp_subscript_value_147);
        Py_DECREF(tmp_expression_value_168);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_75;
    branch_no_75:;
    {
        nuitka_bool tmp_condition_result_76;
        int tmp_and_left_truth_67;
        nuitka_bool tmp_and_left_value_67;
        nuitka_bool tmp_and_right_value_67;
        PyObject *tmp_cmp_expr_left_127;
        PyObject *tmp_cmp_expr_right_127;
        PyObject *tmp_cmp_expr_left_128;
        PyObject *tmp_cmp_expr_right_128;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_127 = var_resname;
        tmp_cmp_expr_right_127 = mod_consts[128];
        tmp_and_left_value_67 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_127, tmp_cmp_expr_right_127);
        if (tmp_and_left_value_67 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_67 = tmp_and_left_value_67 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_67 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_67);

            exception_lineno = 330;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_67 == 1) {
            goto and_right_67;
        } else {
            goto and_left_67;
        }
        and_right_67:;
        assert(tmp_and_left_value_67 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_128 = var_at_name;
        tmp_cmp_expr_right_128 = PySet_New(mod_consts[131]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_128, tmp_cmp_expr_left_128);
        Py_DECREF(tmp_cmp_expr_right_128);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_67 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_76 = tmp_and_right_value_67;
        goto and_end_67;
        and_left_67:;
        tmp_condition_result_76 = tmp_and_left_value_67;
        and_end_67:;
        if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
        assert(tmp_condition_result_76 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_76:;
    {
        PyObject *tmp_expression_value_170;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_148;
        PyObject *tmp_subscript_value_149;
        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_171 == NULL)) {
            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_148 = mod_consts[73];
        tmp_expression_value_170 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_171, tmp_subscript_value_148, 11);
        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_170);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_149 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_170, tmp_subscript_value_149);
        Py_DECREF(tmp_expression_value_170);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_76;
    branch_no_76:;
    {
        nuitka_bool tmp_condition_result_77;
        int tmp_and_left_truth_68;
        nuitka_bool tmp_and_left_value_68;
        nuitka_bool tmp_and_right_value_68;
        PyObject *tmp_cmp_expr_left_129;
        PyObject *tmp_cmp_expr_right_129;
        PyObject *tmp_cmp_expr_left_130;
        PyObject *tmp_cmp_expr_right_130;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_129 = var_resname;
        tmp_cmp_expr_right_129 = mod_consts[128];
        tmp_and_left_value_68 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_129, tmp_cmp_expr_right_129);
        if (tmp_and_left_value_68 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_68 = tmp_and_left_value_68 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_68 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_68);

            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_68 == 1) {
            goto and_right_68;
        } else {
            goto and_left_68;
        }
        and_right_68:;
        assert(tmp_and_left_value_68 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_130 = var_at_name;
        tmp_cmp_expr_right_130 = PySet_New(mod_consts[132]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_130, tmp_cmp_expr_left_130);
        Py_DECREF(tmp_cmp_expr_right_130);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_68 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_77 = tmp_and_right_value_68;
        goto and_end_68;
        and_left_68:;
        tmp_condition_result_77 = tmp_and_left_value_68;
        and_end_68:;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
        assert(tmp_condition_result_77 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_77:;
    {
        PyObject *tmp_expression_value_172;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_150;
        PyObject *tmp_subscript_value_151;
        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_173 == NULL)) {
            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_150 = mod_consts[76];
        tmp_expression_value_172 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_173, tmp_subscript_value_150, 14);
        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_172);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_151 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_172, tmp_subscript_value_151);
        Py_DECREF(tmp_expression_value_172);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_77;
    branch_no_77:;
    {
        nuitka_bool tmp_condition_result_78;
        int tmp_and_left_truth_69;
        nuitka_bool tmp_and_left_value_69;
        nuitka_bool tmp_and_right_value_69;
        PyObject *tmp_cmp_expr_left_131;
        PyObject *tmp_cmp_expr_right_131;
        PyObject *tmp_cmp_expr_left_132;
        PyObject *tmp_cmp_expr_right_132;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_131 = var_resname;
        tmp_cmp_expr_right_131 = mod_consts[128];
        tmp_and_left_value_69 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_131, tmp_cmp_expr_right_131);
        if (tmp_and_left_value_69 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_69 = tmp_and_left_value_69 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_69 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_69);

            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_69 == 1) {
            goto and_right_69;
        } else {
            goto and_left_69;
        }
        and_right_69:;
        assert(tmp_and_left_value_69 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_132 = var_at_name;
        tmp_cmp_expr_right_132 = PySet_New(mod_consts[133]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_132, tmp_cmp_expr_left_132);
        Py_DECREF(tmp_cmp_expr_right_132);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_69 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_78 = tmp_and_right_value_69;
        goto and_end_69;
        and_left_69:;
        tmp_condition_result_78 = tmp_and_left_value_69;
        and_end_69:;
        if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
        assert(tmp_condition_result_78 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_78:;
    {
        PyObject *tmp_expression_value_174;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_subscript_value_152;
        PyObject *tmp_subscript_value_153;
        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_175 == NULL)) {
            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_152 = mod_consts[29];
        tmp_expression_value_174 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_175, tmp_subscript_value_152, 10);
        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_174);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_153 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_174, tmp_subscript_value_153);
        Py_DECREF(tmp_expression_value_174);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_78;
    branch_no_78:;
    {
        nuitka_bool tmp_condition_result_79;
        int tmp_and_left_truth_70;
        nuitka_bool tmp_and_left_value_70;
        nuitka_bool tmp_and_right_value_70;
        PyObject *tmp_cmp_expr_left_133;
        PyObject *tmp_cmp_expr_right_133;
        PyObject *tmp_cmp_expr_left_134;
        PyObject *tmp_cmp_expr_right_134;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_133 = var_resname;
        tmp_cmp_expr_right_133 = mod_consts[128];
        tmp_and_left_value_70 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_133, tmp_cmp_expr_right_133);
        if (tmp_and_left_value_70 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_70 = tmp_and_left_value_70 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_70 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_70);

            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_70 == 1) {
            goto and_right_70;
        } else {
            goto and_left_70;
        }
        and_right_70:;
        assert(tmp_and_left_value_70 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_134 = var_at_name;
        tmp_cmp_expr_right_134 = PySet_New(mod_consts[134]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_134, tmp_cmp_expr_left_134);
        Py_DECREF(tmp_cmp_expr_right_134);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_70 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_79 = tmp_and_right_value_70;
        goto and_end_70;
        and_left_70:;
        tmp_condition_result_79 = tmp_and_left_value_70;
        and_end_70:;
        if (tmp_condition_result_79 == NUITKA_BOOL_TRUE) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
        assert(tmp_condition_result_79 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_79:;
    {
        PyObject *tmp_expression_value_176;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_subscript_value_154;
        PyObject *tmp_subscript_value_155;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_154 = mod_consts[24];
        tmp_expression_value_176 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_177, tmp_subscript_value_154, 9);
        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_176);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_155 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_176, tmp_subscript_value_155);
        Py_DECREF(tmp_expression_value_176);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_79;
    branch_no_79:;
    {
        nuitka_bool tmp_condition_result_80;
        int tmp_and_left_truth_71;
        nuitka_bool tmp_and_left_value_71;
        nuitka_bool tmp_and_right_value_71;
        PyObject *tmp_cmp_expr_left_135;
        PyObject *tmp_cmp_expr_right_135;
        PyObject *tmp_cmp_expr_left_136;
        PyObject *tmp_cmp_expr_right_136;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_135 = var_resname;
        tmp_cmp_expr_right_135 = mod_consts[128];
        tmp_and_left_value_71 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_135, tmp_cmp_expr_right_135);
        if (tmp_and_left_value_71 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_71 = tmp_and_left_value_71 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_71 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_71);

            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_71 == 1) {
            goto and_right_71;
        } else {
            goto and_left_71;
        }
        and_right_71:;
        assert(tmp_and_left_value_71 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_136 = var_at_name;
        tmp_cmp_expr_right_136 = mod_consts[135];
        tmp_and_right_value_71 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_136, tmp_cmp_expr_right_136);
        if (tmp_and_right_value_71 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_80 = tmp_and_right_value_71;
        goto and_end_71;
        and_left_71:;
        tmp_condition_result_80 = tmp_and_left_value_71;
        and_end_71:;
        if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
            goto branch_yes_80;
        } else {
            goto branch_no_80;
        }
        assert(tmp_condition_result_80 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_80:;
    {
        PyObject *tmp_expression_value_178;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_156;
        PyObject *tmp_subscript_value_157;
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_156 = mod_consts[3];
        tmp_expression_value_178 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_179, tmp_subscript_value_156, 2);
        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_178);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_157 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_178, tmp_subscript_value_157);
        Py_DECREF(tmp_expression_value_178);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_80;
    branch_no_80:;
    {
        nuitka_bool tmp_condition_result_81;
        int tmp_and_left_truth_72;
        nuitka_bool tmp_and_left_value_72;
        nuitka_bool tmp_and_right_value_72;
        PyObject *tmp_cmp_expr_left_137;
        PyObject *tmp_cmp_expr_right_137;
        PyObject *tmp_cmp_expr_left_138;
        PyObject *tmp_cmp_expr_right_138;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_137 = var_resname;
        tmp_cmp_expr_right_137 = mod_consts[136];
        tmp_and_left_value_72 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_137, tmp_cmp_expr_right_137);
        if (tmp_and_left_value_72 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_72 = tmp_and_left_value_72 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_72 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_72);

            exception_lineno = 377;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_72 == 1) {
            goto and_right_72;
        } else {
            goto and_left_72;
        }
        and_right_72:;
        assert(tmp_and_left_value_72 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_138 = var_at_name;
        tmp_cmp_expr_right_138 = PySet_New(mod_consts[137]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_138, tmp_cmp_expr_left_138);
        Py_DECREF(tmp_cmp_expr_right_138);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_72 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_81 = tmp_and_right_value_72;
        goto and_end_72;
        and_left_72:;
        tmp_condition_result_81 = tmp_and_left_value_72;
        and_end_72:;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto branch_yes_81;
        } else {
            goto branch_no_81;
        }
        assert(tmp_condition_result_81 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_81:;
    {
        PyObject *tmp_expression_value_180;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_subscript_value_158;
        PyObject *tmp_subscript_value_159;
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_158 = mod_consts[76];
        tmp_expression_value_180 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_181, tmp_subscript_value_158, 14);
        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_180);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_159 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_180, tmp_subscript_value_159);
        Py_DECREF(tmp_expression_value_180);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_81;
    branch_no_81:;
    {
        nuitka_bool tmp_condition_result_82;
        int tmp_and_left_truth_73;
        nuitka_bool tmp_and_left_value_73;
        nuitka_bool tmp_and_right_value_73;
        PyObject *tmp_cmp_expr_left_139;
        PyObject *tmp_cmp_expr_right_139;
        PyObject *tmp_cmp_expr_left_140;
        PyObject *tmp_cmp_expr_right_140;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_139 = var_resname;
        tmp_cmp_expr_right_139 = mod_consts[138];
        tmp_and_left_value_73 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_139, tmp_cmp_expr_right_139);
        if (tmp_and_left_value_73 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_73 = tmp_and_left_value_73 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_73 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_73);

            exception_lineno = 379;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_73 == 1) {
            goto and_right_73;
        } else {
            goto and_left_73;
        }
        and_right_73:;
        assert(tmp_and_left_value_73 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_140 = var_at_name;
        tmp_cmp_expr_right_140 = PySet_New(mod_consts[139]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_140, tmp_cmp_expr_left_140);
        Py_DECREF(tmp_cmp_expr_right_140);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_73 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_82 = tmp_and_right_value_73;
        goto and_end_73;
        and_left_73:;
        tmp_condition_result_82 = tmp_and_left_value_73;
        and_end_73:;
        if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
            goto branch_yes_82;
        } else {
            goto branch_no_82;
        }
        assert(tmp_condition_result_82 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_82:;
    {
        PyObject *tmp_expression_value_182;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_160;
        PyObject *tmp_subscript_value_161;
        tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_183 == NULL)) {
            tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_160 = mod_consts[24];
        tmp_expression_value_182 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_183, tmp_subscript_value_160, 9);
        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_182);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_161 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_182, tmp_subscript_value_161);
        Py_DECREF(tmp_expression_value_182);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_82;
    branch_no_82:;
    {
        nuitka_bool tmp_condition_result_83;
        int tmp_and_left_truth_74;
        nuitka_bool tmp_and_left_value_74;
        nuitka_bool tmp_and_right_value_74;
        PyObject *tmp_cmp_expr_left_141;
        PyObject *tmp_cmp_expr_right_141;
        PyObject *tmp_cmp_expr_left_142;
        PyObject *tmp_cmp_expr_right_142;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_141 = var_resname;
        tmp_cmp_expr_right_141 = mod_consts[138];
        tmp_and_left_value_74 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_141, tmp_cmp_expr_right_141);
        if (tmp_and_left_value_74 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_74 = tmp_and_left_value_74 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_74 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_74);

            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_74 == 1) {
            goto and_right_74;
        } else {
            goto and_left_74;
        }
        and_right_74:;
        assert(tmp_and_left_value_74 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_142 = var_at_name;
        tmp_cmp_expr_right_142 = mod_consts[140];
        tmp_and_right_value_74 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_142, tmp_cmp_expr_right_142);
        if (tmp_and_right_value_74 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_83 = tmp_and_right_value_74;
        goto and_end_74;
        and_left_74:;
        tmp_condition_result_83 = tmp_and_left_value_74;
        and_end_74:;
        if (tmp_condition_result_83 == NUITKA_BOOL_TRUE) {
            goto branch_yes_83;
        } else {
            goto branch_no_83;
        }
        assert(tmp_condition_result_83 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_83:;
    {
        PyObject *tmp_expression_value_184;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_162;
        PyObject *tmp_subscript_value_163;
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_162 = mod_consts[29];
        tmp_expression_value_184 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_185, tmp_subscript_value_162, 10);
        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_184);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_163 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_163);
        Py_DECREF(tmp_expression_value_184);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_83;
    branch_no_83:;
    {
        nuitka_bool tmp_condition_result_84;
        int tmp_and_left_truth_75;
        nuitka_bool tmp_and_left_value_75;
        nuitka_bool tmp_and_right_value_75;
        PyObject *tmp_cmp_expr_left_143;
        PyObject *tmp_cmp_expr_right_143;
        PyObject *tmp_cmp_expr_left_144;
        PyObject *tmp_cmp_expr_right_144;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_143 = var_resname;
        tmp_cmp_expr_right_143 = mod_consts[138];
        tmp_and_left_value_75 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_143, tmp_cmp_expr_right_143);
        if (tmp_and_left_value_75 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_75 = tmp_and_left_value_75 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_75 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_75);

            exception_lineno = 383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_75 == 1) {
            goto and_right_75;
        } else {
            goto and_left_75;
        }
        and_right_75:;
        assert(tmp_and_left_value_75 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_144 = var_at_name;
        tmp_cmp_expr_right_144 = mod_consts[141];
        tmp_and_right_value_75 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_144, tmp_cmp_expr_right_144);
        if (tmp_and_right_value_75 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_84 = tmp_and_right_value_75;
        goto and_end_75;
        and_left_75:;
        tmp_condition_result_84 = tmp_and_left_value_75;
        and_end_75:;
        if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
            goto branch_yes_84;
        } else {
            goto branch_no_84;
        }
        assert(tmp_condition_result_84 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_84:;
    {
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_164;
        PyObject *tmp_subscript_value_165;
        tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_187 == NULL)) {
            tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_164 = mod_consts[35];
        tmp_expression_value_186 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_187, tmp_subscript_value_164, 8);
        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_186);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 384;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_165 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_186, tmp_subscript_value_165);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_84;
    branch_no_84:;
    {
        nuitka_bool tmp_condition_result_85;
        int tmp_and_left_truth_76;
        nuitka_bool tmp_and_left_value_76;
        nuitka_bool tmp_and_right_value_76;
        PyObject *tmp_cmp_expr_left_145;
        PyObject *tmp_cmp_expr_right_145;
        PyObject *tmp_cmp_expr_left_146;
        PyObject *tmp_cmp_expr_right_146;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_145 = var_resname;
        tmp_cmp_expr_right_145 = mod_consts[138];
        tmp_and_left_value_76 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_145, tmp_cmp_expr_right_145);
        if (tmp_and_left_value_76 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_76 = tmp_and_left_value_76 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_76 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_76);

            exception_lineno = 385;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_76 == 1) {
            goto and_right_76;
        } else {
            goto and_left_76;
        }
        and_right_76:;
        assert(tmp_and_left_value_76 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_146 = var_at_name;
        tmp_cmp_expr_right_146 = mod_consts[142];
        tmp_and_right_value_76 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_146, tmp_cmp_expr_right_146);
        if (tmp_and_right_value_76 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_85 = tmp_and_right_value_76;
        goto and_end_76;
        and_left_76:;
        tmp_condition_result_85 = tmp_and_left_value_76;
        and_end_76:;
        if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
            goto branch_yes_85;
        } else {
            goto branch_no_85;
        }
        assert(tmp_condition_result_85 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_85:;
    {
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_166;
        PyObject *tmp_subscript_value_167;
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_166 = mod_consts[27];
        tmp_expression_value_188 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_189, tmp_subscript_value_166, 7);
        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_188);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_167 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_188, tmp_subscript_value_167);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_85;
    branch_no_85:;
    {
        nuitka_bool tmp_condition_result_86;
        int tmp_and_left_truth_77;
        nuitka_bool tmp_and_left_value_77;
        nuitka_bool tmp_and_right_value_77;
        PyObject *tmp_cmp_expr_left_147;
        PyObject *tmp_cmp_expr_right_147;
        PyObject *tmp_cmp_expr_left_148;
        PyObject *tmp_cmp_expr_right_148;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_147 = var_resname;
        tmp_cmp_expr_right_147 = mod_consts[138];
        tmp_and_left_value_77 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_147, tmp_cmp_expr_right_147);
        if (tmp_and_left_value_77 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_77 = tmp_and_left_value_77 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_77 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_77);

            exception_lineno = 387;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_77 == 1) {
            goto and_right_77;
        } else {
            goto and_left_77;
        }
        and_right_77:;
        assert(tmp_and_left_value_77 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_148 = var_at_name;
        tmp_cmp_expr_right_148 = PySet_New(mod_consts[143]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_148, tmp_cmp_expr_left_148);
        Py_DECREF(tmp_cmp_expr_right_148);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_77 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_86 = tmp_and_right_value_77;
        goto and_end_77;
        and_left_77:;
        tmp_condition_result_86 = tmp_and_left_value_77;
        and_end_77:;
        if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
            goto branch_yes_86;
        } else {
            goto branch_no_86;
        }
        assert(tmp_condition_result_86 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_86:;
    {
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_168;
        PyObject *tmp_subscript_value_169;
        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_191 == NULL)) {
            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_168 = mod_consts[3];
        tmp_expression_value_190 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_191, tmp_subscript_value_168, 2);
        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_190);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_169 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_190, tmp_subscript_value_169);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_86;
    branch_no_86:;
    {
        nuitka_bool tmp_condition_result_87;
        int tmp_and_left_truth_78;
        nuitka_bool tmp_and_left_value_78;
        nuitka_bool tmp_and_right_value_78;
        PyObject *tmp_cmp_expr_left_149;
        PyObject *tmp_cmp_expr_right_149;
        PyObject *tmp_cmp_expr_left_150;
        PyObject *tmp_cmp_expr_right_150;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_149 = var_resname;
        tmp_cmp_expr_right_149 = PySet_New(mod_consts[144]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_149, tmp_cmp_expr_left_149);
        Py_DECREF(tmp_cmp_expr_right_149);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_78 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_78 = tmp_and_left_value_78 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_78 == 1) {
            goto and_right_78;
        } else {
            goto and_left_78;
        }
        and_right_78:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_150 = var_at_name;
        tmp_cmp_expr_right_150 = mod_consts[145];
        tmp_and_right_value_78 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_150, tmp_cmp_expr_right_150);
        if (tmp_and_right_value_78 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_87 = tmp_and_right_value_78;
        goto and_end_78;
        and_left_78:;
        tmp_condition_result_87 = tmp_and_left_value_78;
        and_end_78:;
        if (tmp_condition_result_87 == NUITKA_BOOL_TRUE) {
            goto branch_yes_87;
        } else {
            goto branch_no_87;
        }
        assert(tmp_condition_result_87 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_87:;
    {
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_subscript_value_170;
        PyObject *tmp_subscript_value_171;
        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_193 == NULL)) {
            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_170 = mod_consts[31];
        tmp_expression_value_192 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_193, tmp_subscript_value_170, 13);
        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_192);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_171 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_192, tmp_subscript_value_171);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_87;
    branch_no_87:;
    {
        bool tmp_condition_result_88;
        int tmp_and_left_truth_79;
        bool tmp_and_left_value_79;
        bool tmp_and_right_value_79;
        PyObject *tmp_cmp_expr_left_151;
        PyObject *tmp_cmp_expr_right_151;
        PyObject *tmp_cmp_expr_left_152;
        PyObject *tmp_cmp_expr_right_152;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_151 = var_resname;
        tmp_cmp_expr_right_151 = PySet_New(mod_consts[146]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_151, tmp_cmp_expr_left_151);
        Py_DECREF(tmp_cmp_expr_right_151);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_79 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_79 = tmp_and_left_value_79 != false ? 1 : 0;
        if (tmp_and_left_truth_79 == 1) {
            goto and_right_79;
        } else {
            goto and_left_79;
        }
        and_right_79:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_152 = var_at_name;
        tmp_cmp_expr_right_152 = PySet_New(mod_consts[147]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_152, tmp_cmp_expr_left_152);
        Py_DECREF(tmp_cmp_expr_right_152);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_79 = (tmp_res == 1) ? true : false;
        tmp_condition_result_88 = tmp_and_right_value_79;
        goto and_end_79;
        and_left_79:;
        tmp_condition_result_88 = tmp_and_left_value_79;
        and_end_79:;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_88;
        } else {
            goto branch_no_88;
        }
    }
    branch_yes_88:;
    {
        PyObject *tmp_expression_value_194;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_172;
        PyObject *tmp_subscript_value_173;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_172 = mod_consts[40];
        tmp_expression_value_194 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_195, tmp_subscript_value_172, 3);
        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_194);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_173 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_194, tmp_subscript_value_173);
        Py_DECREF(tmp_expression_value_194);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_88;
    branch_no_88:;
    {
        nuitka_bool tmp_condition_result_89;
        int tmp_and_left_truth_80;
        nuitka_bool tmp_and_left_value_80;
        nuitka_bool tmp_and_right_value_80;
        PyObject *tmp_cmp_expr_left_153;
        PyObject *tmp_cmp_expr_right_153;
        PyObject *tmp_cmp_expr_left_154;
        PyObject *tmp_cmp_expr_right_154;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_153 = var_resname;
        tmp_cmp_expr_right_153 = mod_consts[148];
        tmp_and_left_value_80 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_153, tmp_cmp_expr_right_153);
        if (tmp_and_left_value_80 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_80 = tmp_and_left_value_80 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_80 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_80);

            exception_lineno = 398;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_80 == 1) {
            goto and_right_80;
        } else {
            goto and_left_80;
        }
        and_right_80:;
        assert(tmp_and_left_value_80 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_154 = var_at_name;
        tmp_cmp_expr_right_154 = PySet_New(mod_consts[147]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_154, tmp_cmp_expr_left_154);
        Py_DECREF(tmp_cmp_expr_right_154);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_80 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_89 = tmp_and_right_value_80;
        goto and_end_80;
        and_left_80:;
        tmp_condition_result_89 = tmp_and_left_value_80;
        and_end_80:;
        if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
            goto branch_yes_89;
        } else {
            goto branch_no_89;
        }
        assert(tmp_condition_result_89 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_89:;
    {
        PyObject *tmp_expression_value_196;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_174;
        PyObject *tmp_subscript_value_175;
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_174 = mod_consts[40];
        tmp_expression_value_196 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_197, tmp_subscript_value_174, 3);
        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_196);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_175 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_196, tmp_subscript_value_175);
        Py_DECREF(tmp_expression_value_196);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_89;
    branch_no_89:;
    {
        nuitka_bool tmp_condition_result_90;
        int tmp_and_left_truth_81;
        nuitka_bool tmp_and_left_value_81;
        nuitka_bool tmp_and_right_value_81;
        PyObject *tmp_cmp_expr_left_155;
        PyObject *tmp_cmp_expr_right_155;
        PyObject *tmp_cmp_expr_left_156;
        PyObject *tmp_cmp_expr_right_156;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_155 = var_resname;
        tmp_cmp_expr_right_155 = mod_consts[148];
        tmp_and_left_value_81 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_155, tmp_cmp_expr_right_155);
        if (tmp_and_left_value_81 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_81 = tmp_and_left_value_81 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_81 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_81);

            exception_lineno = 400;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_81 == 1) {
            goto and_right_81;
        } else {
            goto and_left_81;
        }
        and_right_81:;
        assert(tmp_and_left_value_81 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_156 = var_at_name;
        tmp_cmp_expr_right_156 = mod_consts[149];
        tmp_and_right_value_81 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_156, tmp_cmp_expr_right_156);
        if (tmp_and_right_value_81 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_90 = tmp_and_right_value_81;
        goto and_end_81;
        and_left_81:;
        tmp_condition_result_90 = tmp_and_left_value_81;
        and_end_81:;
        if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
            goto branch_yes_90;
        } else {
            goto branch_no_90;
        }
        assert(tmp_condition_result_90 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_90:;
    {
        PyObject *tmp_expression_value_198;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_176;
        PyObject *tmp_subscript_value_177;
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_176 = mod_consts[31];
        tmp_expression_value_198 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_199, tmp_subscript_value_176, 13);
        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_198);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_177 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_198, tmp_subscript_value_177);
        Py_DECREF(tmp_expression_value_198);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_90;
    branch_no_90:;
    {
        nuitka_bool tmp_condition_result_91;
        int tmp_and_left_truth_82;
        nuitka_bool tmp_and_left_value_82;
        nuitka_bool tmp_and_right_value_82;
        PyObject *tmp_cmp_expr_left_157;
        PyObject *tmp_cmp_expr_right_157;
        PyObject *tmp_cmp_expr_left_158;
        PyObject *tmp_cmp_expr_right_158;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_157 = var_resname;
        tmp_cmp_expr_right_157 = mod_consts[148];
        tmp_and_left_value_82 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_157, tmp_cmp_expr_right_157);
        if (tmp_and_left_value_82 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_82 = tmp_and_left_value_82 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_82 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_82);

            exception_lineno = 402;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_82 == 1) {
            goto and_right_82;
        } else {
            goto and_left_82;
        }
        and_right_82:;
        assert(tmp_and_left_value_82 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_158 = var_at_name;
        tmp_cmp_expr_right_158 = PySet_New(mod_consts[150]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_158, tmp_cmp_expr_left_158);
        Py_DECREF(tmp_cmp_expr_right_158);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_82 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_91 = tmp_and_right_value_82;
        goto and_end_82;
        and_left_82:;
        tmp_condition_result_91 = tmp_and_left_value_82;
        and_end_82:;
        if (tmp_condition_result_91 == NUITKA_BOOL_TRUE) {
            goto branch_yes_91;
        } else {
            goto branch_no_91;
        }
        assert(tmp_condition_result_91 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_91:;
    {
        PyObject *tmp_expression_value_200;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_subscript_value_178;
        PyObject *tmp_subscript_value_179;
        tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_201 == NULL)) {
            tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_178 = mod_consts[35];
        tmp_expression_value_200 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_201, tmp_subscript_value_178, 8);
        if (tmp_expression_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_200);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_179 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_179);
        Py_DECREF(tmp_expression_value_200);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_91;
    branch_no_91:;
    {
        nuitka_bool tmp_condition_result_92;
        int tmp_and_left_truth_83;
        nuitka_bool tmp_and_left_value_83;
        nuitka_bool tmp_and_right_value_83;
        PyObject *tmp_cmp_expr_left_159;
        PyObject *tmp_cmp_expr_right_159;
        PyObject *tmp_cmp_expr_left_160;
        PyObject *tmp_cmp_expr_right_160;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_159 = var_resname;
        tmp_cmp_expr_right_159 = mod_consts[148];
        tmp_and_left_value_83 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_159, tmp_cmp_expr_right_159);
        if (tmp_and_left_value_83 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_83 = tmp_and_left_value_83 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_83 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_83);

            exception_lineno = 404;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_83 == 1) {
            goto and_right_83;
        } else {
            goto and_left_83;
        }
        and_right_83:;
        assert(tmp_and_left_value_83 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_160 = var_at_name;
        tmp_cmp_expr_right_160 = PySet_New(mod_consts[151]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_160, tmp_cmp_expr_left_160);
        Py_DECREF(tmp_cmp_expr_right_160);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_83 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_92 = tmp_and_right_value_83;
        goto and_end_83;
        and_left_83:;
        tmp_condition_result_92 = tmp_and_left_value_83;
        and_end_83:;
        if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
            goto branch_yes_92;
        } else {
            goto branch_no_92;
        }
        assert(tmp_condition_result_92 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_92:;
    {
        PyObject *tmp_expression_value_202;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_180;
        PyObject *tmp_subscript_value_181;
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_180 = mod_consts[24];
        tmp_expression_value_202 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_203, tmp_subscript_value_180, 9);
        if (tmp_expression_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_202);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_181 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_202, tmp_subscript_value_181);
        Py_DECREF(tmp_expression_value_202);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_92;
    branch_no_92:;
    {
        nuitka_bool tmp_condition_result_93;
        int tmp_and_left_truth_84;
        nuitka_bool tmp_and_left_value_84;
        nuitka_bool tmp_and_right_value_84;
        PyObject *tmp_cmp_expr_left_161;
        PyObject *tmp_cmp_expr_right_161;
        PyObject *tmp_cmp_expr_left_162;
        PyObject *tmp_cmp_expr_right_162;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_161 = var_resname;
        tmp_cmp_expr_right_161 = mod_consts[148];
        tmp_and_left_value_84 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_161, tmp_cmp_expr_right_161);
        if (tmp_and_left_value_84 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_84 = tmp_and_left_value_84 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_84 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_84);

            exception_lineno = 406;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_84 == 1) {
            goto and_right_84;
        } else {
            goto and_left_84;
        }
        and_right_84:;
        assert(tmp_and_left_value_84 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_162 = var_at_name;
        tmp_cmp_expr_right_162 = mod_consts[152];
        tmp_and_right_value_84 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_162, tmp_cmp_expr_right_162);
        if (tmp_and_right_value_84 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_93 = tmp_and_right_value_84;
        goto and_end_84;
        and_left_84:;
        tmp_condition_result_93 = tmp_and_left_value_84;
        and_end_84:;
        if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
            goto branch_yes_93;
        } else {
            goto branch_no_93;
        }
        assert(tmp_condition_result_93 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_93:;
    {
        PyObject *tmp_expression_value_204;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_182;
        PyObject *tmp_subscript_value_183;
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_182 = mod_consts[76];
        tmp_expression_value_204 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_205, tmp_subscript_value_182, 14);
        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_204);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_183 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_204, tmp_subscript_value_183);
        Py_DECREF(tmp_expression_value_204);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_93;
    branch_no_93:;
    {
        nuitka_bool tmp_condition_result_94;
        int tmp_and_left_truth_85;
        nuitka_bool tmp_and_left_value_85;
        nuitka_bool tmp_and_right_value_85;
        PyObject *tmp_cmp_expr_left_163;
        PyObject *tmp_cmp_expr_right_163;
        PyObject *tmp_cmp_expr_left_164;
        PyObject *tmp_cmp_expr_right_164;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_163 = var_resname;
        tmp_cmp_expr_right_163 = mod_consts[153];
        tmp_and_left_value_85 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_163, tmp_cmp_expr_right_163);
        if (tmp_and_left_value_85 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_85 = tmp_and_left_value_85 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_85 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_85);

            exception_lineno = 408;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_85 == 1) {
            goto and_right_85;
        } else {
            goto and_left_85;
        }
        and_right_85:;
        assert(tmp_and_left_value_85 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_164 = var_at_name;
        tmp_cmp_expr_right_164 = mod_consts[154];
        tmp_and_right_value_85 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_164, tmp_cmp_expr_right_164);
        if (tmp_and_right_value_85 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_94 = tmp_and_right_value_85;
        goto and_end_85;
        and_left_85:;
        tmp_condition_result_94 = tmp_and_left_value_85;
        and_end_85:;
        if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
            goto branch_yes_94;
        } else {
            goto branch_no_94;
        }
        assert(tmp_condition_result_94 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_94:;
    {
        PyObject *tmp_expression_value_206;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_184;
        PyObject *tmp_subscript_value_185;
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_184 = mod_consts[155];
        tmp_expression_value_206 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_207, tmp_subscript_value_184, 17);
        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_206);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_185 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_206, tmp_subscript_value_185);
        Py_DECREF(tmp_expression_value_206);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_94;
    branch_no_94:;
    {
        bool tmp_condition_result_95;
        int tmp_and_left_truth_86;
        bool tmp_and_left_value_86;
        bool tmp_and_right_value_86;
        PyObject *tmp_cmp_expr_left_165;
        PyObject *tmp_cmp_expr_right_165;
        PyObject *tmp_cmp_expr_left_166;
        PyObject *tmp_cmp_expr_right_166;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_165 = var_resname;
        tmp_cmp_expr_right_165 = PySet_New(mod_consts[156]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_165, tmp_cmp_expr_left_165);
        Py_DECREF(tmp_cmp_expr_right_165);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_86 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_86 = tmp_and_left_value_86 != false ? 1 : 0;
        if (tmp_and_left_truth_86 == 1) {
            goto and_right_86;
        } else {
            goto and_left_86;
        }
        and_right_86:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_166 = var_at_name;
        tmp_cmp_expr_right_166 = PySet_New(mod_consts[156]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_166, tmp_cmp_expr_left_166);
        Py_DECREF(tmp_cmp_expr_right_166);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_86 = (tmp_res == 1) ? true : false;
        tmp_condition_result_95 = tmp_and_right_value_86;
        goto and_end_86;
        and_left_86:;
        tmp_condition_result_95 = tmp_and_left_value_86;
        and_end_86:;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_95;
        } else {
            goto branch_no_95;
        }
    }
    branch_yes_95:;
    {
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_186;
        PyObject *tmp_subscript_value_187;
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_186 = mod_consts[157];
        tmp_expression_value_208 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_209, tmp_subscript_value_186, 23);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_208);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_187 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_208, tmp_subscript_value_187);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_95;
    branch_no_95:;
    {
        nuitka_bool tmp_condition_result_96;
        int tmp_and_left_truth_87;
        nuitka_bool tmp_and_left_value_87;
        nuitka_bool tmp_and_right_value_87;
        PyObject *tmp_cmp_expr_left_167;
        PyObject *tmp_cmp_expr_right_167;
        PyObject *tmp_cmp_expr_left_168;
        PyObject *tmp_cmp_expr_right_168;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_167 = var_resname;
        tmp_cmp_expr_right_167 = mod_consts[158];
        tmp_and_left_value_87 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_167, tmp_cmp_expr_right_167);
        if (tmp_and_left_value_87 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_87 = tmp_and_left_value_87 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_87 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_87);

            exception_lineno = 412;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_87 == 1) {
            goto and_right_87;
        } else {
            goto and_left_87;
        }
        and_right_87:;
        assert(tmp_and_left_value_87 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_168 = var_at_name;
        tmp_cmp_expr_right_168 = PySet_New(mod_consts[159]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_168, tmp_cmp_expr_left_168);
        Py_DECREF(tmp_cmp_expr_right_168);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_87 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_96 = tmp_and_right_value_87;
        goto and_end_87;
        and_left_87:;
        tmp_condition_result_96 = tmp_and_left_value_87;
        and_end_87:;
        if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
            goto branch_yes_96;
        } else {
            goto branch_no_96;
        }
        assert(tmp_condition_result_96 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_96:;
    {
        PyObject *tmp_expression_value_210;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_188;
        PyObject *tmp_subscript_value_189;
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_188 = mod_consts[26];
        tmp_expression_value_210 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_211, tmp_subscript_value_188, 4);
        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_210);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_189 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_210, tmp_subscript_value_189);
        Py_DECREF(tmp_expression_value_210);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_96;
    branch_no_96:;
    {
        nuitka_bool tmp_condition_result_97;
        int tmp_and_left_truth_88;
        nuitka_bool tmp_and_left_value_88;
        nuitka_bool tmp_and_right_value_88;
        PyObject *tmp_cmp_expr_left_169;
        PyObject *tmp_cmp_expr_right_169;
        PyObject *tmp_cmp_expr_left_170;
        PyObject *tmp_cmp_expr_right_170;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_169 = var_resname;
        tmp_cmp_expr_right_169 = mod_consts[158];
        tmp_and_left_value_88 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_169, tmp_cmp_expr_right_169);
        if (tmp_and_left_value_88 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_88 = tmp_and_left_value_88 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_88 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_88);

            exception_lineno = 414;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_88 == 1) {
            goto and_right_88;
        } else {
            goto and_left_88;
        }
        and_right_88:;
        assert(tmp_and_left_value_88 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_170 = var_at_name;
        tmp_cmp_expr_right_170 = PySet_New(mod_consts[160]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_170, tmp_cmp_expr_left_170);
        Py_DECREF(tmp_cmp_expr_right_170);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_88 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_97 = tmp_and_right_value_88;
        goto and_end_88;
        and_left_88:;
        tmp_condition_result_97 = tmp_and_left_value_88;
        and_end_88:;
        if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
            goto branch_yes_97;
        } else {
            goto branch_no_97;
        }
        assert(tmp_condition_result_97 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_97:;
    {
        PyObject *tmp_expression_value_212;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_subscript_value_190;
        PyObject *tmp_subscript_value_191;
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_190 = mod_consts[29];
        tmp_expression_value_212 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_213, tmp_subscript_value_190, 10);
        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_212);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_191 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_212, tmp_subscript_value_191);
        Py_DECREF(tmp_expression_value_212);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_97;
    branch_no_97:;
    {
        nuitka_bool tmp_condition_result_98;
        int tmp_and_left_truth_89;
        nuitka_bool tmp_and_left_value_89;
        nuitka_bool tmp_and_right_value_89;
        PyObject *tmp_cmp_expr_left_171;
        PyObject *tmp_cmp_expr_right_171;
        PyObject *tmp_cmp_expr_left_172;
        PyObject *tmp_cmp_expr_right_172;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_171 = var_resname;
        tmp_cmp_expr_right_171 = mod_consts[158];
        tmp_and_left_value_89 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_171, tmp_cmp_expr_right_171);
        if (tmp_and_left_value_89 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_89 = tmp_and_left_value_89 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_89 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_89);

            exception_lineno = 425;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_89 == 1) {
            goto and_right_89;
        } else {
            goto and_left_89;
        }
        and_right_89:;
        assert(tmp_and_left_value_89 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_172 = var_at_name;
        tmp_cmp_expr_right_172 = PySet_New(mod_consts[161]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_172, tmp_cmp_expr_left_172);
        Py_DECREF(tmp_cmp_expr_right_172);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_89 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_98 = tmp_and_right_value_89;
        goto and_end_89;
        and_left_89:;
        tmp_condition_result_98 = tmp_and_left_value_89;
        and_end_89:;
        if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
            goto branch_yes_98;
        } else {
            goto branch_no_98;
        }
        assert(tmp_condition_result_98 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_98:;
    {
        PyObject *tmp_expression_value_214;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_192;
        PyObject *tmp_subscript_value_193;
        tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_215 == NULL)) {
            tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_192 = mod_consts[1];
        tmp_expression_value_214 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_215, tmp_subscript_value_192, 1);
        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_214);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_193 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_214, tmp_subscript_value_193);
        Py_DECREF(tmp_expression_value_214);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_98;
    branch_no_98:;
    {
        nuitka_bool tmp_condition_result_99;
        int tmp_and_left_truth_90;
        nuitka_bool tmp_and_left_value_90;
        nuitka_bool tmp_and_right_value_90;
        PyObject *tmp_cmp_expr_left_173;
        PyObject *tmp_cmp_expr_right_173;
        PyObject *tmp_cmp_expr_left_174;
        PyObject *tmp_cmp_expr_right_174;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_173 = var_resname;
        tmp_cmp_expr_right_173 = mod_consts[158];
        tmp_and_left_value_90 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_173, tmp_cmp_expr_right_173);
        if (tmp_and_left_value_90 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_90 = tmp_and_left_value_90 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_90 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_90);

            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_90 == 1) {
            goto and_right_90;
        } else {
            goto and_left_90;
        }
        and_right_90:;
        assert(tmp_and_left_value_90 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_174 = var_at_name;
        tmp_cmp_expr_right_174 = mod_consts[162];
        tmp_and_right_value_90 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_174, tmp_cmp_expr_right_174);
        if (tmp_and_right_value_90 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_99 = tmp_and_right_value_90;
        goto and_end_90;
        and_left_90:;
        tmp_condition_result_99 = tmp_and_left_value_90;
        and_end_90:;
        if (tmp_condition_result_99 == NUITKA_BOOL_TRUE) {
            goto branch_yes_99;
        } else {
            goto branch_no_99;
        }
        assert(tmp_condition_result_99 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_99:;
    {
        PyObject *tmp_expression_value_216;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_subscript_value_194;
        PyObject *tmp_subscript_value_195;
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_194 = mod_consts[76];
        tmp_expression_value_216 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_217, tmp_subscript_value_194, 14);
        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_216);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_195 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_216, tmp_subscript_value_195);
        Py_DECREF(tmp_expression_value_216);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_99;
    branch_no_99:;
    {
        nuitka_bool tmp_condition_result_100;
        int tmp_and_left_truth_91;
        nuitka_bool tmp_and_left_value_91;
        nuitka_bool tmp_and_right_value_91;
        PyObject *tmp_cmp_expr_left_175;
        PyObject *tmp_cmp_expr_right_175;
        PyObject *tmp_cmp_expr_left_176;
        PyObject *tmp_cmp_expr_right_176;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_175 = var_resname;
        tmp_cmp_expr_right_175 = mod_consts[158];
        tmp_and_left_value_91 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_175, tmp_cmp_expr_right_175);
        if (tmp_and_left_value_91 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_91 = tmp_and_left_value_91 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_91 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_91);

            exception_lineno = 429;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_91 == 1) {
            goto and_right_91;
        } else {
            goto and_left_91;
        }
        and_right_91:;
        assert(tmp_and_left_value_91 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_176 = var_at_name;
        tmp_cmp_expr_right_176 = PySet_New(mod_consts[163]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_176, tmp_cmp_expr_left_176);
        Py_DECREF(tmp_cmp_expr_right_176);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_91 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_100 = tmp_and_right_value_91;
        goto and_end_91;
        and_left_91:;
        tmp_condition_result_100 = tmp_and_left_value_91;
        and_end_91:;
        if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
            goto branch_yes_100;
        } else {
            goto branch_no_100;
        }
        assert(tmp_condition_result_100 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_100:;
    {
        PyObject *tmp_expression_value_218;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_subscript_value_196;
        PyObject *tmp_subscript_value_197;
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_196 = mod_consts[73];
        tmp_expression_value_218 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_219, tmp_subscript_value_196, 11);
        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_218);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_197 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_218, tmp_subscript_value_197);
        Py_DECREF(tmp_expression_value_218);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_100;
    branch_no_100:;
    {
        nuitka_bool tmp_condition_result_101;
        int tmp_and_left_truth_92;
        nuitka_bool tmp_and_left_value_92;
        nuitka_bool tmp_and_right_value_92;
        PyObject *tmp_cmp_expr_left_177;
        PyObject *tmp_cmp_expr_right_177;
        PyObject *tmp_cmp_expr_left_178;
        PyObject *tmp_cmp_expr_right_178;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_177 = var_resname;
        tmp_cmp_expr_right_177 = mod_consts[158];
        tmp_and_left_value_92 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_177, tmp_cmp_expr_right_177);
        if (tmp_and_left_value_92 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_92 = tmp_and_left_value_92 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_92 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_92);

            exception_lineno = 431;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_92 == 1) {
            goto and_right_92;
        } else {
            goto and_left_92;
        }
        and_right_92:;
        assert(tmp_and_left_value_92 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_178 = var_at_name;
        tmp_cmp_expr_right_178 = PySet_New(mod_consts[164]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_178, tmp_cmp_expr_left_178);
        Py_DECREF(tmp_cmp_expr_right_178);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_92 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_101 = tmp_and_right_value_92;
        goto and_end_92;
        and_left_92:;
        tmp_condition_result_101 = tmp_and_left_value_92;
        and_end_92:;
        if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
            goto branch_yes_101;
        } else {
            goto branch_no_101;
        }
        assert(tmp_condition_result_101 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_101:;
    {
        PyObject *tmp_expression_value_220;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_subscript_value_198;
        PyObject *tmp_subscript_value_199;
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_198 = mod_consts[24];
        tmp_expression_value_220 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_221, tmp_subscript_value_198, 9);
        if (tmp_expression_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_220);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_199 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_220, tmp_subscript_value_199);
        Py_DECREF(tmp_expression_value_220);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_101;
    branch_no_101:;
    {
        nuitka_bool tmp_condition_result_102;
        int tmp_and_left_truth_93;
        nuitka_bool tmp_and_left_value_93;
        nuitka_bool tmp_and_right_value_93;
        PyObject *tmp_cmp_expr_left_179;
        PyObject *tmp_cmp_expr_right_179;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_call_result_17;
        int tmp_truth_name_17;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_179 = var_resname;
        tmp_cmp_expr_right_179 = mod_consts[158];
        tmp_and_left_value_93 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_179, tmp_cmp_expr_right_179);
        if (tmp_and_left_value_93 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_93 = tmp_and_left_value_93 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_93 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_93);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_93 == 1) {
            goto and_right_93;
        } else {
            goto and_left_93;
        }
        and_right_93:;
        assert(tmp_and_left_value_93 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_222 = var_at_name;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[45]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 433;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[165]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_call_result_17);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_17);

            exception_lineno = 433;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_93 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_17);
        tmp_condition_result_102 = tmp_and_right_value_93;
        goto and_end_93;
        and_left_93:;
        tmp_condition_result_102 = tmp_and_left_value_93;
        and_end_93:;
        if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
            goto branch_yes_102;
        } else {
            goto branch_no_102;
        }
        assert(tmp_condition_result_102 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_102:;
    {
        PyObject *tmp_expression_value_223;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_subscript_value_200;
        PyObject *tmp_subscript_value_201;
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_200 = mod_consts[35];
        tmp_expression_value_223 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_224, tmp_subscript_value_200, 8);
        if (tmp_expression_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_223);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_201 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_223, tmp_subscript_value_201);
        Py_DECREF(tmp_expression_value_223);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_102;
    branch_no_102:;
    {
        nuitka_bool tmp_condition_result_103;
        int tmp_and_left_truth_94;
        nuitka_bool tmp_and_left_value_94;
        nuitka_bool tmp_and_right_value_94;
        PyObject *tmp_cmp_expr_left_180;
        PyObject *tmp_cmp_expr_right_180;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_call_result_18;
        int tmp_truth_name_18;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_180 = var_resname;
        tmp_cmp_expr_right_180 = mod_consts[158];
        tmp_and_left_value_94 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_180, tmp_cmp_expr_right_180);
        if (tmp_and_left_value_94 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_94 = tmp_and_left_value_94 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_94 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_94);

            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_94 == 1) {
            goto and_right_94;
        } else {
            goto and_left_94;
        }
        and_right_94:;
        assert(tmp_and_left_value_94 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_225 = var_at_name;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[45]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 435;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[166]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_call_result_18);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_18);

            exception_lineno = 435;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_94 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_18);
        tmp_condition_result_103 = tmp_and_right_value_94;
        goto and_end_94;
        and_left_94:;
        tmp_condition_result_103 = tmp_and_left_value_94;
        and_end_94:;
        if (tmp_condition_result_103 == NUITKA_BOOL_TRUE) {
            goto branch_yes_103;
        } else {
            goto branch_no_103;
        }
        assert(tmp_condition_result_103 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_103:;
    {
        PyObject *tmp_expression_value_226;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_subscript_value_202;
        PyObject *tmp_subscript_value_203;
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_202 = mod_consts[3];
        tmp_expression_value_226 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_227, tmp_subscript_value_202, 2);
        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_226);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_203 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_226, tmp_subscript_value_203);
        Py_DECREF(tmp_expression_value_226);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_103;
    branch_no_103:;
    {
        nuitka_bool tmp_condition_result_104;
        int tmp_and_left_truth_95;
        nuitka_bool tmp_and_left_value_95;
        nuitka_bool tmp_and_right_value_95;
        PyObject *tmp_cmp_expr_left_181;
        PyObject *tmp_cmp_expr_right_181;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_call_result_19;
        int tmp_truth_name_19;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_181 = var_resname;
        tmp_cmp_expr_right_181 = mod_consts[158];
        tmp_and_left_value_95 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_181, tmp_cmp_expr_right_181);
        if (tmp_and_left_value_95 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_95 = tmp_and_left_value_95 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_95 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_95);

            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_95 == 1) {
            goto and_right_95;
        } else {
            goto and_left_95;
        }
        and_right_95:;
        assert(tmp_and_left_value_95 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_228 = var_at_name;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[45]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 437;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[167]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_call_result_19);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_19);

            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_95 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_19);
        tmp_condition_result_104 = tmp_and_right_value_95;
        goto and_end_95;
        and_left_95:;
        tmp_condition_result_104 = tmp_and_left_value_95;
        and_end_95:;
        if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
            goto branch_yes_104;
        } else {
            goto branch_no_104;
        }
        assert(tmp_condition_result_104 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_104:;
    {
        PyObject *tmp_expression_value_229;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_subscript_value_204;
        PyObject *tmp_subscript_value_205;
        tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_230 == NULL)) {
            tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_204 = mod_consts[40];
        tmp_expression_value_229 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_230, tmp_subscript_value_204, 3);
        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_229);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_205 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_229, tmp_subscript_value_205);
        Py_DECREF(tmp_expression_value_229);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_104;
    branch_no_104:;
    {
        nuitka_bool tmp_condition_result_105;
        int tmp_and_left_truth_96;
        nuitka_bool tmp_and_left_value_96;
        nuitka_bool tmp_and_right_value_96;
        PyObject *tmp_cmp_expr_left_182;
        PyObject *tmp_cmp_expr_right_182;
        PyObject *tmp_cmp_expr_left_183;
        PyObject *tmp_cmp_expr_right_183;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_182 = var_resname;
        tmp_cmp_expr_right_182 = mod_consts[158];
        tmp_and_left_value_96 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_182, tmp_cmp_expr_right_182);
        if (tmp_and_left_value_96 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_96 = tmp_and_left_value_96 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_96 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_96);

            exception_lineno = 439;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_96 == 1) {
            goto and_right_96;
        } else {
            goto and_left_96;
        }
        and_right_96:;
        assert(tmp_and_left_value_96 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_183 = var_at_name;
        tmp_cmp_expr_right_183 = PySet_New(mod_consts[168]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_183, tmp_cmp_expr_left_183);
        Py_DECREF(tmp_cmp_expr_right_183);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_96 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_105 = tmp_and_right_value_96;
        goto and_end_96;
        and_left_96:;
        tmp_condition_result_105 = tmp_and_left_value_96;
        and_end_96:;
        if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
            goto branch_yes_105;
        } else {
            goto branch_no_105;
        }
        assert(tmp_condition_result_105 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_105:;
    {
        PyObject *tmp_expression_value_231;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_subscript_value_206;
        PyObject *tmp_subscript_value_207;
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_206 = mod_consts[40];
        tmp_expression_value_231 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_232, tmp_subscript_value_206, 3);
        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_231);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_207 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_231, tmp_subscript_value_207);
        Py_DECREF(tmp_expression_value_231);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_105;
    branch_no_105:;
    {
        nuitka_bool tmp_condition_result_106;
        int tmp_and_left_truth_97;
        nuitka_bool tmp_and_left_value_97;
        nuitka_bool tmp_and_right_value_97;
        PyObject *tmp_cmp_expr_left_184;
        PyObject *tmp_cmp_expr_right_184;
        PyObject *tmp_cmp_expr_left_185;
        PyObject *tmp_cmp_expr_right_185;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_184 = var_resname;
        tmp_cmp_expr_right_184 = PySet_New(mod_consts[169]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_184, tmp_cmp_expr_left_184);
        Py_DECREF(tmp_cmp_expr_right_184);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_97 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_97 = tmp_and_left_value_97 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_97 == 1) {
            goto and_right_97;
        } else {
            goto and_left_97;
        }
        and_right_97:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_185 = var_at_name;
        tmp_cmp_expr_right_185 = mod_consts[170];
        tmp_and_right_value_97 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_185, tmp_cmp_expr_right_185);
        if (tmp_and_right_value_97 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_106 = tmp_and_right_value_97;
        goto and_end_97;
        and_left_97:;
        tmp_condition_result_106 = tmp_and_left_value_97;
        and_end_97:;
        if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
            goto branch_yes_106;
        } else {
            goto branch_no_106;
        }
        assert(tmp_condition_result_106 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_106:;
    {
        PyObject *tmp_expression_value_233;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_subscript_value_208;
        PyObject *tmp_subscript_value_209;
        tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_234 == NULL)) {
            tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_208 = mod_consts[40];
        tmp_expression_value_233 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_234, tmp_subscript_value_208, 3);
        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_233);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_209 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_233, tmp_subscript_value_209);
        Py_DECREF(tmp_expression_value_233);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_106;
    branch_no_106:;
    {
        nuitka_bool tmp_condition_result_107;
        int tmp_and_left_truth_98;
        nuitka_bool tmp_and_left_value_98;
        nuitka_bool tmp_and_right_value_98;
        PyObject *tmp_cmp_expr_left_186;
        PyObject *tmp_cmp_expr_right_186;
        PyObject *tmp_cmp_expr_left_187;
        PyObject *tmp_cmp_expr_right_187;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_186 = var_resname;
        tmp_cmp_expr_right_186 = PySet_New(mod_consts[169]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_186, tmp_cmp_expr_left_186);
        Py_DECREF(tmp_cmp_expr_right_186);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_98 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_98 = tmp_and_left_value_98 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_98 == 1) {
            goto and_right_98;
        } else {
            goto and_left_98;
        }
        and_right_98:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_187 = var_at_name;
        tmp_cmp_expr_right_187 = mod_consts[171];
        tmp_and_right_value_98 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_187, tmp_cmp_expr_right_187);
        if (tmp_and_right_value_98 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_107 = tmp_and_right_value_98;
        goto and_end_98;
        and_left_98:;
        tmp_condition_result_107 = tmp_and_left_value_98;
        and_end_98:;
        if (tmp_condition_result_107 == NUITKA_BOOL_TRUE) {
            goto branch_yes_107;
        } else {
            goto branch_no_107;
        }
        assert(tmp_condition_result_107 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_107:;
    {
        PyObject *tmp_expression_value_235;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_subscript_value_210;
        PyObject *tmp_subscript_value_211;
        tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_236 == NULL)) {
            tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_210 = mod_consts[29];
        tmp_expression_value_235 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_236, tmp_subscript_value_210, 10);
        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_235);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_211 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_235, tmp_subscript_value_211);
        Py_DECREF(tmp_expression_value_235);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_107;
    branch_no_107:;
    {
        nuitka_bool tmp_condition_result_108;
        int tmp_and_left_truth_99;
        nuitka_bool tmp_and_left_value_99;
        nuitka_bool tmp_and_right_value_99;
        PyObject *tmp_cmp_expr_left_188;
        PyObject *tmp_cmp_expr_right_188;
        PyObject *tmp_cmp_expr_left_189;
        PyObject *tmp_cmp_expr_right_189;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_188 = var_resname;
        tmp_cmp_expr_right_188 = mod_consts[172];
        tmp_and_left_value_99 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_188, tmp_cmp_expr_right_188);
        if (tmp_and_left_value_99 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_99 = tmp_and_left_value_99 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_99 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_99);

            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_99 == 1) {
            goto and_right_99;
        } else {
            goto and_left_99;
        }
        and_right_99:;
        assert(tmp_and_left_value_99 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_189 = var_at_name;
        tmp_cmp_expr_right_189 = mod_consts[173];
        tmp_and_right_value_99 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_189, tmp_cmp_expr_right_189);
        if (tmp_and_right_value_99 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_108 = tmp_and_right_value_99;
        goto and_end_99;
        and_left_99:;
        tmp_condition_result_108 = tmp_and_left_value_99;
        and_end_99:;
        if (tmp_condition_result_108 == NUITKA_BOOL_TRUE) {
            goto branch_yes_108;
        } else {
            goto branch_no_108;
        }
        assert(tmp_condition_result_108 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_108:;
    {
        PyObject *tmp_expression_value_237;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_subscript_value_212;
        PyObject *tmp_subscript_value_213;
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_212 = mod_consts[24];
        tmp_expression_value_237 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_238, tmp_subscript_value_212, 9);
        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_237);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_213 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_237, tmp_subscript_value_213);
        Py_DECREF(tmp_expression_value_237);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_108;
    branch_no_108:;
    {
        nuitka_bool tmp_condition_result_109;
        int tmp_and_left_truth_100;
        nuitka_bool tmp_and_left_value_100;
        nuitka_bool tmp_and_right_value_100;
        PyObject *tmp_cmp_expr_left_190;
        PyObject *tmp_cmp_expr_right_190;
        PyObject *tmp_cmp_expr_left_191;
        PyObject *tmp_cmp_expr_right_191;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_190 = var_resname;
        tmp_cmp_expr_right_190 = mod_consts[174];
        tmp_and_left_value_100 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_190, tmp_cmp_expr_right_190);
        if (tmp_and_left_value_100 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_100 = tmp_and_left_value_100 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_100 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_100);

            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_100 == 1) {
            goto and_right_100;
        } else {
            goto and_left_100;
        }
        and_right_100:;
        assert(tmp_and_left_value_100 != NUITKA_BOOL_UNASSIGNED);
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_191 = var_at_name;
        tmp_cmp_expr_right_191 = mod_consts[175];
        tmp_and_right_value_100 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_191, tmp_cmp_expr_right_191);
        if (tmp_and_right_value_100 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_109 = tmp_and_right_value_100;
        goto and_end_100;
        and_left_100:;
        tmp_condition_result_109 = tmp_and_left_value_100;
        and_end_100:;
        if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
            goto branch_yes_109;
        } else {
            goto branch_no_109;
        }
        assert(tmp_condition_result_109 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_109:;
    {
        PyObject *tmp_expression_value_239;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_subscript_value_214;
        PyObject *tmp_subscript_value_215;
        tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_240 == NULL)) {
            tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_214 = mod_consts[24];
        tmp_expression_value_239 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_240, tmp_subscript_value_214, 9);
        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_239);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_215 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_239, tmp_subscript_value_215);
        Py_DECREF(tmp_expression_value_239);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_109;
    branch_no_109:;
    {
        nuitka_bool tmp_condition_result_110;
        int tmp_and_left_truth_101;
        nuitka_bool tmp_and_left_value_101;
        nuitka_bool tmp_and_right_value_101;
        PyObject *tmp_cmp_expr_left_192;
        PyObject *tmp_cmp_expr_right_192;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_call_result_20;
        int tmp_truth_name_20;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_192 = var_resname;
        tmp_cmp_expr_right_192 = PySet_New(mod_consts[169]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_192, tmp_cmp_expr_left_192);
        Py_DECREF(tmp_cmp_expr_right_192);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_101 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_101 = tmp_and_left_value_101 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_101 == 1) {
            goto and_right_101;
        } else {
            goto and_left_101;
        }
        and_right_101:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_241 = var_at_name;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[45]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 449;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[176]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_call_result_20);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_20);

            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_101 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_20);
        tmp_condition_result_110 = tmp_and_right_value_101;
        goto and_end_101;
        and_left_101:;
        tmp_condition_result_110 = tmp_and_left_value_101;
        and_end_101:;
        if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
            goto branch_yes_110;
        } else {
            goto branch_no_110;
        }
    }
    branch_yes_110:;
    {
        PyObject *tmp_expression_value_242;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_subscript_value_216;
        PyObject *tmp_subscript_value_217;
        tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_243 == NULL)) {
            tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_216 = mod_consts[35];
        tmp_expression_value_242 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_243, tmp_subscript_value_216, 8);
        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_242);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_217 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_242, tmp_subscript_value_217);
        Py_DECREF(tmp_expression_value_242);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_110;
    branch_no_110:;
    {
        nuitka_bool tmp_condition_result_111;
        PyObject *tmp_cmp_expr_left_193;
        PyObject *tmp_cmp_expr_right_193;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_193 = var_at_elem;
        tmp_cmp_expr_right_193 = mod_consts[177];
        tmp_condition_result_111 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_193, tmp_cmp_expr_right_193);
        if (tmp_condition_result_111 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_111 == NUITKA_BOOL_TRUE) {
            goto branch_yes_111;
        } else {
            goto branch_no_111;
        }
        assert(tmp_condition_result_111 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_111:;
    {
        PyObject *tmp_expression_value_244;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_subscript_value_218;
        PyObject *tmp_subscript_value_219;
        tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_245 == NULL)) {
            tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_218 = mod_consts[178];
        tmp_expression_value_244 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_245, tmp_subscript_value_218, 20);
        if (tmp_expression_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_244);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_219 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_244, tmp_subscript_value_219);
        Py_DECREF(tmp_expression_value_244);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_111;
    branch_no_111:;
    {
        nuitka_bool tmp_condition_result_112;
        PyObject *tmp_cmp_expr_left_194;
        PyObject *tmp_cmp_expr_right_194;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_194 = var_at_elem;
        tmp_cmp_expr_right_194 = mod_consts[179];
        tmp_condition_result_112 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_194, tmp_cmp_expr_right_194);
        if (tmp_condition_result_112 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
            goto branch_yes_112;
        } else {
            goto branch_no_112;
        }
        assert(tmp_condition_result_112 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_112:;
    {
        PyObject *tmp_expression_value_246;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_subscript_value_220;
        PyObject *tmp_subscript_value_221;
        tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_247 == NULL)) {
            tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_220 = mod_consts[180];
        tmp_expression_value_246 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_247, tmp_subscript_value_220, 19);
        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_246);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_221 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_246, tmp_subscript_value_221);
        Py_DECREF(tmp_expression_value_246);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_112;
    branch_no_112:;
    {
        nuitka_bool tmp_condition_result_113;
        PyObject *tmp_cmp_expr_left_195;
        PyObject *tmp_cmp_expr_right_195;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_195 = var_at_elem;
        tmp_cmp_expr_right_195 = mod_consts[181];
        tmp_condition_result_113 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_195, tmp_cmp_expr_right_195);
        if (tmp_condition_result_113 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_113 == NUITKA_BOOL_TRUE) {
            goto branch_yes_113;
        } else {
            goto branch_no_113;
        }
        assert(tmp_condition_result_113 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_113:;
    {
        PyObject *tmp_expression_value_248;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_subscript_value_222;
        PyObject *tmp_subscript_value_223;
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_222 = mod_consts[182];
        tmp_expression_value_248 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_249, tmp_subscript_value_222, 27);
        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_248);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_223 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_248, tmp_subscript_value_223);
        Py_DECREF(tmp_expression_value_248);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_113;
    branch_no_113:;
    {
        nuitka_bool tmp_condition_result_114;
        PyObject *tmp_cmp_expr_left_196;
        PyObject *tmp_cmp_expr_right_196;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_196 = var_at_elem;
        tmp_cmp_expr_right_196 = mod_consts[130];
        tmp_condition_result_114 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_196, tmp_cmp_expr_right_196);
        if (tmp_condition_result_114 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_114 == NUITKA_BOOL_TRUE) {
            goto branch_yes_114;
        } else {
            goto branch_no_114;
        }
        assert(tmp_condition_result_114 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_114:;
    {
        PyObject *tmp_expression_value_250;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_subscript_value_224;
        PyObject *tmp_subscript_value_225;
        tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_251 == NULL)) {
            tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_224 = mod_consts[183];
        tmp_expression_value_250 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_251, tmp_subscript_value_224, 25);
        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_250);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_225 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_250, tmp_subscript_value_225);
        Py_DECREF(tmp_expression_value_250);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_114;
    branch_no_114:;
    {
        nuitka_bool tmp_condition_result_115;
        PyObject *tmp_cmp_expr_left_197;
        PyObject *tmp_cmp_expr_right_197;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_197 = var_at_elem;
        tmp_cmp_expr_right_197 = mod_consts[184];
        tmp_condition_result_115 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_197, tmp_cmp_expr_right_197);
        if (tmp_condition_result_115 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_115 == NUITKA_BOOL_TRUE) {
            goto branch_yes_115;
        } else {
            goto branch_no_115;
        }
        assert(tmp_condition_result_115 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_115:;
    {
        PyObject *tmp_expression_value_252;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_subscript_value_226;
        PyObject *tmp_subscript_value_227;
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_226 = mod_consts[185];
        tmp_expression_value_252 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_253, tmp_subscript_value_226, 26);
        if (tmp_expression_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_252);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_227 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_252, tmp_subscript_value_227);
        Py_DECREF(tmp_expression_value_252);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_115;
    branch_no_115:;
    {
        nuitka_bool tmp_condition_result_116;
        PyObject *tmp_cmp_expr_left_198;
        PyObject *tmp_cmp_expr_right_198;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_198 = var_at_elem;
        tmp_cmp_expr_right_198 = mod_consts[186];
        tmp_condition_result_116 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_198, tmp_cmp_expr_right_198);
        if (tmp_condition_result_116 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_116 == NUITKA_BOOL_TRUE) {
            goto branch_yes_116;
        } else {
            goto branch_no_116;
        }
        assert(tmp_condition_result_116 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_116:;
    {
        PyObject *tmp_expression_value_254;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_subscript_value_228;
        PyObject *tmp_subscript_value_229;
        tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_255 == NULL)) {
            tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_228 = mod_consts[187];
        tmp_expression_value_254 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_255, tmp_subscript_value_228, 28);
        if (tmp_expression_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_254);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_229 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_254, tmp_subscript_value_229);
        Py_DECREF(tmp_expression_value_254);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_116;
    branch_no_116:;
    {
        nuitka_bool tmp_condition_result_117;
        PyObject *tmp_cmp_expr_left_199;
        PyObject *tmp_cmp_expr_right_199;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_199 = var_at_elem;
        tmp_cmp_expr_right_199 = mod_consts[188];
        tmp_condition_result_117 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_199, tmp_cmp_expr_right_199);
        if (tmp_condition_result_117 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_117 == NUITKA_BOOL_TRUE) {
            goto branch_yes_117;
        } else {
            goto branch_no_117;
        }
        assert(tmp_condition_result_117 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_117:;
    {
        PyObject *tmp_expression_value_256;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_subscript_value_230;
        PyObject *tmp_subscript_value_231;
        tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_257 == NULL)) {
            tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_230 = mod_consts[189];
        tmp_expression_value_256 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_257, tmp_subscript_value_230, 29);
        if (tmp_expression_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_256);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_231 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_256, tmp_subscript_value_231);
        Py_DECREF(tmp_expression_value_256);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_117;
    branch_no_117:;
    {
        nuitka_bool tmp_condition_result_118;
        PyObject *tmp_cmp_expr_left_200;
        PyObject *tmp_cmp_expr_right_200;
        CHECK_OBJECT(var_at_elem);
        tmp_cmp_expr_left_200 = var_at_elem;
        tmp_cmp_expr_right_200 = mod_consts[190];
        tmp_condition_result_118 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_200, tmp_cmp_expr_right_200);
        if (tmp_condition_result_118 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_118 == NUITKA_BOOL_TRUE) {
            goto branch_yes_118;
        } else {
            goto branch_no_118;
        }
        assert(tmp_condition_result_118 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_118:;
    {
        PyObject *tmp_expression_value_258;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_subscript_value_232;
        PyObject *tmp_subscript_value_233;
        tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_259 == NULL)) {
            tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_232 = mod_consts[191];
        tmp_expression_value_258 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_259, tmp_subscript_value_232, 31);
        if (tmp_expression_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_258);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_233 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_258, tmp_subscript_value_233);
        Py_DECREF(tmp_expression_value_258);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_118;
    branch_no_118:;
    {
        nuitka_bool tmp_condition_result_119;
        PyObject *tmp_cmp_expr_left_201;
        PyObject *tmp_cmp_expr_right_201;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_201 = var_at_name;
        tmp_cmp_expr_right_201 = mod_consts[192];
        tmp_condition_result_119 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_201, tmp_cmp_expr_right_201);
        if (tmp_condition_result_119 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_119 == NUITKA_BOOL_TRUE) {
            goto branch_yes_119;
        } else {
            goto branch_no_119;
        }
        assert(tmp_condition_result_119 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_119:;
    {
        PyObject *tmp_expression_value_260;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_subscript_value_234;
        PyObject *tmp_subscript_value_235;
        tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_261 == NULL)) {
            tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_234 = mod_consts[24];
        tmp_expression_value_260 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_261, tmp_subscript_value_234, 9);
        if (tmp_expression_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_260);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_235 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_260, tmp_subscript_value_235);
        Py_DECREF(tmp_expression_value_260);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_119;
    branch_no_119:;
    {
        nuitka_bool tmp_condition_result_120;
        PyObject *tmp_cmp_expr_left_202;
        PyObject *tmp_cmp_expr_right_202;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_202 = var_at_name;
        tmp_cmp_expr_right_202 = mod_consts[193];
        tmp_condition_result_120 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_202, tmp_cmp_expr_right_202);
        if (tmp_condition_result_120 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_120 == NUITKA_BOOL_TRUE) {
            goto branch_yes_120;
        } else {
            goto branch_no_120;
        }
        assert(tmp_condition_result_120 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_120:;
    {
        PyObject *tmp_expression_value_262;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_subscript_value_236;
        PyObject *tmp_subscript_value_237;
        tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_263 == NULL)) {
            tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_236 = mod_consts[40];
        tmp_expression_value_262 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_263, tmp_subscript_value_236, 3);
        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_262);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_237 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_262, tmp_subscript_value_237);
        Py_DECREF(tmp_expression_value_262);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_120;
    branch_no_120:;
    {
        nuitka_bool tmp_condition_result_121;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_call_result_21;
        int tmp_truth_name_21;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_264 = var_at_name;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[45]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 474;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[194]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_call_result_21);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_21);

            exception_lineno = 474;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_121 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_21);
        if (tmp_condition_result_121 == NUITKA_BOOL_TRUE) {
            goto branch_yes_121;
        } else {
            goto branch_no_121;
        }
    }
    branch_yes_121:;
    {
        PyObject *tmp_expression_value_265;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_subscript_value_238;
        PyObject *tmp_subscript_value_239;
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_238 = mod_consts[40];
        tmp_expression_value_265 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_266, tmp_subscript_value_238, 3);
        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_265);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_239 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_265, tmp_subscript_value_239);
        Py_DECREF(tmp_expression_value_265);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_121;
    branch_no_121:;
    {
        nuitka_bool tmp_condition_result_122;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_call_result_22;
        int tmp_truth_name_22;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_267 = var_at_name;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[45]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 476;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[123]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_call_result_22);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_22);

            exception_lineno = 476;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_122 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_22);
        if (tmp_condition_result_122 == NUITKA_BOOL_TRUE) {
            goto branch_yes_122;
        } else {
            goto branch_no_122;
        }
    }
    branch_yes_122:;
    {
        PyObject *tmp_expression_value_268;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_subscript_value_240;
        PyObject *tmp_subscript_value_241;
        tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_269 == NULL)) {
            tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_240 = mod_consts[31];
        tmp_expression_value_268 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_269, tmp_subscript_value_240, 13);
        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_268);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_241 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_268, tmp_subscript_value_241);
        Py_DECREF(tmp_expression_value_268);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_122;
    branch_no_122:;
    {
        nuitka_bool tmp_condition_result_123;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_call_result_23;
        int tmp_truth_name_23;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_270 = var_at_name;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[45]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 478;
        tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[176]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_call_result_23);
        if (tmp_truth_name_23 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_23);

            exception_lineno = 478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_123 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_23);
        if (tmp_condition_result_123 == NUITKA_BOOL_TRUE) {
            goto branch_yes_123;
        } else {
            goto branch_no_123;
        }
    }
    branch_yes_123:;
    {
        PyObject *tmp_expression_value_271;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_subscript_value_242;
        PyObject *tmp_subscript_value_243;
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_242 = mod_consts[27];
        tmp_expression_value_271 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_272, tmp_subscript_value_242, 7);
        if (tmp_expression_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_271);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_243 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_271, tmp_subscript_value_243);
        Py_DECREF(tmp_expression_value_271);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_123;
    branch_no_123:;
    {
        nuitka_bool tmp_condition_result_124;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_call_result_24;
        int tmp_truth_name_24;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_273 = var_at_name;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[45]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 480;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[195]);

        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_call_result_24);
        if (tmp_truth_name_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_24);

            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_124 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_24);
        if (tmp_condition_result_124 == NUITKA_BOOL_TRUE) {
            goto branch_yes_124;
        } else {
            goto branch_no_124;
        }
    }
    branch_yes_124:;
    {
        PyObject *tmp_expression_value_274;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_subscript_value_244;
        PyObject *tmp_subscript_value_245;
        tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_275 == NULL)) {
            tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_244 = mod_consts[73];
        tmp_expression_value_274 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_275, tmp_subscript_value_244, 11);
        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_274);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_245 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_274, tmp_subscript_value_245);
        Py_DECREF(tmp_expression_value_274);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_124;
    branch_no_124:;
    {
        nuitka_bool tmp_condition_result_125;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_call_result_25;
        int tmp_truth_name_25;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_276 = var_at_name;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[45]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 482;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[196]);

        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_call_result_25);
        if (tmp_truth_name_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_25);

            exception_lineno = 482;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_125 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_25);
        if (tmp_condition_result_125 == NUITKA_BOOL_TRUE) {
            goto branch_yes_125;
        } else {
            goto branch_no_125;
        }
    }
    branch_yes_125:;
    {
        PyObject *tmp_expression_value_277;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_subscript_value_246;
        PyObject *tmp_subscript_value_247;
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_246 = mod_consts[1];
        tmp_expression_value_277 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_278, tmp_subscript_value_246, 1);
        if (tmp_expression_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_277);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_247 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_277, tmp_subscript_value_247);
        Py_DECREF(tmp_expression_value_277);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_125;
    branch_no_125:;
    {
        nuitka_bool tmp_condition_result_126;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_call_result_26;
        int tmp_truth_name_26;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_279 = var_at_name;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[45]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 484;
        tmp_call_result_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[197]);

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_call_result_26);
        if (tmp_truth_name_26 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_26);

            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_126 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_26);
        if (tmp_condition_result_126 == NUITKA_BOOL_TRUE) {
            goto branch_yes_126;
        } else {
            goto branch_no_126;
        }
    }
    branch_yes_126:;
    {
        PyObject *tmp_expression_value_280;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_subscript_value_248;
        PyObject *tmp_subscript_value_249;
        tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_281 == NULL)) {
            tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_248 = mod_consts[26];
        tmp_expression_value_280 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_281, tmp_subscript_value_248, 4);
        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_280);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_249 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_280, tmp_subscript_value_249);
        Py_DECREF(tmp_expression_value_280);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_126;
    branch_no_126:;
    {
        nuitka_bool tmp_condition_result_127;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_call_result_27;
        int tmp_truth_name_27;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_282 = var_at_name;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[45]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 486;
        tmp_call_result_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_27, mod_consts[198]);

        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_27 = CHECK_IF_TRUE(tmp_call_result_27);
        if (tmp_truth_name_27 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_27);

            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_127 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_27);
        if (tmp_condition_result_127 == NUITKA_BOOL_TRUE) {
            goto branch_yes_127;
        } else {
            goto branch_no_127;
        }
    }
    branch_yes_127:;
    {
        PyObject *tmp_expression_value_283;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_subscript_value_250;
        PyObject *tmp_subscript_value_251;
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_250 = mod_consts[92];
        tmp_expression_value_283 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_284, tmp_subscript_value_250, 6);
        if (tmp_expression_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_283);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_251 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_283, tmp_subscript_value_251);
        Py_DECREF(tmp_expression_value_283);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_127;
    branch_no_127:;
    {
        bool tmp_condition_result_128;
        PyObject *tmp_cmp_expr_left_203;
        PyObject *tmp_cmp_expr_right_203;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_203 = var_at_name;
        tmp_cmp_expr_right_203 = PySet_New(mod_consts[199]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_203, tmp_cmp_expr_left_203);
        Py_DECREF(tmp_cmp_expr_right_203);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_128 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_128 != false) {
            goto branch_yes_128;
        } else {
            goto branch_no_128;
        }
    }
    branch_yes_128:;
    {
        PyObject *tmp_expression_value_285;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_subscript_value_252;
        PyObject *tmp_subscript_value_253;
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_252 = mod_consts[31];
        tmp_expression_value_285 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_286, tmp_subscript_value_252, 13);
        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_285);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_253 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_285, tmp_subscript_value_253);
        Py_DECREF(tmp_expression_value_285);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_128;
    branch_no_128:;
    {
        nuitka_bool tmp_condition_result_129;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_call_result_28;
        int tmp_truth_name_28;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_287 = var_at_name;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[45]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 490;
        tmp_call_result_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[200]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_28 = CHECK_IF_TRUE(tmp_call_result_28);
        if (tmp_truth_name_28 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_28);

            exception_lineno = 490;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_129 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_28);
        if (tmp_condition_result_129 == NUITKA_BOOL_TRUE) {
            goto branch_yes_129;
        } else {
            goto branch_no_129;
        }
    }
    branch_yes_129:;
    {
        PyObject *tmp_expression_value_288;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_subscript_value_254;
        PyObject *tmp_subscript_value_255;
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_254 = mod_consts[31];
        tmp_expression_value_288 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_289, tmp_subscript_value_254, 13);
        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_288);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_255 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_288, tmp_subscript_value_255);
        Py_DECREF(tmp_expression_value_288);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_129;
    branch_no_129:;
    {
        nuitka_bool tmp_condition_result_130;
        int tmp_and_left_truth_102;
        nuitka_bool tmp_and_left_value_102;
        nuitka_bool tmp_and_right_value_102;
        PyObject *tmp_cmp_expr_left_204;
        PyObject *tmp_cmp_expr_right_204;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_call_result_29;
        int tmp_truth_name_29;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_204 = var_resname;
        tmp_cmp_expr_right_204 = PySet_New(mod_consts[201]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_204, tmp_cmp_expr_left_204);
        Py_DECREF(tmp_cmp_expr_right_204);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_102 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_102 = tmp_and_left_value_102 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_102 == 1) {
            goto and_right_102;
        } else {
            goto and_left_102;
        }
        and_right_102:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_290 = var_at_name;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[45]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 492;
        tmp_call_result_29 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[196]);

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_29 = CHECK_IF_TRUE(tmp_call_result_29);
        if (tmp_truth_name_29 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_29);

            exception_lineno = 492;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_102 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_29);
        tmp_condition_result_130 = tmp_and_right_value_102;
        goto and_end_102;
        and_left_102:;
        tmp_condition_result_130 = tmp_and_left_value_102;
        and_end_102:;
        if (tmp_condition_result_130 == NUITKA_BOOL_TRUE) {
            goto branch_yes_130;
        } else {
            goto branch_no_130;
        }
    }
    branch_yes_130:;
    {
        PyObject *tmp_expression_value_291;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_subscript_value_256;
        PyObject *tmp_subscript_value_257;
        tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_292 == NULL)) {
            tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_256 = mod_consts[1];
        tmp_expression_value_291 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_292, tmp_subscript_value_256, 1);
        if (tmp_expression_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_291);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_257 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_291, tmp_subscript_value_257);
        Py_DECREF(tmp_expression_value_291);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_130;
    branch_no_130:;
    {
        nuitka_bool tmp_condition_result_131;
        int tmp_and_left_truth_103;
        nuitka_bool tmp_and_left_value_103;
        nuitka_bool tmp_and_right_value_103;
        PyObject *tmp_cmp_expr_left_205;
        PyObject *tmp_cmp_expr_right_205;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_call_result_30;
        int tmp_truth_name_30;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_205 = var_resname;
        tmp_cmp_expr_right_205 = PySet_New(mod_consts[201]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_205, tmp_cmp_expr_left_205);
        Py_DECREF(tmp_cmp_expr_right_205);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_103 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_103 = tmp_and_left_value_103 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_103 == 1) {
            goto and_right_103;
        } else {
            goto and_left_103;
        }
        and_right_103:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_293 = var_at_name;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[45]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 494;
        tmp_call_result_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[202]);

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_30 = CHECK_IF_TRUE(tmp_call_result_30);
        if (tmp_truth_name_30 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_30);

            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_103 = tmp_truth_name_30 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_30);
        tmp_condition_result_131 = tmp_and_right_value_103;
        goto and_end_103;
        and_left_103:;
        tmp_condition_result_131 = tmp_and_left_value_103;
        and_end_103:;
        if (tmp_condition_result_131 == NUITKA_BOOL_TRUE) {
            goto branch_yes_131;
        } else {
            goto branch_no_131;
        }
    }
    branch_yes_131:;
    {
        PyObject *tmp_expression_value_294;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_subscript_value_258;
        PyObject *tmp_subscript_value_259;
        tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_295 == NULL)) {
            tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_258 = mod_consts[26];
        tmp_expression_value_294 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_295, tmp_subscript_value_258, 4);
        if (tmp_expression_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_294);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_259 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_294, tmp_subscript_value_259);
        Py_DECREF(tmp_expression_value_294);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_131;
    branch_no_131:;
    {
        nuitka_bool tmp_condition_result_132;
        int tmp_and_left_truth_104;
        nuitka_bool tmp_and_left_value_104;
        nuitka_bool tmp_and_right_value_104;
        PyObject *tmp_cmp_expr_left_206;
        PyObject *tmp_cmp_expr_right_206;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_call_result_31;
        int tmp_truth_name_31;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_206 = var_resname;
        tmp_cmp_expr_right_206 = PySet_New(mod_consts[201]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_206, tmp_cmp_expr_left_206);
        Py_DECREF(tmp_cmp_expr_right_206);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_104 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_104 = tmp_and_left_value_104 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_104 == 1) {
            goto and_right_104;
        } else {
            goto and_left_104;
        }
        and_right_104:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_296 = var_at_name;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[45]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 496;
        tmp_call_result_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[176]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_31 = CHECK_IF_TRUE(tmp_call_result_31);
        if (tmp_truth_name_31 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_31);

            exception_lineno = 496;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_104 = tmp_truth_name_31 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_31);
        tmp_condition_result_132 = tmp_and_right_value_104;
        goto and_end_104;
        and_left_104:;
        tmp_condition_result_132 = tmp_and_left_value_104;
        and_end_104:;
        if (tmp_condition_result_132 == NUITKA_BOOL_TRUE) {
            goto branch_yes_132;
        } else {
            goto branch_no_132;
        }
    }
    branch_yes_132:;
    {
        PyObject *tmp_expression_value_297;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_subscript_value_260;
        PyObject *tmp_subscript_value_261;
        tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_298 == NULL)) {
            tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_260 = mod_consts[27];
        tmp_expression_value_297 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_298, tmp_subscript_value_260, 7);
        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_297);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_261 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_297, tmp_subscript_value_261);
        Py_DECREF(tmp_expression_value_297);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_132;
    branch_no_132:;
    {
        nuitka_bool tmp_condition_result_133;
        int tmp_and_left_truth_105;
        nuitka_bool tmp_and_left_value_105;
        nuitka_bool tmp_and_right_value_105;
        PyObject *tmp_cmp_expr_left_207;
        PyObject *tmp_cmp_expr_right_207;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_call_result_32;
        int tmp_truth_name_32;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_207 = var_resname;
        tmp_cmp_expr_right_207 = PySet_New(mod_consts[201]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_207, tmp_cmp_expr_left_207);
        Py_DECREF(tmp_cmp_expr_right_207);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_105 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_105 = tmp_and_left_value_105 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_105 == 1) {
            goto and_right_105;
        } else {
            goto and_left_105;
        }
        and_right_105:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_299 = var_at_name;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[45]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 498;
        tmp_call_result_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[200]);

        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_32 = CHECK_IF_TRUE(tmp_call_result_32);
        if (tmp_truth_name_32 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_32);

            exception_lineno = 498;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_105 = tmp_truth_name_32 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_32);
        tmp_condition_result_133 = tmp_and_right_value_105;
        goto and_end_105;
        and_left_105:;
        tmp_condition_result_133 = tmp_and_left_value_105;
        and_end_105:;
        if (tmp_condition_result_133 == NUITKA_BOOL_TRUE) {
            goto branch_yes_133;
        } else {
            goto branch_no_133;
        }
    }
    branch_yes_133:;
    {
        PyObject *tmp_expression_value_300;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_subscript_value_262;
        PyObject *tmp_subscript_value_263;
        tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_301 == NULL)) {
            tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_262 = mod_consts[31];
        tmp_expression_value_300 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_301, tmp_subscript_value_262, 13);
        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_300);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_263 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_300, tmp_subscript_value_263);
        Py_DECREF(tmp_expression_value_300);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_133;
    branch_no_133:;
    {
        nuitka_bool tmp_condition_result_134;
        int tmp_and_left_truth_106;
        nuitka_bool tmp_and_left_value_106;
        nuitka_bool tmp_and_right_value_106;
        PyObject *tmp_cmp_expr_left_208;
        PyObject *tmp_cmp_expr_right_208;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_call_result_33;
        int tmp_truth_name_33;
        CHECK_OBJECT(var_resname);
        tmp_cmp_expr_left_208 = var_resname;
        tmp_cmp_expr_right_208 = PySet_New(mod_consts[201]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_208, tmp_cmp_expr_left_208);
        Py_DECREF(tmp_cmp_expr_right_208);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_106 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_106 = tmp_and_left_value_106 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_106 == 1) {
            goto and_right_106;
        } else {
            goto and_left_106;
        }
        and_right_106:;
        if (var_at_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_302 = var_at_name;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[45]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 500;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[203]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_33 = CHECK_IF_TRUE(tmp_call_result_33);
        if (tmp_truth_name_33 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_33);

            exception_lineno = 500;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_106 = tmp_truth_name_33 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_33);
        tmp_condition_result_134 = tmp_and_right_value_106;
        goto and_end_106;
        and_left_106:;
        tmp_condition_result_134 = tmp_and_left_value_106;
        and_end_106:;
        if (tmp_condition_result_134 == NUITKA_BOOL_TRUE) {
            goto branch_yes_134;
        } else {
            goto branch_no_134;
        }
    }
    branch_yes_134:;
    {
        PyObject *tmp_expression_value_303;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_subscript_value_264;
        PyObject *tmp_subscript_value_265;
        tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_304 == NULL)) {
            tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_264 = mod_consts[14];
        tmp_expression_value_303 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_304, tmp_subscript_value_264, 15);
        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_typekey == NULL) {
            Py_DECREF(tmp_expression_value_303);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_265 = var_typekey;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_303, tmp_subscript_value_265);
        Py_DECREF(tmp_expression_value_303);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_134;
    branch_no_134:;
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[205]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_at_name == NULL) {
            Py_DECREF(tmp_called_value_34);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_format_value_1 = var_at_name;
        tmp_format_spec_1 = mod_consts[206];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[207];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_resname);
            tmp_format_value_2 = var_resname;
            tmp_format_spec_2 = mod_consts[206];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 503;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[208];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[206], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    tmp_return_value = mod_consts[210];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_134:;
    branch_end_133:;
    branch_end_132:;
    branch_end_131:;
    branch_end_130:;
    branch_end_129:;
    branch_end_128:;
    branch_end_127:;
    branch_end_126:;
    branch_end_125:;
    branch_end_124:;
    branch_end_123:;
    branch_end_122:;
    branch_end_121:;
    branch_end_120:;
    branch_end_119:;
    branch_end_118:;
    branch_end_117:;
    branch_end_116:;
    branch_end_115:;
    branch_end_114:;
    branch_end_113:;
    branch_end_112:;
    branch_end_111:;
    branch_end_110:;
    branch_end_109:;
    branch_end_108:;
    branch_end_107:;
    branch_end_106:;
    branch_end_105:;
    branch_end_104:;
    branch_end_103:;
    branch_end_102:;
    branch_end_101:;
    branch_end_100:;
    branch_end_99:;
    branch_end_98:;
    branch_end_97:;
    branch_end_96:;
    branch_end_95:;
    branch_end_94:;
    branch_end_93:;
    branch_end_92:;
    branch_end_91:;
    branch_end_90:;
    branch_end_89:;
    branch_end_88:;
    branch_end_87:;
    branch_end_86:;
    branch_end_85:;
    branch_end_84:;
    branch_end_83:;
    branch_end_82:;
    branch_end_81:;
    branch_end_80:;
    branch_end_79:;
    branch_end_78:;
    branch_end_77:;
    branch_end_76:;
    branch_end_75:;
    branch_end_74:;
    branch_end_73:;
    branch_end_72:;
    branch_end_71:;
    branch_end_70:;
    branch_end_69:;
    branch_end_68:;
    branch_end_67:;
    branch_end_66:;
    branch_end_65:;
    branch_end_64:;
    branch_end_63:;
    branch_end_62:;
    branch_end_61:;
    branch_end_60:;
    branch_end_59:;
    branch_end_58:;
    branch_end_57:;
    branch_end_56:;
    branch_end_55:;
    branch_end_54:;
    branch_end_53:;
    branch_end_52:;
    branch_end_51:;
    branch_end_50:;
    branch_end_49:;
    branch_end_48:;
    branch_end_47:;
    branch_end_46:;
    branch_end_45:;
    branch_end_44:;
    branch_end_43:;
    branch_end_42:;
    branch_end_41:;
    branch_end_40:;
    branch_end_39:;
    branch_end_38:;
    branch_end_37:;
    branch_end_36:;
    branch_end_35:;
    branch_end_34:;
    branch_end_33:;
    branch_end_32:;
    branch_end_31:;
    branch_end_30:;
    branch_end_29:;
    branch_end_28:;
    branch_end_27:;
    branch_end_26:;
    branch_end_25:;
    branch_end_24:;
    branch_end_23:;
    branch_end_22:;
    branch_end_21:;
    branch_end_20:;
    branch_end_19:;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_283a51625ddea0fbb54bb9a97ed76eaa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_283a51625ddea0fbb54bb9a97ed76eaa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_283a51625ddea0fbb54bb9a97ed76eaa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_283a51625ddea0fbb54bb9a97ed76eaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_283a51625ddea0fbb54bb9a97ed76eaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_283a51625ddea0fbb54bb9a97ed76eaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_283a51625ddea0fbb54bb9a97ed76eaa,
        type_description_1,
        par_atom,
        par_rtype,
        var_typekey,
        var_resname,
        var_het_atm,
        var_at_name,
        var_at_elem
    );


    // Release cached frame if used for exception.
    if (frame_283a51625ddea0fbb54bb9a97ed76eaa == cache_frame_283a51625ddea0fbb54bb9a97ed76eaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_283a51625ddea0fbb54bb9a97ed76eaa);
        cache_frame_283a51625ddea0fbb54bb9a97ed76eaa = NULL;
    }

    assertFrameObject(frame_283a51625ddea0fbb54bb9a97ed76eaa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_typekey);
    var_typekey = NULL;
    CHECK_OBJECT(var_resname);
    Py_DECREF(var_resname);
    var_resname = NULL;
    CHECK_OBJECT(var_het_atm);
    Py_DECREF(var_het_atm);
    var_het_atm = NULL;
    Py_XDECREF(var_at_name);
    var_at_name = NULL;
    CHECK_OBJECT(var_at_elem);
    Py_DECREF(var_at_elem);
    var_at_elem = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_typekey);
    var_typekey = NULL;
    Py_XDECREF(var_resname);
    var_resname = NULL;
    Py_XDECREF(var_het_atm);
    var_het_atm = NULL;
    Py_XDECREF(var_at_name);
    var_at_name = NULL;
    Py_XDECREF(var_at_elem);
    var_at_elem = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_atom);
    Py_DECREF(par_atom);
    CHECK_OBJECT(par_rtype);
    Py_DECREF(par_rtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_atom);
    Py_DECREF(par_atom);
    CHECK_OBJECT(par_rtype);
    Py_DECREF(par_rtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *var_fp = NULL;
    PyObject *var_vertex_list = NULL;
    PyObject *var_l = NULL;
    PyObject *var_sl = NULL;
    PyObject *var_vl = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_1cf288fa6609a915a9ef0184e52a1d7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_6ca8e58c2d1229abd75b2e6538732ff9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1cf288fa6609a915a9ef0184e52a1d7a = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1cf288fa6609a915a9ef0184e52a1d7a)) {
        Py_XDECREF(cache_frame_1cf288fa6609a915a9ef0184e52a1d7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cf288fa6609a915a9ef0184e52a1d7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cf288fa6609a915a9ef0184e52a1d7a = MAKE_FUNCTION_FRAME(codeobj_1cf288fa6609a915a9ef0184e52a1d7a, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1cf288fa6609a915a9ef0184e52a1d7a->m_type_description == NULL);
    frame_1cf288fa6609a915a9ef0184e52a1d7a = cache_frame_1cf288fa6609a915a9ef0184e52a1d7a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1cf288fa6609a915a9ef0184e52a1d7a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1cf288fa6609a915a9ef0184e52a1d7a) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(par_filename);
        tmp_open_filename_1 = par_filename;
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[212]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 509;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[213]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_fp == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_fp = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New(0);
        assert(var_vertex_list == NULL);
        var_vertex_list = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_fp);
        tmp_iter_arg_1 = var_fp;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 511;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_9;
            Py_INCREF(var_l);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_l);
        tmp_expression_value_3 = var_l;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[214]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 512;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_sl;
            var_sl = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_sl);
        tmp_len_arg_1 = var_sl;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_1 = mod_consts[24];
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(var_sl);
            tmp_expression_value_4 = var_sl;
            tmp_subscript_value_1 = mod_consts[215];
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2)) {
            Py_XDECREF(cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2 = MAKE_FUNCTION_FRAME(codeobj_6ca8e58c2d1229abd75b2e6538732ff9, module_Bio$PDB$ResidueDepth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2->m_type_description == NULL);
        frame_6ca8e58c2d1229abd75b2e6538732ff9_2 = cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6ca8e58c2d1229abd75b2e6538732ff9_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6ca8e58c2d1229abd75b2e6538732ff9_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 516;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_15;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_float_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_float_arg_1 = outline_0_var_x;
            tmp_append_value_1 = TO_FLOAT(tmp_float_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 516;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_11 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6ca8e58c2d1229abd75b2e6538732ff9_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_6ca8e58c2d1229abd75b2e6538732ff9_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6ca8e58c2d1229abd75b2e6538732ff9_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6ca8e58c2d1229abd75b2e6538732ff9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6ca8e58c2d1229abd75b2e6538732ff9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6ca8e58c2d1229abd75b2e6538732ff9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6ca8e58c2d1229abd75b2e6538732ff9_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_6ca8e58c2d1229abd75b2e6538732ff9_2 == cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2);
            cache_frame_6ca8e58c2d1229abd75b2e6538732ff9_2 = NULL;
        }

        assertFrameObject(frame_6ca8e58c2d1229abd75b2e6538732ff9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 516;
        goto try_except_handler_5;
        outline_result_1:;
        {
            PyObject *old = var_vl;
            var_vl = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_vertex_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[216]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_1 = var_vertex_list;
        CHECK_OBJECT(var_vl);
        tmp_args_element_value_1 = var_vl;
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 517;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[217], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 511;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_1cf288fa6609a915a9ef0184e52a1d7a, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_1cf288fa6609a915a9ef0184e52a1d7a, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_TRACEBACK(PyThreadState_GET());
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 511;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame) frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 509;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame) frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 511;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[218]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);

            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 511;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[218]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[219]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[220]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_vertex_list == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[216]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_vertex_list;
        frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame.f_lineno = 518;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cf288fa6609a915a9ef0184e52a1d7a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cf288fa6609a915a9ef0184e52a1d7a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1cf288fa6609a915a9ef0184e52a1d7a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cf288fa6609a915a9ef0184e52a1d7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cf288fa6609a915a9ef0184e52a1d7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cf288fa6609a915a9ef0184e52a1d7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cf288fa6609a915a9ef0184e52a1d7a,
        type_description_1,
        par_filename,
        var_fp,
        var_vertex_list,
        var_l,
        var_sl,
        var_vl
    );


    // Release cached frame if used for exception.
    if (frame_1cf288fa6609a915a9ef0184e52a1d7a == cache_frame_1cf288fa6609a915a9ef0184e52a1d7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1cf288fa6609a915a9ef0184e52a1d7a);
        cache_frame_1cf288fa6609a915a9ef0184e52a1d7a = NULL;
    }

    assertFrameObject(frame_1cf288fa6609a915a9ef0184e52a1d7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fp);
    Py_DECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_vertex_list);
    var_vertex_list = NULL;
    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_sl);
    var_sl = NULL;
    Py_XDECREF(var_vl);
    var_vl = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fp);
    var_fp = NULL;
    Py_XDECREF(var_vertex_list);
    var_vertex_list = NULL;
    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_sl);
    var_sl = NULL;
    Py_XDECREF(var_vl);
    var_vl = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__3_get_surface(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_PDB_TO_XYZR = python_pars[1];
    PyObject *par_MSMS = python_pars[2];
    PyObject *var_atom_list = NULL;
    PyObject *var_xyz_tmp = NULL;
    PyObject *var_pdb_to_xyzr = NULL;
    PyObject *var_atom = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_radius = NULL;
    PyObject *var_surface_tmp = NULL;
    PyObject *var_make_surface = NULL;
    PyObject *var_surface_file = NULL;
    PyObject *var_surface = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_cc0f9aade3484862275554d0414550a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_cc0f9aade3484862275554d0414550a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc0f9aade3484862275554d0414550a3)) {
        Py_XDECREF(cache_frame_cc0f9aade3484862275554d0414550a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc0f9aade3484862275554d0414550a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc0f9aade3484862275554d0414550a3 = MAKE_FUNCTION_FRAME(codeobj_cc0f9aade3484862275554d0414550a3, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cc0f9aade3484862275554d0414550a3->m_type_description == NULL);
    frame_cc0f9aade3484862275554d0414550a3 = cache_frame_cc0f9aade3484862275554d0414550a3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc0f9aade3484862275554d0414550a3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc0f9aade3484862275554d0414550a3) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_PDB_TO_XYZR);
        tmp_cmp_expr_left_1 = par_PDB_TO_XYZR;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[205]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[222];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 537;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_3 = par_model;
        tmp_args_element_value_4 = mod_consts[226];
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[225],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_atom_list == NULL);
        var_atom_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 544;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[228]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xyz_tmp == NULL);
        var_xyz_tmp = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(var_xyz_tmp);
        tmp_open_filename_1 = var_xyz_tmp;
        tmp_open_mode_1 = mod_consts[229];
        tmp_assign_source_3 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[212]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 545;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[213]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_7 = tmp_with_1__enter;
        assert(var_pdb_to_xyzr == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_pdb_to_xyzr = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_atom_list);
        tmp_iter_arg_1 = var_atom_list;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 546;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_atom;
            var_atom = tmp_assign_source_10;
            Py_INCREF(var_atom);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_atom);
        tmp_expression_value_4 = var_atom;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[230]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 547;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 547;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 547;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 547;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[231];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 547;
            goto try_except_handler_7;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_6;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_15;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_16;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_17;
            Py_INCREF(var_z);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_atom);
        tmp_tuple_element_1 = var_atom;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[233]);
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 548;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_radius;
            var_radius = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        if (var_pdb_to_xyzr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[234]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_5 = var_pdb_to_xyzr;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[235]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_x);
        tmp_format_value_1 = var_x;
        tmp_format_spec_1 = mod_consts[236];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 549;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_string_concat_values_1 = PyTuple_New(8);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[237];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_y);
            tmp_format_value_2 = var_y;
            tmp_format_spec_2 = mod_consts[236];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[237];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            CHECK_OBJECT(var_z);
            tmp_format_value_3 = var_z;
            tmp_format_spec_3 = mod_consts[236];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[237];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_2);
            CHECK_OBJECT(var_radius);
            tmp_format_value_4 = var_radius;
            tmp_format_spec_4 = mod_consts[238];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[239];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[206], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 549;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 549;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 546;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_cc0f9aade3484862275554d0414550a3, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_cc0f9aade3484862275554d0414550a3, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_TRACEBACK(PyThreadState_GET());
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 546;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 546;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cc0f9aade3484862275554d0414550a3->m_frame) frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 545;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cc0f9aade3484862275554d0414550a3->m_frame) frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 546;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[218]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);

            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 546;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[218]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 552;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[228]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_surface_tmp == NULL);
        var_surface_tmp = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_MSMS);
        tmp_left_value_2 = par_MSMS;
        tmp_right_value_1 = mod_consts[240];
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_2, tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 553;
        tmp_right_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[228]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_MSMS;
            assert(old != NULL);
            par_MSMS = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_MSMS);
        tmp_left_value_3 = par_MSMS;
        CHECK_OBJECT(var_xyz_tmp);
        tmp_tuple_element_3 = var_xyz_tmp;
        tmp_right_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_surface_tmp);
        tmp_tuple_element_3 = var_surface_tmp;
        PyTuple_SET_ITEM0(tmp_right_value_3, 1, tmp_tuple_element_3);
        tmp_assign_source_22 = BINARY_OPERATION_MOD_OBJECT_OBJECT_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_make_surface == NULL);
        var_make_surface = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[241]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[242]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_make_surface);
        tmp_tuple_element_4 = var_make_surface;
        tmp_args_value_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[243]);
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 555;
        tmp_call_result_5 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_surface_tmp);
        tmp_left_value_4 = var_surface_tmp;
        tmp_right_value_4 = mod_consts[244];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_4, tmp_right_value_4);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_surface_file == NULL);
        var_surface_file = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[246]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_surface_file);
        tmp_args_element_value_9 = var_surface_file;
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 557;
        tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[247], tmp_args_element_value_9);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        tmp_left_value_5 = mod_consts[248];
        CHECK_OBJECT(var_make_surface);
        tmp_right_value_5 = var_make_surface;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_5, tmp_right_value_5);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 558;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 558;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[249]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_surface_file);
        tmp_args_element_value_10 = var_surface_file;
        frame_cc0f9aade3484862275554d0414550a3->m_frame.f_lineno = 563;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_surface == NULL);
        var_surface = tmp_assign_source_24;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc0f9aade3484862275554d0414550a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc0f9aade3484862275554d0414550a3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc0f9aade3484862275554d0414550a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc0f9aade3484862275554d0414550a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc0f9aade3484862275554d0414550a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc0f9aade3484862275554d0414550a3,
        type_description_1,
        par_model,
        par_PDB_TO_XYZR,
        par_MSMS,
        var_atom_list,
        var_xyz_tmp,
        var_pdb_to_xyzr,
        var_atom,
        var_x,
        var_y,
        var_z,
        var_radius,
        var_surface_tmp,
        var_make_surface,
        var_surface_file,
        var_surface
    );


    // Release cached frame if used for exception.
    if (frame_cc0f9aade3484862275554d0414550a3 == cache_frame_cc0f9aade3484862275554d0414550a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cc0f9aade3484862275554d0414550a3);
        cache_frame_cc0f9aade3484862275554d0414550a3 = NULL;
    }

    assertFrameObject(frame_cc0f9aade3484862275554d0414550a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_surface);
    tmp_return_value = var_surface;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_MSMS);
    Py_DECREF(par_MSMS);
    par_MSMS = NULL;
    CHECK_OBJECT(var_atom_list);
    Py_DECREF(var_atom_list);
    var_atom_list = NULL;
    CHECK_OBJECT(var_xyz_tmp);
    Py_DECREF(var_xyz_tmp);
    var_xyz_tmp = NULL;
    Py_XDECREF(var_pdb_to_xyzr);
    var_pdb_to_xyzr = NULL;
    Py_XDECREF(var_atom);
    var_atom = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_radius);
    var_radius = NULL;
    CHECK_OBJECT(var_surface_tmp);
    Py_DECREF(var_surface_tmp);
    var_surface_tmp = NULL;
    CHECK_OBJECT(var_make_surface);
    Py_DECREF(var_make_surface);
    var_make_surface = NULL;
    CHECK_OBJECT(var_surface_file);
    Py_DECREF(var_surface_file);
    var_surface_file = NULL;
    CHECK_OBJECT(var_surface);
    Py_DECREF(var_surface);
    var_surface = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_MSMS);
    par_MSMS = NULL;
    Py_XDECREF(var_atom_list);
    var_atom_list = NULL;
    Py_XDECREF(var_xyz_tmp);
    var_xyz_tmp = NULL;
    Py_XDECREF(var_pdb_to_xyzr);
    var_pdb_to_xyzr = NULL;
    Py_XDECREF(var_atom);
    var_atom = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_radius);
    var_radius = NULL;
    Py_XDECREF(var_surface_tmp);
    var_surface_tmp = NULL;
    Py_XDECREF(var_make_surface);
    var_make_surface = NULL;
    Py_XDECREF(var_surface_file);
    var_surface_file = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_PDB_TO_XYZR);
    Py_DECREF(par_PDB_TO_XYZR);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_PDB_TO_XYZR);
    Py_DECREF(par_PDB_TO_XYZR);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__4_min_dist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_coord = python_pars[0];
    PyObject *par_surface = python_pars[1];
    PyObject *var_d = NULL;
    PyObject *var_d2 = NULL;
    struct Nuitka_FrameObject *frame_6903d0c995738ae0a02069b249325a5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6903d0c995738ae0a02069b249325a5e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6903d0c995738ae0a02069b249325a5e)) {
        Py_XDECREF(cache_frame_6903d0c995738ae0a02069b249325a5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6903d0c995738ae0a02069b249325a5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6903d0c995738ae0a02069b249325a5e = MAKE_FUNCTION_FRAME(codeobj_6903d0c995738ae0a02069b249325a5e, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6903d0c995738ae0a02069b249325a5e->m_type_description == NULL);
    frame_6903d0c995738ae0a02069b249325a5e = cache_frame_6903d0c995738ae0a02069b249325a5e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6903d0c995738ae0a02069b249325a5e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6903d0c995738ae0a02069b249325a5e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_surface);
        tmp_left_value_1 = par_surface;
        CHECK_OBJECT(par_coord);
        tmp_right_value_1 = par_coord;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[219]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[251]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_left_value_2 = var_d;
        CHECK_OBJECT(var_d);
        tmp_right_value_2 = var_d;
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 570;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[1];
        frame_6903d0c995738ae0a02069b249325a5e->m_frame.f_lineno = 570;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_d2 == NULL);
        var_d2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[219]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[252]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[253]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_d2);
        tmp_args_element_value_4 = var_d2;
        frame_6903d0c995738ae0a02069b249325a5e->m_frame.f_lineno = 571;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 571;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6903d0c995738ae0a02069b249325a5e->m_frame.f_lineno = 571;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6903d0c995738ae0a02069b249325a5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6903d0c995738ae0a02069b249325a5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6903d0c995738ae0a02069b249325a5e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6903d0c995738ae0a02069b249325a5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6903d0c995738ae0a02069b249325a5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6903d0c995738ae0a02069b249325a5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6903d0c995738ae0a02069b249325a5e,
        type_description_1,
        par_coord,
        par_surface,
        var_d,
        var_d2
    );


    // Release cached frame if used for exception.
    if (frame_6903d0c995738ae0a02069b249325a5e == cache_frame_6903d0c995738ae0a02069b249325a5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6903d0c995738ae0a02069b249325a5e);
        cache_frame_6903d0c995738ae0a02069b249325a5e = NULL;
    }

    assertFrameObject(frame_6903d0c995738ae0a02069b249325a5e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    CHECK_OBJECT(var_d2);
    Py_DECREF(var_d2);
    var_d2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_d2);
    var_d2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_coord);
    Py_DECREF(par_coord);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_coord);
    Py_DECREF(par_coord);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__5_residue_depth(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_residue = python_pars[0];
    PyObject *par_surface = python_pars[1];
    PyObject *var_atom_list = NULL;
    PyObject *var_length = NULL;
    PyObject *var_d = NULL;
    PyObject *var_atom = NULL;
    PyObject *var_coord = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_cb31dd89a16d7b25544763f160e71c22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb31dd89a16d7b25544763f160e71c22 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cb31dd89a16d7b25544763f160e71c22)) {
        Py_XDECREF(cache_frame_cb31dd89a16d7b25544763f160e71c22);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb31dd89a16d7b25544763f160e71c22 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb31dd89a16d7b25544763f160e71c22 = MAKE_FUNCTION_FRAME(codeobj_cb31dd89a16d7b25544763f160e71c22, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cb31dd89a16d7b25544763f160e71c22->m_type_description == NULL);
    frame_cb31dd89a16d7b25544763f160e71c22 = cache_frame_cb31dd89a16d7b25544763f160e71c22;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb31dd89a16d7b25544763f160e71c22);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb31dd89a16d7b25544763f160e71c22) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_residue);
        tmp_called_instance_1 = par_residue;
        frame_cb31dd89a16d7b25544763f160e71c22->m_frame.f_lineno = 580;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[255]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_atom_list == NULL);
        var_atom_list = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_atom_list);
        tmp_len_arg_1 = var_atom_list;
        tmp_assign_source_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[8];
        assert(var_d == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_d = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_atom_list);
        tmp_iter_arg_1 = var_atom_list;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 583;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_atom;
            var_atom = tmp_assign_source_6;
            Py_INCREF(var_atom);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_atom);
        tmp_called_instance_2 = var_atom;
        frame_cb31dd89a16d7b25544763f160e71c22->m_frame.f_lineno = 584;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[256]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_coord;
            var_coord = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[257]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_left_value_1 = var_d;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_coord);
        tmp_args_element_value_1 = var_coord;
        if (par_surface == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[259]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_surface;
        frame_cb31dd89a16d7b25544763f160e71c22->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 583;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        if (var_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[257]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_2 = var_d;
        CHECK_OBJECT(var_length);
        tmp_right_value_2 = var_length;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb31dd89a16d7b25544763f160e71c22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb31dd89a16d7b25544763f160e71c22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb31dd89a16d7b25544763f160e71c22);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb31dd89a16d7b25544763f160e71c22, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb31dd89a16d7b25544763f160e71c22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb31dd89a16d7b25544763f160e71c22, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb31dd89a16d7b25544763f160e71c22,
        type_description_1,
        par_residue,
        par_surface,
        var_atom_list,
        var_length,
        var_d,
        var_atom,
        var_coord
    );


    // Release cached frame if used for exception.
    if (frame_cb31dd89a16d7b25544763f160e71c22 == cache_frame_cb31dd89a16d7b25544763f160e71c22) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cb31dd89a16d7b25544763f160e71c22);
        cache_frame_cb31dd89a16d7b25544763f160e71c22 = NULL;
    }

    assertFrameObject(frame_cb31dd89a16d7b25544763f160e71c22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_atom_list);
    Py_DECREF(var_atom_list);
    var_atom_list = NULL;
    CHECK_OBJECT(var_length);
    Py_DECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_atom);
    var_atom = NULL;
    Py_XDECREF(var_coord);
    var_coord = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_atom_list);
    var_atom_list = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    Py_XDECREF(var_atom);
    var_atom = NULL;
    Py_XDECREF(var_coord);
    var_coord = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_residue);
    Py_DECREF(par_residue);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_residue);
    Py_DECREF(par_residue);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__6_ca_depth(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_residue = python_pars[0];
    PyObject *par_surface = python_pars[1];
    PyObject *var_ca = NULL;
    PyObject *var_coord = NULL;
    struct Nuitka_FrameObject *frame_ac7ed95f1a80fccab86d9b60fe066d8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c)) {
        Py_XDECREF(cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c = MAKE_FUNCTION_FRAME(codeobj_ac7ed95f1a80fccab86d9b60fe066d8c, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c->m_type_description == NULL);
    frame_ac7ed95f1a80fccab86d9b60fe066d8c = cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac7ed95f1a80fccab86d9b60fe066d8c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac7ed95f1a80fccab86d9b60fe066d8c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_residue);
        tmp_called_instance_1 = par_residue;
        frame_ac7ed95f1a80fccab86d9b60fe066d8c->m_frame.f_lineno = 591;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[261],
            PyTuple_GET_ITEM(mod_consts[262], 0)
        );

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_residue);
        tmp_expression_value_1 = par_residue;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ca == NULL);
        var_ca = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_ca);
        tmp_called_instance_2 = var_ca;
        frame_ac7ed95f1a80fccab86d9b60fe066d8c->m_frame.f_lineno = 594;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[256]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_coord == NULL);
        var_coord = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_coord);
        tmp_args_element_value_1 = var_coord;
        CHECK_OBJECT(par_surface);
        tmp_args_element_value_2 = par_surface;
        frame_ac7ed95f1a80fccab86d9b60fe066d8c->m_frame.f_lineno = 595;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac7ed95f1a80fccab86d9b60fe066d8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac7ed95f1a80fccab86d9b60fe066d8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac7ed95f1a80fccab86d9b60fe066d8c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac7ed95f1a80fccab86d9b60fe066d8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac7ed95f1a80fccab86d9b60fe066d8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac7ed95f1a80fccab86d9b60fe066d8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac7ed95f1a80fccab86d9b60fe066d8c,
        type_description_1,
        par_residue,
        par_surface,
        var_ca,
        var_coord
    );


    // Release cached frame if used for exception.
    if (frame_ac7ed95f1a80fccab86d9b60fe066d8c == cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c);
        cache_frame_ac7ed95f1a80fccab86d9b60fe066d8c = NULL;
    }

    assertFrameObject(frame_ac7ed95f1a80fccab86d9b60fe066d8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ca);
    var_ca = NULL;
    Py_XDECREF(var_coord);
    var_coord = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ca);
    var_ca = NULL;
    Py_XDECREF(var_coord);
    var_coord = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_residue);
    Py_DECREF(par_residue);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_residue);
    Py_DECREF(par_residue);
    CHECK_OBJECT(par_surface);
    Py_DECREF(par_surface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Bio$PDB$ResidueDepth$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_model = python_pars[1];
    PyObject *par_pdb_file = python_pars[2];
    PyObject *par_msms_exec = python_pars[3];
    PyObject *var_depth_dict = NULL;
    PyObject *var_depth_list = NULL;
    PyObject *var_depth_keys = NULL;
    PyObject *var_residue_list = NULL;
    PyObject *var_surface = NULL;
    PyObject *var_residue = NULL;
    PyObject *var_rd = NULL;
    PyObject *var_ca_rd = NULL;
    PyObject *var_res_id = NULL;
    PyObject *var_chain_id = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_53bfd78a763bdfb0c03ac12075efeb9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_53bfd78a763bdfb0c03ac12075efeb9b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_msms_exec);
        tmp_cmp_expr_left_1 = par_msms_exec;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[264];
        {
            PyObject *old = par_msms_exec;
            assert(old != NULL);
            par_msms_exec = tmp_assign_source_1;
            Py_INCREF(par_msms_exec);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_53bfd78a763bdfb0c03ac12075efeb9b)) {
        Py_XDECREF(cache_frame_53bfd78a763bdfb0c03ac12075efeb9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53bfd78a763bdfb0c03ac12075efeb9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53bfd78a763bdfb0c03ac12075efeb9b = MAKE_FUNCTION_FRAME(codeobj_53bfd78a763bdfb0c03ac12075efeb9b, module_Bio$PDB$ResidueDepth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53bfd78a763bdfb0c03ac12075efeb9b->m_type_description == NULL);
    frame_53bfd78a763bdfb0c03ac12075efeb9b = cache_frame_53bfd78a763bdfb0c03ac12075efeb9b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_53bfd78a763bdfb0c03ac12075efeb9b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_53bfd78a763bdfb0c03ac12075efeb9b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_pdb_file);
        tmp_cmp_expr_left_2 = par_pdb_file;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[205]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[265];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 611;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 608;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert(var_depth_dict == NULL);
        var_depth_dict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New(0);
        assert(var_depth_list == NULL);
        var_depth_list = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(var_depth_keys == NULL);
        var_depth_keys = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_3 = par_model;
        tmp_args_element_value_4 = mod_consts[266];
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 618;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[225],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_residue_list == NULL);
        var_residue_list = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[267]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[267]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_msms_exec);
        tmp_kw_call_dict_value_0_1 = par_msms_exec;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 620;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[268]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 620;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_surface == NULL);
        var_surface = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_residue_list);
        tmp_iter_arg_1 = var_residue_list;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 622;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 622;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_residue;
            var_residue = tmp_assign_source_9;
            Py_INCREF(var_residue);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[269]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[269]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_residue);
        tmp_args_element_value_5 = var_residue;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 623;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_residue);
        tmp_args_element_value_6 = var_residue;
        if (var_surface == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[259]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = var_surface;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rd;
            var_rd = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[271]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[271]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_residue);
        tmp_args_element_value_8 = var_residue;
        if (var_surface == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[259]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 626;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = var_surface;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ca_rd;
            var_ca_rd = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_residue);
        tmp_called_instance_2 = var_residue;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 628;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[272]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_res_id;
            var_res_id = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_residue);
        tmp_called_instance_4 = var_residue;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 629;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[273]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 629;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[272]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_chain_id;
            var_chain_id = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_rd);
        tmp_tuple_element_1 = var_rd;
        tmp_ass_subvalue_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_ca_rd);
        tmp_tuple_element_1 = var_ca_rd;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
        if (var_depth_dict == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[274]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 630;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_depth_dict;
        CHECK_OBJECT(var_chain_id);
        tmp_tuple_element_2 = var_chain_id;
        tmp_ass_subscript_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_res_id);
        tmp_tuple_element_2 = var_res_id;
        PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_2);
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 630;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_tuple_element_3;
        if (var_depth_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[275]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = var_depth_list;
        CHECK_OBJECT(var_residue);
        tmp_tuple_element_3 = var_residue;
        tmp_args_element_value_10 = PyTuple_New(2);
        {
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_args_element_value_10, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_rd);
            tmp_tuple_element_4 = var_rd;
            tmp_tuple_element_3 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_ca_rd);
            tmp_tuple_element_4 = var_ca_rd;
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 1, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_element_value_10, 1, tmp_tuple_element_3);
        }
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 631;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[217], tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_tuple_element_5;
        if (var_depth_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[276]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 632;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_6 = var_depth_keys;
        CHECK_OBJECT(var_chain_id);
        tmp_tuple_element_5 = var_chain_id;
        tmp_args_element_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_11, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_res_id);
        tmp_tuple_element_5 = var_res_id;
        PyTuple_SET_ITEM0(tmp_args_element_value_11, 1, tmp_tuple_element_5);
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 632;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[217], tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_rd);
        tmp_ass_subvalue_2 = var_rd;
        CHECK_OBJECT(var_residue);
        tmp_expression_value_2 = var_residue;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[277]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_2 = mod_consts[278];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_ca_rd);
        tmp_ass_subvalue_3 = var_ca_rd;
        CHECK_OBJECT(var_residue);
        tmp_expression_value_3 = var_residue;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[277]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscript_3 = mod_consts[279];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 622;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[280]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[281]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_12 = par_self;
        if (var_depth_dict == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[274]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_depth_dict;
        if (var_depth_keys == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[276]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_depth_keys;
        if (var_depth_list == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[275]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_depth_list;
        frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame.f_lineno = 636;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53bfd78a763bdfb0c03ac12075efeb9b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_53bfd78a763bdfb0c03ac12075efeb9b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53bfd78a763bdfb0c03ac12075efeb9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53bfd78a763bdfb0c03ac12075efeb9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53bfd78a763bdfb0c03ac12075efeb9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53bfd78a763bdfb0c03ac12075efeb9b,
        type_description_1,
        par_self,
        par_model,
        par_pdb_file,
        par_msms_exec,
        var_depth_dict,
        var_depth_list,
        var_depth_keys,
        var_residue_list,
        var_surface,
        var_residue,
        var_rd,
        var_ca_rd,
        var_res_id,
        var_chain_id
    );


    // Release cached frame if used for exception.
    if (frame_53bfd78a763bdfb0c03ac12075efeb9b == cache_frame_53bfd78a763bdfb0c03ac12075efeb9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_53bfd78a763bdfb0c03ac12075efeb9b);
        cache_frame_53bfd78a763bdfb0c03ac12075efeb9b = NULL;
    }

    assertFrameObject(frame_53bfd78a763bdfb0c03ac12075efeb9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_msms_exec);
    Py_DECREF(par_msms_exec);
    par_msms_exec = NULL;
    Py_XDECREF(var_depth_dict);
    var_depth_dict = NULL;
    Py_XDECREF(var_depth_list);
    var_depth_list = NULL;
    Py_XDECREF(var_depth_keys);
    var_depth_keys = NULL;
    CHECK_OBJECT(var_residue_list);
    Py_DECREF(var_residue_list);
    var_residue_list = NULL;
    Py_XDECREF(var_surface);
    var_surface = NULL;
    Py_XDECREF(var_residue);
    var_residue = NULL;
    Py_XDECREF(var_rd);
    var_rd = NULL;
    Py_XDECREF(var_ca_rd);
    var_ca_rd = NULL;
    Py_XDECREF(var_res_id);
    var_res_id = NULL;
    Py_XDECREF(var_chain_id);
    var_chain_id = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_msms_exec);
    Py_DECREF(par_msms_exec);
    par_msms_exec = NULL;
    Py_XDECREF(var_depth_dict);
    var_depth_dict = NULL;
    Py_XDECREF(var_depth_list);
    var_depth_list = NULL;
    Py_XDECREF(var_depth_keys);
    var_depth_keys = NULL;
    Py_XDECREF(var_residue_list);
    var_residue_list = NULL;
    Py_XDECREF(var_surface);
    var_surface = NULL;
    Py_XDECREF(var_residue);
    var_residue = NULL;
    Py_XDECREF(var_rd);
    var_rd = NULL;
    Py_XDECREF(var_ca_rd);
    var_ca_rd = NULL;
    Py_XDECREF(var_res_id);
    var_res_id = NULL;
    Py_XDECREF(var_chain_id);
    var_chain_id = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_pdb_file);
    Py_DECREF(par_pdb_file);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_pdb_file);
    Py_DECREF(par_pdb_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_283a51625ddea0fbb54bb9a97ed76eaa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[211],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array,
        mod_consts[249],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1cf288fa6609a915a9ef0184e52a1d7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[221],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__3_get_surface(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__3_get_surface,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc0f9aade3484862275554d0414550a3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[250],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__4_min_dist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__4_min_dist,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6903d0c995738ae0a02069b249325a5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[254],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__5_residue_depth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__5_residue_depth,
        mod_consts[270],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb31dd89a16d7b25544763f160e71c22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[260],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__6_ca_depth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__6_ca_depth,
        mod_consts[271],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac7ed95f1a80fccab86d9b60fe066d8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[263],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__7___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Bio$PDB$ResidueDepth$$$function__7___init__,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_53bfd78a763bdfb0c03ac12075efeb9b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Bio$PDB$ResidueDepth,
        mod_consts[282],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_Bio$PDB$ResidueDepth[] = {
    impl_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius,
    impl_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array,
    impl_Bio$PDB$ResidueDepth$$$function__3_get_surface,
    impl_Bio$PDB$ResidueDepth$$$function__4_min_dist,
    impl_Bio$PDB$ResidueDepth$$$function__5_residue_depth,
    impl_Bio$PDB$ResidueDepth$$$function__6_ca_depth,
    impl_Bio$PDB$ResidueDepth$$$function__7___init__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_Bio$PDB$ResidueDepth;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_Bio$PDB$ResidueDepth) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_Bio$PDB$ResidueDepth[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_Bio$PDB$ResidueDepth,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_Bio$PDB$ResidueDepth(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Bio.PDB.ResidueDepth");

    // Store the module for future use.
    module_Bio$PDB$ResidueDepth = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("Bio.PDB.ResidueDepth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Bio.PDB.ResidueDepth: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Bio.PDB.ResidueDepth: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initBio$PDB$ResidueDepth\n");

    moduledict_Bio$PDB$ResidueDepth = MODULE_DICT(module_Bio$PDB$ResidueDepth);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Bio$PDB$ResidueDepth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Bio$PDB$ResidueDepth,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[206]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Bio$PDB$ResidueDepth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Bio$PDB$ResidueDepth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Bio$PDB$ResidueDepth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Bio$PDB$ResidueDepth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Bio$PDB$ResidueDepth);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_c9aae9d49d6c335673b0056b4a3ff0f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_02da032eb3969afbeecbf0374f8f0497_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_02da032eb3969afbeecbf0374f8f0497_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c9aae9d49d6c335673b0056b4a3ff0f6 = MAKE_MODULE_FRAME(codeobj_c9aae9d49d6c335673b0056b4a3ff0f6, module_Bio$PDB$ResidueDepth);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c9aae9d49d6c335673b0056b4a3ff0f6);
    assert(Py_REFCNT(frame_c9aae9d49d6c335673b0056b4a3ff0f6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[287], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[286]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[286]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[288], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[227];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 55;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[204];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 56;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[241];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 57;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[219];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 59;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[290];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[291];
        tmp_level_value_5 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 61;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[292],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[292]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[290];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[293];
        tmp_level_value_6 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 62;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[224],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[224]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[294];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[295];
        tmp_level_value_7 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 63;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[280],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[280]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[296];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[297];
        tmp_level_value_8 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 64;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[269],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[269]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[298];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[299];
        tmp_level_value_9 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 66;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[209],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[209]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[298];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_Bio$PDB$ResidueDepth;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[300];
        tmp_level_value_10 = mod_consts[8];
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 67;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_Bio$PDB$ResidueDepth,
                mod_consts[223],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[223]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_Copy(mod_consts[301]);
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[302];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_16 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__1__get_atom_radius(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__2__read_vertex_array();

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[303];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_18 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__3_get_surface(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__4_min_dist();

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__5_residue_depth();

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__6_ca_depth();

        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[280]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_assign_source_22 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[304];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[304];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[304];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[304];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 598;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[305]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[305]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[306];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 598;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[307]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[308];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[309];
        tmp_getattr_default_1 = mod_consts[310];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[309]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 598;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[311];
        tmp_res = PyObject_SetItem(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598, mod_consts[312], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[313];
        tmp_res = PyObject_SetItem(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598, mod_consts[284], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[306];
        tmp_res = PyObject_SetItem(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598, mod_consts[314], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_02da032eb3969afbeecbf0374f8f0497_2)) {
            Py_XDECREF(cache_frame_02da032eb3969afbeecbf0374f8f0497_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_02da032eb3969afbeecbf0374f8f0497_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_02da032eb3969afbeecbf0374f8f0497_2 = MAKE_FUNCTION_FRAME(codeobj_02da032eb3969afbeecbf0374f8f0497, module_Bio$PDB$ResidueDepth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_02da032eb3969afbeecbf0374f8f0497_2->m_type_description == NULL);
        frame_02da032eb3969afbeecbf0374f8f0497_2 = cache_frame_02da032eb3969afbeecbf0374f8f0497_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_02da032eb3969afbeecbf0374f8f0497_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_02da032eb3969afbeecbf0374f8f0497_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[315];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_Bio$PDB$ResidueDepth$$$function__7___init__(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598, mod_consts[281], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02da032eb3969afbeecbf0374f8f0497_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_02da032eb3969afbeecbf0374f8f0497_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_02da032eb3969afbeecbf0374f8f0497_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_02da032eb3969afbeecbf0374f8f0497_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_02da032eb3969afbeecbf0374f8f0497_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_02da032eb3969afbeecbf0374f8f0497_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_02da032eb3969afbeecbf0374f8f0497_2 == cache_frame_02da032eb3969afbeecbf0374f8f0497_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_02da032eb3969afbeecbf0374f8f0497_2);
            cache_frame_02da032eb3969afbeecbf0374f8f0497_2 = NULL;
        }

        assertFrameObject(frame_02da032eb3969afbeecbf0374f8f0497_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598, mod_consts[317], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[306];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame.f_lineno = 598;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598);
        locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598);
        locals_Bio$PDB$ResidueDepth$$$class__1_ResidueDepth_598 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 598;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_28);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9aae9d49d6c335673b0056b4a3ff0f6);
#endif
    popFrameStack();

    assertFrameObject(frame_c9aae9d49d6c335673b0056b4a3ff0f6);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9aae9d49d6c335673b0056b4a3ff0f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9aae9d49d6c335673b0056b4a3ff0f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9aae9d49d6c335673b0056b4a3ff0f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9aae9d49d6c335673b0056b4a3ff0f6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Bio.PDB.ResidueDepth", false);

    return module_Bio$PDB$ResidueDepth;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Bio$PDB$ResidueDepth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Bio$PDB$ResidueDepth", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
