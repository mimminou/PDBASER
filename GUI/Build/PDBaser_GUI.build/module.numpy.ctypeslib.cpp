/* Generated code for Python module 'numpy.ctypeslib'
 * created by Nuitka version 0.6.17.3
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

/* The "module_numpy$ctypeslib" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$ctypeslib;
PyDictObject *moduledict_numpy$ctypeslib;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[239];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[239];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numpy.ctypeslib"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 239; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$ctypeslib(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 239; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bb98fe3c36d591fc8e45bb5702c084f6;
static PyCodeObject *codeobj_64b9cc4e38727b1a89b35ed2ce8cb417;
static PyCodeObject *codeobj_ce0ae26eb3243902310a78bf9d1a4f2a;
static PyCodeObject *codeobj_9e3acfe6eb4c8b85d4d1d0367afbadf5;
static PyCodeObject *codeobj_ad997e66f2f6e1d585260843149052b7;
static PyCodeObject *codeobj_a92afbb0f8259bbc84c7d93f72569ad7;
static PyCodeObject *codeobj_57f60c25fbccd88db4ba36d4129ac49f;
static PyCodeObject *codeobj_c88f370276517982f84ff519a4ca12dc;
static PyCodeObject *codeobj_bf207cfca04fa377db2af16d8fa361eb;
static PyCodeObject *codeobj_6169561d7f438d313f8d0cd5ca5679a7;
static PyCodeObject *codeobj_805b07d97956b3a784b8c20901cb2a62;
static PyCodeObject *codeobj_b11ed495b62885d596cdce7671841004;
static PyCodeObject *codeobj_54ed266637fa70f0638e65f87541456b;
static PyCodeObject *codeobj_18f22e436fc9c03dc5d8053490ae6284;
static PyCodeObject *codeobj_22f949a58d83da28fbf65ad4a0f32a96;
static PyCodeObject *codeobj_bdb3fc50ca0f557fe8d6d408e5fd23ce;
static PyCodeObject *codeobj_fe21879ce327eb39635c598e4d40aace;
static PyCodeObject *codeobj_82fd3f7b123c7b68729a44ab06d762ff;
static PyCodeObject *codeobj_48e5199e6769940467bb440a09e87398;
static PyCodeObject *codeobj_489ce008c66c5c37dd5a8c8e3bb7f0e0;
static PyCodeObject *codeobj_1032b84398e71d2903f09f6ae142f08e;
static PyCodeObject *codeobj_29e8bce9d582afae5b31a415dac561bb;
static PyCodeObject *codeobj_070ce791ff3383c5663b0b2bf7fc5556;
static PyCodeObject *codeobj_5c90b4813f743b503104074a2e0ab649;
static PyCodeObject *codeobj_9599b4eaa4946fe8eac9c273bfad9821;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[214]); CHECK_OBJECT(module_filename_obj);
    codeobj_bb98fe3c36d591fc8e45bb5702c084f6 = MAKE_CODEOBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[216], NULL, 1, 0, 0);
    codeobj_64b9cc4e38727b1a89b35ed2ce8cb417 = MAKE_CODEOBJECT(module_filename_obj, 409, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[217], NULL, 1, 0, 0);
    codeobj_ce0ae26eb3243902310a78bf9d1a4f2a = MAKE_CODEOBJECT(module_filename_obj, 329, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[218], NULL, 1, 0, 0);
    codeobj_9e3acfe6eb4c8b85d4d1d0367afbadf5 = MAKE_CODEOBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[219], NULL, 1, 0, 0);
    codeobj_ad997e66f2f6e1d585260843149052b7 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[221], NULL, 1, 0, 0);
    codeobj_a92afbb0f8259bbc84c7d93f72569ad7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[222], NULL, NULL, 0, 0, 0);
    codeobj_57f60c25fbccd88db4ba36d4129ac49f = MAKE_CODEOBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[223], NULL, 1, 0, 0);
    codeobj_c88f370276517982f84ff519a4ca12dc = MAKE_CODEOBJECT(module_filename_obj, 198, CO_NOFREE, mod_consts[80], mod_consts[224], NULL, 0, 0, 0);
    codeobj_bf207cfca04fa377db2af16d8fa361eb = MAKE_CODEOBJECT(module_filename_obj, 453, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[59], NULL, 1, 0, 0);
    codeobj_6169561d7f438d313f8d0cd5ca5679a7 = MAKE_CODEOBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[225], NULL, 1, 0, 0);
    codeobj_805b07d97956b3a784b8c20901cb2a62 = MAKE_CODEOBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[226], NULL, 1, 0, 0);
    codeobj_b11ed495b62885d596cdce7671841004 = MAKE_CODEOBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[227], NULL, 1, 0, 0);
    codeobj_54ed266637fa70f0638e65f87541456b = MAKE_CODEOBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[228], NULL, 2, 0, 0);
    codeobj_18f22e436fc9c03dc5d8053490ae6284 = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[179], mod_consts[229], NULL, 0, 0, 0);
    codeobj_22f949a58d83da28fbf65ad4a0f32a96 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[230], NULL, 1, 0, 0);
    codeobj_bdb3fc50ca0f557fe8d6d408e5fd23ce = MAKE_CODEOBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[231], NULL, 0, 0, 0);
    codeobj_fe21879ce327eb39635c598e4d40aace = MAKE_CODEOBJECT(module_filename_obj, 177, CO_NOFREE, mod_consts[81], mod_consts[224], NULL, 0, 0, 0);
    codeobj_82fd3f7b123c7b68729a44ab06d762ff = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[232], NULL, 1, 0, 0);
    codeobj_48e5199e6769940467bb440a09e87398 = MAKE_CODEOBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[233], NULL, 2, 0, 0);
    codeobj_489ce008c66c5c37dd5a8c8e3bb7f0e0 = MAKE_CODEOBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[182], mod_consts[234], NULL, 1, 0, 0);
    codeobj_1032b84398e71d2903f09f6ae142f08e = MAKE_CODEOBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[59], NULL, 1, 0, 0);
    codeobj_29e8bce9d582afae5b31a415dac561bb = MAKE_CODEOBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[235], NULL, 1, 0, 0);
    codeobj_070ce791ff3383c5663b0b2bf7fc5556 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[236], NULL, 2, 0, 0);
    codeobj_5c90b4813f743b503104074a2e0ab649 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[237], NULL, 2, 0, 0);
    codeobj_9599b4eaa4946fe8eac9c273bfad9821 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[238], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__10__get_scalar_type_map();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__14__ctype_from_dtype();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__15_as_ctypes_type();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__16_as_array(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__17_as_ctypes();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__1__dummy();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__2_load_library();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__3__num_fromflags();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__4__flags_fromnum();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__5_from_param();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__6__check_retval_();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__7_contents();


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__8_ndpointer(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__9__ctype_ndarray();


// The module function definitions.
static PyObject *impl_numpy$ctypeslib$$$function__1__dummy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwds = python_pars[1];
    struct Nuitka_FrameObject *frame_18f22e436fc9c03dc5d8053490ae6284;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18f22e436fc9c03dc5d8053490ae6284 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18f22e436fc9c03dc5d8053490ae6284)) {
        Py_XDECREF(cache_frame_18f22e436fc9c03dc5d8053490ae6284);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18f22e436fc9c03dc5d8053490ae6284 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18f22e436fc9c03dc5d8053490ae6284 = MAKE_FUNCTION_FRAME(codeobj_18f22e436fc9c03dc5d8053490ae6284, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18f22e436fc9c03dc5d8053490ae6284->m_type_description == NULL);
    frame_18f22e436fc9c03dc5d8053490ae6284 = cache_frame_18f22e436fc9c03dc5d8053490ae6284;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18f22e436fc9c03dc5d8053490ae6284);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18f22e436fc9c03dc5d8053490ae6284) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_18f22e436fc9c03dc5d8053490ae6284->m_frame.f_lineno = 77;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ImportError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18f22e436fc9c03dc5d8053490ae6284);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18f22e436fc9c03dc5d8053490ae6284);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18f22e436fc9c03dc5d8053490ae6284, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18f22e436fc9c03dc5d8053490ae6284->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18f22e436fc9c03dc5d8053490ae6284, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18f22e436fc9c03dc5d8053490ae6284,
        type_description_1,
        par_args,
        par_kwds
    );


    // Release cached frame if used for exception.
    if (frame_18f22e436fc9c03dc5d8053490ae6284 == cache_frame_18f22e436fc9c03dc5d8053490ae6284) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18f22e436fc9c03dc5d8053490ae6284);
        cache_frame_18f22e436fc9c03dc5d8053490ae6284 = NULL;
    }

    assertFrameObject(frame_18f22e436fc9c03dc5d8053490ae6284);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwds);
    Py_DECREF(par_kwds);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_numpy$ctypeslib$$$function__2_load_library(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_libname = python_pars[0];
    PyObject *par_loader_path = python_pars[1];
    PyObject *var_warnings = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_get_shared_lib_extension = NULL;
    PyObject *var_so_ext = NULL;
    PyObject *var_libname_ext = NULL;
    PyObject *var_so_ext2 = NULL;
    PyObject *var_libdir = NULL;
    PyObject *var_ln = NULL;
    PyObject *var_libpath = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5c90b4813f743b503104074a2e0ab649;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_5c90b4813f743b503104074a2e0ab649 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5c90b4813f743b503104074a2e0ab649)) {
        Py_XDECREF(cache_frame_5c90b4813f743b503104074a2e0ab649);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c90b4813f743b503104074a2e0ab649 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c90b4813f743b503104074a2e0ab649 = MAKE_FUNCTION_FRAME(codeobj_5c90b4813f743b503104074a2e0ab649, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5c90b4813f743b503104074a2e0ab649->m_type_description == NULL);
    frame_5c90b4813f743b503104074a2e0ab649 = cache_frame_5c90b4813f743b503104074a2e0ab649;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5c90b4813f743b503104074a2e0ab649);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5c90b4813f743b503104074a2e0ab649) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[4];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[5];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[6];
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 120;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_warnings);
        tmp_expression_name_2 = var_warnings;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_name_1, &PyTuple_GET_ITEM(mod_consts[8], 0), mod_consts[9]);
        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_libname);
        tmp_args_element_name_1 = par_libname;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 124;
        tmp_expression_name_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[13];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, 1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ext == NULL);
        var_ext = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_ext);
        tmp_operand_name_1 = var_ext;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[14];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[15];
        tmp_level_name_2 = mod_consts[6];
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 129;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[16],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_get_shared_lib_extension == NULL);
        var_get_shared_lib_extension = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(var_get_shared_lib_extension);
        tmp_called_name_2 = var_get_shared_lib_extension;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 130;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_so_ext == NULL);
        var_so_ext = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_libname);
        tmp_left_name_1 = par_libname;
        CHECK_OBJECT(var_so_ext);
        tmp_right_name_1 = var_so_ext;
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_5, 0, tmp_list_element_1);
        assert(var_libname_ext == NULL);
        var_libname_ext = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        CHECK_OBJECT(var_get_shared_lib_extension);
        tmp_called_name_3 = var_get_shared_lib_extension;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 134;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[17], 0), mod_consts[18]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_so_ext2 == NULL);
        var_so_ext2 = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_so_ext2);
        tmp_compexpr_left_2 = var_so_ext2;
        CHECK_OBJECT(var_so_ext);
        tmp_compexpr_right_2 = var_so_ext;
        tmp_operand_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_libname_ext);
        tmp_expression_name_5 = var_libname_ext;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[19]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[6];
        CHECK_OBJECT(par_libname);
        tmp_left_name_2 = par_libname;
        CHECK_OBJECT(var_so_ext2);
        tmp_right_name_2 = var_so_ext2;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 136;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(par_libname);
        tmp_list_element_2 = par_libname;
        tmp_assign_source_7 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assign_source_7, 0, tmp_list_element_2);
        assert(var_libname_ext == NULL);
        var_libname_ext = tmp_assign_source_7;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_loader_path);
        tmp_args_element_name_4 = par_loader_path;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 140;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[20], tmp_args_element_name_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_loader_path;
            assert(old != NULL);
            par_loader_path = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[11]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_loader_path);
        tmp_args_element_name_5 = par_loader_path;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 141;
        tmp_operand_name_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[21], tmp_args_element_name_5);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[11]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_loader_path);
        tmp_args_element_name_6 = par_loader_path;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 142;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[22], tmp_args_element_name_6);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_libdir == NULL);
        var_libdir = tmp_assign_source_9;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(par_loader_path);
        tmp_assign_source_10 = par_loader_path;
        assert(var_libdir == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_libdir = tmp_assign_source_10;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_1;
        if (var_libname_ext == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = var_libname_ext;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 146;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ln;
            var_ln = tmp_assign_source_13;
            Py_INCREF(var_ln);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[11]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[24]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (var_libdir == NULL) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_7 = var_libdir;
        CHECK_OBJECT(var_ln);
        tmp_args_element_name_8 = var_ln;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_libpath;
            var_libpath = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_9;
        int tmp_truth_name_2;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[11]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_libpath);
        tmp_args_element_name_9 = var_libpath;
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 148;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[26], tmp_args_element_name_9);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 148;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_2;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[27]);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_libpath);
        tmp_subscript_name_2 = var_libpath;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5c90b4813f743b503104074a2e0ab649, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5c90b4813f743b503104074a2e0ab649, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 153;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5c90b4813f743b503104074a2e0ab649->m_frame) frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 149;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5c90b4813f743b503104074a2e0ab649->m_frame) frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 146;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[28];
        frame_5c90b4813f743b503104074a2e0ab649->m_frame.f_lineno = 155;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_OSError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 155;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c90b4813f743b503104074a2e0ab649);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c90b4813f743b503104074a2e0ab649);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c90b4813f743b503104074a2e0ab649);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c90b4813f743b503104074a2e0ab649, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c90b4813f743b503104074a2e0ab649->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c90b4813f743b503104074a2e0ab649, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c90b4813f743b503104074a2e0ab649,
        type_description_1,
        par_libname,
        par_loader_path,
        var_warnings,
        var_ext,
        var_get_shared_lib_extension,
        var_so_ext,
        var_libname_ext,
        var_so_ext2,
        var_libdir,
        var_ln,
        var_libpath
    );


    // Release cached frame if used for exception.
    if (frame_5c90b4813f743b503104074a2e0ab649 == cache_frame_5c90b4813f743b503104074a2e0ab649) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5c90b4813f743b503104074a2e0ab649);
        cache_frame_5c90b4813f743b503104074a2e0ab649 = NULL;
    }

    assertFrameObject(frame_5c90b4813f743b503104074a2e0ab649);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_loader_path);
    Py_DECREF(par_loader_path);
    par_loader_path = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    CHECK_OBJECT(var_ext);
    Py_DECREF(var_ext);
    var_ext = NULL;
    Py_XDECREF(var_get_shared_lib_extension);
    var_get_shared_lib_extension = NULL;
    Py_XDECREF(var_so_ext);
    var_so_ext = NULL;
    Py_XDECREF(var_libname_ext);
    var_libname_ext = NULL;
    Py_XDECREF(var_so_ext2);
    var_so_ext2 = NULL;
    Py_XDECREF(var_libdir);
    var_libdir = NULL;
    CHECK_OBJECT(var_ln);
    Py_DECREF(var_ln);
    var_ln = NULL;
    CHECK_OBJECT(var_libpath);
    Py_DECREF(var_libpath);
    var_libpath = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_loader_path);
    par_loader_path = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
    Py_XDECREF(var_ext);
    var_ext = NULL;
    Py_XDECREF(var_get_shared_lib_extension);
    var_get_shared_lib_extension = NULL;
    Py_XDECREF(var_so_ext);
    var_so_ext = NULL;
    Py_XDECREF(var_libname_ext);
    var_libname_ext = NULL;
    Py_XDECREF(var_so_ext2);
    var_so_ext2 = NULL;
    Py_XDECREF(var_libdir);
    var_libdir = NULL;
    Py_XDECREF(var_ln);
    var_ln = NULL;
    Py_XDECREF(var_libpath);
    var_libpath = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_libname);
    Py_DECREF(par_libname);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_libname);
    Py_DECREF(par_libname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__3__num_fromflags(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flaglist = python_pars[0];
    PyObject *var_num = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_82fd3f7b123c7b68729a44ab06d762ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_82fd3f7b123c7b68729a44ab06d762ff = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        assert(var_num == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_num = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_82fd3f7b123c7b68729a44ab06d762ff)) {
        Py_XDECREF(cache_frame_82fd3f7b123c7b68729a44ab06d762ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82fd3f7b123c7b68729a44ab06d762ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82fd3f7b123c7b68729a44ab06d762ff = MAKE_FUNCTION_FRAME(codeobj_82fd3f7b123c7b68729a44ab06d762ff, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_82fd3f7b123c7b68729a44ab06d762ff->m_type_description == NULL);
    frame_82fd3f7b123c7b68729a44ab06d762ff = cache_frame_82fd3f7b123c7b68729a44ab06d762ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_82fd3f7b123c7b68729a44ab06d762ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_82fd3f7b123c7b68729a44ab06d762ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_flaglist);
        tmp_iter_arg_1 = par_flaglist;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 162;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_4;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (var_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = var_num;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_val);
        tmp_subscript_name_1 = var_val;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_left_name_1;
        var_num = tmp_assign_source_5;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 162;
        type_description_1 = "ooo";
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
    if (var_num == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 164;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_num;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_82fd3f7b123c7b68729a44ab06d762ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_82fd3f7b123c7b68729a44ab06d762ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_82fd3f7b123c7b68729a44ab06d762ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82fd3f7b123c7b68729a44ab06d762ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82fd3f7b123c7b68729a44ab06d762ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82fd3f7b123c7b68729a44ab06d762ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82fd3f7b123c7b68729a44ab06d762ff,
        type_description_1,
        par_flaglist,
        var_num,
        var_val
    );


    // Release cached frame if used for exception.
    if (frame_82fd3f7b123c7b68729a44ab06d762ff == cache_frame_82fd3f7b123c7b68729a44ab06d762ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_82fd3f7b123c7b68729a44ab06d762ff);
        cache_frame_82fd3f7b123c7b68729a44ab06d762ff = NULL;
    }

    assertFrameObject(frame_82fd3f7b123c7b68729a44ab06d762ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_num);
    var_num = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_num);
    var_num = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_flaglist);
    Py_DECREF(par_flaglist);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_flaglist);
    Py_DECREF(par_flaglist);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__4__flags_fromnum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[0];
    PyObject *var_res = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_22f949a58d83da28fbf65ad4a0f32a96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_22f949a58d83da28fbf65ad4a0f32a96 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_22f949a58d83da28fbf65ad4a0f32a96)) {
        Py_XDECREF(cache_frame_22f949a58d83da28fbf65ad4a0f32a96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22f949a58d83da28fbf65ad4a0f32a96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22f949a58d83da28fbf65ad4a0f32a96 = MAKE_FUNCTION_FRAME(codeobj_22f949a58d83da28fbf65ad4a0f32a96, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_22f949a58d83da28fbf65ad4a0f32a96->m_type_description == NULL);
    frame_22f949a58d83da28fbf65ad4a0f32a96 = cache_frame_22f949a58d83da28fbf65ad4a0f32a96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_22f949a58d83da28fbf65ad4a0f32a96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_22f949a58d83da28fbf65ad4a0f32a96) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 170;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_4;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_key);
        tmp_subscript_name_1 = var_key;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (par_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = par_num;
        CHECK_OBJECT(var_value);
        tmp_right_name_1 = var_value;
        tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_res;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_1 = var_key;
        frame_22f949a58d83da28fbf65ad4a0f32a96->m_frame.f_lineno = 173;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 170;
        type_description_1 = "oooo";
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
    if (var_res == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 174;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_22f949a58d83da28fbf65ad4a0f32a96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_22f949a58d83da28fbf65ad4a0f32a96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_22f949a58d83da28fbf65ad4a0f32a96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22f949a58d83da28fbf65ad4a0f32a96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22f949a58d83da28fbf65ad4a0f32a96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22f949a58d83da28fbf65ad4a0f32a96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22f949a58d83da28fbf65ad4a0f32a96,
        type_description_1,
        par_num,
        var_res,
        var_key,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_22f949a58d83da28fbf65ad4a0f32a96 == cache_frame_22f949a58d83da28fbf65ad4a0f32a96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_22f949a58d83da28fbf65ad4a0f32a96);
        cache_frame_22f949a58d83da28fbf65ad4a0f32a96 = NULL;
    }

    assertFrameObject(frame_22f949a58d83da28fbf65ad4a0f32a96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__5_from_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_070ce791ff3383c5663b0b2bf7fc5556;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_070ce791ff3383c5663b0b2bf7fc5556 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_070ce791ff3383c5663b0b2bf7fc5556)) {
        Py_XDECREF(cache_frame_070ce791ff3383c5663b0b2bf7fc5556);

#if _DEBUG_REFCOUNTS
        if (cache_frame_070ce791ff3383c5663b0b2bf7fc5556 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_070ce791ff3383c5663b0b2bf7fc5556 = MAKE_FUNCTION_FRAME(codeobj_070ce791ff3383c5663b0b2bf7fc5556, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_070ce791ff3383c5663b0b2bf7fc5556->m_type_description == NULL);
    frame_070ce791ff3383c5663b0b2bf7fc5556 = cache_frame_070ce791ff3383c5663b0b2bf7fc5556;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_070ce791ff3383c5663b0b2bf7fc5556);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_070ce791ff3383c5663b0b2bf7fc5556) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[36];
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 181;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 181;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_1 = par_cls;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[37]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_obj);
        tmp_expression_name_2 = par_obj;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[38]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_3 = par_cls;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[37]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        tmp_left_name_1 = mod_consts[39];
        CHECK_OBJECT(par_cls);
        tmp_expression_name_4 = par_cls;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[37]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 184;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 184;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_5 = par_cls;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[40]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_2 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_3);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_obj;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[42]);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_7 = par_cls;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[40]);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_8;
        tmp_left_name_2 = mod_consts[43];
        CHECK_OBJECT(par_cls);
        tmp_expression_name_8 = par_cls;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[40]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 187;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 187;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_9 = par_cls;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[44]);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = Py_None;
        tmp_and_left_value_3 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_5);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_obj;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[45]);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_11 = par_cls;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[44]);
        if (tmp_compexpr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_6);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_4 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_name_12;
        tmp_left_name_3 = mod_consts[46];
        CHECK_OBJECT(par_cls);
        tmp_expression_name_12 = par_cls;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[44]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 190;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(par_cls);
        tmp_expression_name_13 = par_cls;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[47]);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = Py_None;
        tmp_and_left_value_4 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_7);
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_obj;
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[48]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[30]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_16 = par_cls;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[47]);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_17 = par_cls;
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[47]);
        if (tmp_compexpr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_8);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        Py_DECREF(tmp_compexpr_right_8);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_5 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_18;
        tmp_left_name_5 = mod_consts[49];
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_name_18 = par_cls;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[47]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 194;
        tmp_right_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame.f_lineno = 193;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_expression_name_19;
        if (par_obj == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = par_obj;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_070ce791ff3383c5663b0b2bf7fc5556);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_070ce791ff3383c5663b0b2bf7fc5556);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_070ce791ff3383c5663b0b2bf7fc5556);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_070ce791ff3383c5663b0b2bf7fc5556, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_070ce791ff3383c5663b0b2bf7fc5556->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_070ce791ff3383c5663b0b2bf7fc5556, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_070ce791ff3383c5663b0b2bf7fc5556,
        type_description_1,
        par_cls,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_070ce791ff3383c5663b0b2bf7fc5556 == cache_frame_070ce791ff3383c5663b0b2bf7fc5556) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_070ce791ff3383c5663b0b2bf7fc5556);
        cache_frame_070ce791ff3383c5663b0b2bf7fc5556 = NULL;
    }

    assertFrameObject(frame_070ce791ff3383c5663b0b2bf7fc5556);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__6__check_retval_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_57f60c25fbccd88db4ba36d4129ac49f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57f60c25fbccd88db4ba36d4129ac49f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57f60c25fbccd88db4ba36d4129ac49f)) {
        Py_XDECREF(cache_frame_57f60c25fbccd88db4ba36d4129ac49f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57f60c25fbccd88db4ba36d4129ac49f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57f60c25fbccd88db4ba36d4129ac49f = MAKE_FUNCTION_FRAME(codeobj_57f60c25fbccd88db4ba36d4129ac49f, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_57f60c25fbccd88db4ba36d4129ac49f->m_type_description == NULL);
    frame_57f60c25fbccd88db4ba36d4129ac49f = cache_frame_57f60c25fbccd88db4ba36d4129ac49f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57f60c25fbccd88db4ba36d4129ac49f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57f60c25fbccd88db4ba36d4129ac49f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[51]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57f60c25fbccd88db4ba36d4129ac49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57f60c25fbccd88db4ba36d4129ac49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57f60c25fbccd88db4ba36d4129ac49f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57f60c25fbccd88db4ba36d4129ac49f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57f60c25fbccd88db4ba36d4129ac49f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57f60c25fbccd88db4ba36d4129ac49f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57f60c25fbccd88db4ba36d4129ac49f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_57f60c25fbccd88db4ba36d4129ac49f == cache_frame_57f60c25fbccd88db4ba36d4129ac49f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_57f60c25fbccd88db4ba36d4129ac49f);
        cache_frame_57f60c25fbccd88db4ba36d4129ac49f = NULL;
    }

    assertFrameObject(frame_57f60c25fbccd88db4ba36d4129ac49f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__7_contents(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_full_dtype = NULL;
    PyObject *var_full_ctype = NULL;
    PyObject *var_buffer = NULL;
    struct Nuitka_FrameObject *frame_29e8bce9d582afae5b31a415dac561bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29e8bce9d582afae5b31a415dac561bb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_29e8bce9d582afae5b31a415dac561bb)) {
        Py_XDECREF(cache_frame_29e8bce9d582afae5b31a415dac561bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29e8bce9d582afae5b31a415dac561bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29e8bce9d582afae5b31a415dac561bb = MAKE_FUNCTION_FRAME(codeobj_29e8bce9d582afae5b31a415dac561bb, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29e8bce9d582afae5b31a415dac561bb->m_type_description == NULL);
    frame_29e8bce9d582afae5b31a415dac561bb = cache_frame_29e8bce9d582afae5b31a415dac561bb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29e8bce9d582afae5b31a415dac561bb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29e8bce9d582afae5b31a415dac561bb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[37]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM(tmp_args_element_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[44]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_element_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_29e8bce9d582afae5b31a415dac561bb->m_frame.f_lineno = 220;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_full_dtype == NULL);
        var_full_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[54]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_full_dtype);
        tmp_expression_name_4 = var_full_dtype;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[55]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_full_ctype == NULL);
        var_full_ctype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[56]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_full_ctype);
        tmp_args_element_name_4 = var_full_ctype;
        frame_29e8bce9d582afae5b31a415dac561bb->m_frame.f_lineno = 222;
        tmp_args_element_name_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[57], tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_29e8bce9d582afae5b31a415dac561bb->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_expression_name_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[51]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_kw_call_arg_value_0_1 = var_buffer;
        CHECK_OBJECT(var_full_dtype);
        tmp_kw_call_dict_value_0_1 = var_full_dtype;
        frame_29e8bce9d582afae5b31a415dac561bb->m_frame.f_lineno = 223;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_expression_name_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_4, args, kw_values, mod_consts[59]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[60]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_29e8bce9d582afae5b31a415dac561bb->m_frame.f_lineno = 223;
        tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_name_3, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[62]);
        Py_DECREF(tmp_called_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29e8bce9d582afae5b31a415dac561bb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29e8bce9d582afae5b31a415dac561bb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29e8bce9d582afae5b31a415dac561bb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29e8bce9d582afae5b31a415dac561bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29e8bce9d582afae5b31a415dac561bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29e8bce9d582afae5b31a415dac561bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29e8bce9d582afae5b31a415dac561bb,
        type_description_1,
        par_self,
        var_full_dtype,
        var_full_ctype,
        var_buffer
    );


    // Release cached frame if used for exception.
    if (frame_29e8bce9d582afae5b31a415dac561bb == cache_frame_29e8bce9d582afae5b31a415dac561bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_29e8bce9d582afae5b31a415dac561bb);
        cache_frame_29e8bce9d582afae5b31a415dac561bb = NULL;
    }

    assertFrameObject(frame_29e8bce9d582afae5b31a415dac561bb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_full_dtype);
    Py_DECREF(var_full_dtype);
    var_full_dtype = NULL;
    CHECK_OBJECT(var_full_ctype);
    Py_DECREF(var_full_ctype);
    var_full_ctype = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
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

    Py_XDECREF(var_full_dtype);
    var_full_dtype = NULL;
    Py_XDECREF(var_full_ctype);
    var_full_ctype = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__8_ndpointer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    PyObject *par_ndim = python_pars[1];
    PyObject *par_shape = python_pars[2];
    PyObject *par_flags = python_pars[3];
    PyObject *var_num = NULL;
    PyObject *var_cache_key = NULL;
    PyObject *var_name = NULL;
    PyObject *var_base = NULL;
    PyObject *var_klass = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9599b4eaa4946fe8eac9c273bfad9821;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_ad997e66f2f6e1d585260843149052b7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ad997e66f2f6e1d585260843149052b7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_9599b4eaa4946fe8eac9c273bfad9821 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9599b4eaa4946fe8eac9c273bfad9821)) {
        Py_XDECREF(cache_frame_9599b4eaa4946fe8eac9c273bfad9821);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9599b4eaa4946fe8eac9c273bfad9821 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9599b4eaa4946fe8eac9c273bfad9821 = MAKE_FUNCTION_FRAME(codeobj_9599b4eaa4946fe8eac9c273bfad9821, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9599b4eaa4946fe8eac9c273bfad9821->m_type_description == NULL);
    frame_9599b4eaa4946fe8eac9c273bfad9821 = cache_frame_9599b4eaa4946fe8eac9c273bfad9821;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9599b4eaa4946fe8eac9c273bfad9821);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9599b4eaa4946fe8eac9c273bfad9821) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_dtype);
        tmp_compexpr_left_1 = par_dtype;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 284;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dtype;
            assert(old != NULL);
            par_dtype = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_num == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_num = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_flags);
        tmp_compexpr_left_2 = par_flags;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_flags);
        tmp_isinstance_inst_1 = par_flags;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_flags);
        tmp_called_instance_1 = par_flags;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 290;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_flags;
            assert(old != NULL);
            par_flags = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_flags);
        tmp_isinstance_inst_2 = par_flags;
        tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
        tmp_isinstance_cls_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_flags);
        tmp_assign_source_4 = par_flags;
        {
            PyObject *old = var_num;
            assert(old != NULL);
            var_num = tmp_assign_source_4;
            Py_INCREF(var_num);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num);
        tmp_args_element_name_2 = var_num;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 293;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_flags;
            assert(old != NULL);
            par_flags = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_flags);
        tmp_isinstance_inst_3 = par_flags;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_flags);
        tmp_expression_name_1 = par_flags;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[30]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_num;
            assert(old != NULL);
            var_num = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num);
        tmp_args_element_name_3 = var_num;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 296;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_flags;
            assert(old != NULL);
            par_flags = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_end_4:;
    branch_end_3:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (var_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_num;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            if (par_flags == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[48]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 299;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_1 = par_flags;
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_ad997e66f2f6e1d585260843149052b7_2)) {
            Py_XDECREF(cache_frame_ad997e66f2f6e1d585260843149052b7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ad997e66f2f6e1d585260843149052b7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ad997e66f2f6e1d585260843149052b7_2 = MAKE_FUNCTION_FRAME(codeobj_ad997e66f2f6e1d585260843149052b7, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ad997e66f2f6e1d585260843149052b7_2->m_type_description == NULL);
        frame_ad997e66f2f6e1d585260843149052b7_2 = cache_frame_ad997e66f2f6e1d585260843149052b7_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ad997e66f2f6e1d585260843149052b7_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ad997e66f2f6e1d585260843149052b7_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 299;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_12;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_called_instance_3 = outline_0_var_x;
            frame_ad997e66f2f6e1d585260843149052b7_2->m_frame.f_lineno = 299;
            tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[68]);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            frame_ad997e66f2f6e1d585260843149052b7_2->m_frame.f_lineno = 299;
            tmp_append_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[69]);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_8 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
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
        RESTORE_FRAME_EXCEPTION(frame_ad997e66f2f6e1d585260843149052b7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_ad997e66f2f6e1d585260843149052b7_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ad997e66f2f6e1d585260843149052b7_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad997e66f2f6e1d585260843149052b7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad997e66f2f6e1d585260843149052b7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad997e66f2f6e1d585260843149052b7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad997e66f2f6e1d585260843149052b7_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_ad997e66f2f6e1d585260843149052b7_2 == cache_frame_ad997e66f2f6e1d585260843149052b7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ad997e66f2f6e1d585260843149052b7_2);
            cache_frame_ad997e66f2f6e1d585260843149052b7_2 = NULL;
        }

        assertFrameObject(frame_ad997e66f2f6e1d585260843149052b7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
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
        exception_lineno = 299;
        goto try_except_handler_2;
        outline_result_1:;
        {
            PyObject *old = par_flags;
            par_flags = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[70];
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 301;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 301;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 298;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame) frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_5;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_flags);
        tmp_args_element_name_4 = par_flags;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 302;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_num;
            var_num = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    branch_no_2:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_shape);
        tmp_compexpr_left_5 = par_shape;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_shape);
        tmp_tuple_arg_1 = par_shape;
        tmp_assign_source_14 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = par_shape;
            assert(old != NULL);
            par_shape = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_shape);
        tmp_tuple_element_2 = par_shape;
        tmp_assign_source_15 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_2);
        {
            PyObject *old = par_shape;
            assert(old != NULL);
            par_shape = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 306;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame) frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_7;
    branch_end_9:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_dtype);
        tmp_tuple_element_3 = par_dtype;
        tmp_assign_source_16 = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_ndim);
        tmp_tuple_element_3 = par_ndim;
        PyTuple_SET_ITEM0(tmp_assign_source_16, 1, tmp_tuple_element_3);
        if (par_shape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = par_shape;
        PyTuple_SET_ITEM0(tmp_assign_source_16, 2, tmp_tuple_element_3);
        if (var_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = var_num;
        PyTuple_SET_ITEM0(tmp_assign_source_16, 3, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_cache_key == NULL);
        var_cache_key = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_cache_key);
        tmp_subscript_name_1 = var_cache_key;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_9599b4eaa4946fe8eac9c273bfad9821, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_7, tmp_compexpr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 314;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame) frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_9;
    branch_no_10:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT(par_dtype);
        tmp_compexpr_left_8 = par_dtype;
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_8 == tmp_compexpr_right_8) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[73];
        assert(var_name == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_name = tmp_assign_source_17;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_3 = par_dtype;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[74]);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = Py_None;
        tmp_condition_result_12 = (tmp_compexpr_left_9 != tmp_compexpr_right_9) ? true : false;
        Py_DECREF(tmp_compexpr_left_9);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_dtype);
        tmp_id_arg_1 = par_dtype;
        tmp_unicode_arg_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_unicode_arg_1 == NULL));
        tmp_assign_source_18 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_18;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_4 = par_dtype;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[75]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_19;
    }
    branch_end_12:;
    branch_end_11:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT(par_ndim);
        tmp_compexpr_left_10 = par_ndim;
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_13 = (tmp_compexpr_left_10 != tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = var_name;
        tmp_left_name_2 = mod_consts[77];
        CHECK_OBJECT(par_ndim);
        tmp_right_name_2 = par_ndim;
        tmp_right_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = tmp_left_name_1;
        var_name = tmp_assign_source_20;

    }
    branch_no_13:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        if (par_shape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_11 = par_shape;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_14 = (tmp_compexpr_left_11 != tmp_compexpr_right_11) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_name;
        tmp_left_name_4 = mod_consts[78];
        tmp_expression_name_5 = mod_consts[79];
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[24]);
        assert(!(tmp_called_name_5 == NULL));
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_2;
            if (par_shape == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 329;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = par_shape;
            tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_22;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_name_5 = MAKE_GENERATOR_numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_10;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 329;
        tmp_right_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_left_name_3;
        var_name = tmp_assign_source_21;

    }
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        if (par_flags == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_12 = par_flags;
        tmp_compexpr_right_12 = Py_None;
        tmp_condition_result_15 = (tmp_compexpr_left_12 != tmp_compexpr_right_12) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_6;
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = var_name;
        tmp_left_name_6 = mod_consts[78];
        tmp_expression_name_6 = mod_consts[78];
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[24]);
        assert(!(tmp_called_name_6 == NULL));
        if (par_flags == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_flags;
        frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame.f_lineno = 331;
        tmp_right_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = tmp_left_name_5;
        var_name = tmp_assign_source_23;

    }
    branch_no_15:;
    {
        bool tmp_condition_result_16;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_13 = par_dtype;
        tmp_compexpr_right_13 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_13 != tmp_compexpr_right_13) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_shape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_14 = par_shape;
        tmp_compexpr_right_14 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_14 != tmp_compexpr_right_14) ? true : false;
        tmp_condition_result_16 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_16 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_assign_source_24 == NULL)) {
            tmp_assign_source_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_base = tmp_assign_source_24;
    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_assign_source_25 == NULL)) {
            tmp_assign_source_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_base = tmp_assign_source_25;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_type_name_name_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_bases_name_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_left_name_7 = mod_consts[82];
        if (var_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_name;
        tmp_type_name_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_7, tmp_right_name_7);
        if (tmp_type_name_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base);
        tmp_tuple_element_4 = var_base;
        tmp_bases_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_name_1, 0, tmp_tuple_element_4);
        tmp_dict_key_1 = mod_consts[37];
        if (par_dtype == NULL) {
            Py_DECREF(tmp_type_name_name_1);
            Py_DECREF(tmp_bases_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = par_dtype;
        tmp_dict_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[44];
        if (par_shape == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = par_shape;
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[40];
        if (par_ndim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = par_ndim;
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[47];
        if (var_num == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_num;
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_type_name_name_1);
        Py_DECREF(tmp_bases_name_1);
        Py_DECREF(tmp_dict_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_assign_source_26 = BUILTIN_TYPE3(mod_consts[83], tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1);
        Py_DECREF(tmp_type_name_name_1);
        Py_DECREF(tmp_bases_name_1);
        Py_DECREF(tmp_dict_name_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_klass == NULL);
        var_klass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_klass);
        tmp_ass_subvalue_1 = var_klass;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cache_key);
        tmp_ass_subscript_1 = var_cache_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9599b4eaa4946fe8eac9c273bfad9821);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9599b4eaa4946fe8eac9c273bfad9821);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9599b4eaa4946fe8eac9c273bfad9821);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9599b4eaa4946fe8eac9c273bfad9821, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9599b4eaa4946fe8eac9c273bfad9821->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9599b4eaa4946fe8eac9c273bfad9821, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9599b4eaa4946fe8eac9c273bfad9821,
        type_description_1,
        par_dtype,
        par_ndim,
        par_shape,
        par_flags,
        var_num,
        var_cache_key,
        var_name,
        var_base,
        var_klass
    );


    // Release cached frame if used for exception.
    if (frame_9599b4eaa4946fe8eac9c273bfad9821 == cache_frame_9599b4eaa4946fe8eac9c273bfad9821) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9599b4eaa4946fe8eac9c273bfad9821);
        cache_frame_9599b4eaa4946fe8eac9c273bfad9821 = NULL;
    }

    assertFrameObject(frame_9599b4eaa4946fe8eac9c273bfad9821);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT(var_klass);
    tmp_return_value = var_klass;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_shape);
    par_shape = NULL;
    Py_XDECREF(par_flags);
    par_flags = NULL;
    Py_XDECREF(var_num);
    var_num = NULL;
    CHECK_OBJECT(var_cache_key);
    Py_DECREF(var_cache_key);
    var_cache_key = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    Py_XDECREF(var_klass);
    var_klass = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_dtype);
    par_dtype = NULL;
    Py_XDECREF(par_shape);
    par_shape = NULL;
    Py_XDECREF(par_flags);
    par_flags = NULL;
    Py_XDECREF(var_num);
    var_num = NULL;
    Py_XDECREF(var_cache_key);
    var_cache_key = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    Py_XDECREF(var_klass);
    var_klass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ndim);
    Py_DECREF(par_ndim);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ndim);
    Py_DECREF(par_ndim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ce0ae26eb3243902310a78bf9d1a4f2a, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 329;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_unicode_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_unicode_arg_1 = generator_heap->var_x;
        tmp_expression_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 329;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 329;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_context,
        module_numpy$ctypeslib,
        mod_consts[85],
#if PYTHON_VERSION >= 0x350
        mod_consts[86],
#endif
        codeobj_ce0ae26eb3243902310a78bf9d1a4f2a,
        closure,
        1,
        sizeof(struct numpy$ctypeslib$$$function__8_ndpointer$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_numpy$ctypeslib$$$function__9__ctype_ndarray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_element_type = python_pars[0];
    PyObject *par_shape = python_pars[1];
    PyObject *var_dim = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_54ed266637fa70f0638e65f87541456b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54ed266637fa70f0638e65f87541456b = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_54ed266637fa70f0638e65f87541456b)) {
        Py_XDECREF(cache_frame_54ed266637fa70f0638e65f87541456b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54ed266637fa70f0638e65f87541456b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54ed266637fa70f0638e65f87541456b = MAKE_FUNCTION_FRAME(codeobj_54ed266637fa70f0638e65f87541456b, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_54ed266637fa70f0638e65f87541456b->m_type_description == NULL);
    frame_54ed266637fa70f0638e65f87541456b = cache_frame_54ed266637fa70f0638e65f87541456b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_54ed266637fa70f0638e65f87541456b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_54ed266637fa70f0638e65f87541456b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_shape);
        tmp_expression_name_1 = par_shape;
        tmp_subscript_name_1 = mod_consts[87];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 350;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_dim;
            var_dim = tmp_assign_source_3;
            Py_INCREF(var_dim);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_dim);
        tmp_left_name_1 = var_dim;
        if (par_element_type == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_right_name_1 = par_element_type;
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_element_type;
            par_element_type = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_element_type);
        tmp_assattr_target_1 = par_element_type;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[89], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 350;
        type_description_1 = "ooo";
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
    if (par_element_type == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 354;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_element_type;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54ed266637fa70f0638e65f87541456b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_54ed266637fa70f0638e65f87541456b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54ed266637fa70f0638e65f87541456b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54ed266637fa70f0638e65f87541456b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54ed266637fa70f0638e65f87541456b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54ed266637fa70f0638e65f87541456b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54ed266637fa70f0638e65f87541456b,
        type_description_1,
        par_element_type,
        par_shape,
        var_dim
    );


    // Release cached frame if used for exception.
    if (frame_54ed266637fa70f0638e65f87541456b == cache_frame_54ed266637fa70f0638e65f87541456b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_54ed266637fa70f0638e65f87541456b);
        cache_frame_54ed266637fa70f0638e65f87541456b = NULL;
    }

    assertFrameObject(frame_54ed266637fa70f0638e65f87541456b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_element_type);
    par_element_type = NULL;
    Py_XDECREF(var_dim);
    var_dim = NULL;
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

    Py_XDECREF(par_element_type);
    par_element_type = NULL;
    Py_XDECREF(var_dim);
    var_dim = NULL;
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
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__10__get_scalar_type_map(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ct = NULL;
    PyObject *var_simple_types = NULL;
    PyObject *outline_0_var_ctype = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_bdb3fc50ca0f557fe8d6d408e5fd23ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_bb98fe3c36d591fc8e45bb5702c084f6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce)) {
        Py_XDECREF(cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce = MAKE_FUNCTION_FRAME(codeobj_bdb3fc50ca0f557fe8d6d408e5fd23ce, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce->m_type_description == NULL);
    frame_bdb3fc50ca0f557fe8d6d408e5fd23ce = cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ct == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_ct = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_ct);
        tmp_expression_name_1 = var_ct;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[91]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyList_New(13);
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_expression_name_12;
            PyObject *tmp_expression_name_13;
            PyList_SET_ITEM(tmp_assign_source_2, 0, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_2 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[92]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 1, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_3 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[93]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 2, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_4 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[94]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 3, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_5 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[95]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 4, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_6 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[96]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 5, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_7 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[97]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 6, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_8 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[98]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 7, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_9 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[99]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 8, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_10 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[100]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 9, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_11 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[101]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 10, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_12 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[102]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 11, tmp_list_element_1);
            CHECK_OBJECT(var_ct);
            tmp_expression_name_13 = var_ct;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[103]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_2, 12, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_simple_types == NULL);
        var_simple_types = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_simple_types);
        tmp_iter_arg_1 = var_simple_types;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_dictcontraction_1__$0 == NULL);
        tmp_dictcontraction_1__$0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        assert(tmp_dictcontraction_1__contraction == NULL);
        tmp_dictcontraction_1__contraction = tmp_assign_source_4;
    }
    if (isFrameUnusable(cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2)) {
        Py_XDECREF(cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2 = MAKE_FUNCTION_FRAME(codeobj_bb98fe3c36d591fc8e45bb5702c084f6, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2->m_type_description == NULL);
    frame_bb98fe3c36d591fc8e45bb5702c084f6_2 = cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bb98fe3c36d591fc8e45bb5702c084f6_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bb98fe3c36d591fc8e45bb5702c084f6_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 368;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
        tmp_assign_source_6 = tmp_dictcontraction_1__iter_value_0;
        {
            PyObject *old = outline_0_var_ctype;
            outline_0_var_ctype = tmp_assign_source_6;
            Py_INCREF(outline_0_var_ctype);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(outline_0_var_ctype);
        tmp_dictset_value = outline_0_var_ctype;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(outline_0_var_ctype);
        tmp_args_element_name_1 = outline_0_var_ctype;
        frame_bb98fe3c36d591fc8e45bb5702c084f6_2->m_frame.f_lineno = 368;
        tmp_dictset_key = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 368;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb98fe3c36d591fc8e45bb5702c084f6_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb98fe3c36d591fc8e45bb5702c084f6_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb98fe3c36d591fc8e45bb5702c084f6_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb98fe3c36d591fc8e45bb5702c084f6_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb98fe3c36d591fc8e45bb5702c084f6_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb98fe3c36d591fc8e45bb5702c084f6_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb98fe3c36d591fc8e45bb5702c084f6_2,
        type_description_2,
        outline_0_var_ctype
    );


    // Release cached frame if used for exception.
    if (frame_bb98fe3c36d591fc8e45bb5702c084f6_2 == cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2);
        cache_frame_bb98fe3c36d591fc8e45bb5702c084f6_2 = NULL;
    }

    assertFrameObject(frame_bb98fe3c36d591fc8e45bb5702c084f6_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_ctype);
    outline_0_var_ctype = NULL;
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

    Py_XDECREF(outline_0_var_ctype);
    outline_0_var_ctype = NULL;
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
    exception_lineno = 368;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdb3fc50ca0f557fe8d6d408e5fd23ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdb3fc50ca0f557fe8d6d408e5fd23ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdb3fc50ca0f557fe8d6d408e5fd23ce,
        type_description_1,
        var_ct,
        var_simple_types
    );


    // Release cached frame if used for exception.
    if (frame_bdb3fc50ca0f557fe8d6d408e5fd23ce == cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);
        cache_frame_bdb3fc50ca0f557fe8d6d408e5fd23ce = NULL;
    }

    assertFrameObject(frame_bdb3fc50ca0f557fe8d6d408e5fd23ce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ct);
    Py_DECREF(var_ct);
    var_ct = NULL;
    CHECK_OBJECT(var_simple_types);
    Py_DECREF(var_simple_types);
    var_simple_types = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_ct);
    var_ct = NULL;
    Py_XDECREF(var_simple_types);
    var_simple_types = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    PyObject *var_dtype_with_endian = NULL;
    PyObject *var_dtype_native = NULL;
    PyObject *var_ctype = NULL;
    struct Nuitka_FrameObject *frame_6169561d7f438d313f8d0cd5ca5679a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6169561d7f438d313f8d0cd5ca5679a7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6169561d7f438d313f8d0cd5ca5679a7)) {
        Py_XDECREF(cache_frame_6169561d7f438d313f8d0cd5ca5679a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6169561d7f438d313f8d0cd5ca5679a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6169561d7f438d313f8d0cd5ca5679a7 = MAKE_FUNCTION_FRAME(codeobj_6169561d7f438d313f8d0cd5ca5679a7, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6169561d7f438d313f8d0cd5ca5679a7->m_type_description == NULL);
    frame_6169561d7f438d313f8d0cd5ca5679a7 = cache_frame_6169561d7f438d313f8d0cd5ca5679a7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6169561d7f438d313f8d0cd5ca5679a7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6169561d7f438d313f8d0cd5ca5679a7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_2 = par_dtype;
        frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = 376;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[105],
            PyTuple_GET_ITEM(mod_consts[106], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = 376;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[105],
            PyTuple_GET_ITEM(mod_consts[106], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype_with_endian == NULL);
        var_dtype_with_endian = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_dtype);
        tmp_called_instance_3 = par_dtype;
        frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = 377;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[105],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype_native == NULL);
        var_dtype_native = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_dtype_native);
        tmp_subscript_name_1 = var_dtype_native;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_ctype == NULL);
        var_ctype = tmp_assign_source_3;
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6169561d7f438d313f8d0cd5ca5679a7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6169561d7f438d313f8d0cd5ca5679a7, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_4 = mod_consts[109];
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = 382;
        tmp_make_exception_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[110], tmp_args_element_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = 381;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 381;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 378;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame) frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_dtype_with_endian);
        tmp_expression_name_2 = var_dtype_with_endian;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[111]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[112];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_ctype);
        tmp_expression_name_3 = var_ctype;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[113]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ctype;
            assert(old != NULL);
            var_ctype = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_dtype_with_endian);
        tmp_expression_name_4 = var_dtype_with_endian;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[111]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[114];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(var_ctype);
        tmp_expression_name_5 = var_ctype;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[115]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ctype;
            assert(old != NULL);
            var_ctype = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    if (var_ctype == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 390;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ctype;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6169561d7f438d313f8d0cd5ca5679a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6169561d7f438d313f8d0cd5ca5679a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6169561d7f438d313f8d0cd5ca5679a7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6169561d7f438d313f8d0cd5ca5679a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6169561d7f438d313f8d0cd5ca5679a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6169561d7f438d313f8d0cd5ca5679a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6169561d7f438d313f8d0cd5ca5679a7,
        type_description_1,
        par_dtype,
        var_dtype_with_endian,
        var_dtype_native,
        var_ctype
    );


    // Release cached frame if used for exception.
    if (frame_6169561d7f438d313f8d0cd5ca5679a7 == cache_frame_6169561d7f438d313f8d0cd5ca5679a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6169561d7f438d313f8d0cd5ca5679a7);
        cache_frame_6169561d7f438d313f8d0cd5ca5679a7 = NULL;
    }

    assertFrameObject(frame_6169561d7f438d313f8d0cd5ca5679a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dtype_with_endian);
    Py_DECREF(var_dtype_with_endian);
    var_dtype_with_endian = NULL;
    CHECK_OBJECT(var_dtype_native);
    Py_DECREF(var_dtype_native);
    var_dtype_native = NULL;
    Py_XDECREF(var_ctype);
    var_ctype = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_dtype_with_endian);
    var_dtype_with_endian = NULL;
    Py_XDECREF(var_dtype_native);
    var_dtype_native = NULL;
    Py_XDECREF(var_ctype);
    var_ctype = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    PyObject *var_element_dtype = NULL;
    PyObject *var_shape = NULL;
    PyObject *var_ctype = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b11ed495b62885d596cdce7671841004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b11ed495b62885d596cdce7671841004 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b11ed495b62885d596cdce7671841004)) {
        Py_XDECREF(cache_frame_b11ed495b62885d596cdce7671841004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b11ed495b62885d596cdce7671841004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b11ed495b62885d596cdce7671841004 = MAKE_FUNCTION_FRAME(codeobj_b11ed495b62885d596cdce7671841004, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b11ed495b62885d596cdce7671841004->m_type_description == NULL);
    frame_b11ed495b62885d596cdce7671841004 = cache_frame_b11ed495b62885d596cdce7671841004;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b11ed495b62885d596cdce7671841004);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b11ed495b62885d596cdce7671841004) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_1 = par_dtype;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[117]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 394;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 394;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooo";
                    exception_lineno = 394;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[118];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 394;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_element_dtype == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_element_dtype = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_shape == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_shape = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_element_dtype);
        tmp_args_element_name_1 = var_element_dtype;
        frame_b11ed495b62885d596cdce7671841004->m_frame.f_lineno = 395;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctype == NULL);
        var_ctype = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctype);
        tmp_args_element_name_2 = var_ctype;
        CHECK_OBJECT(var_shape);
        tmp_args_element_name_3 = var_shape;
        frame_b11ed495b62885d596cdce7671841004->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b11ed495b62885d596cdce7671841004);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b11ed495b62885d596cdce7671841004);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b11ed495b62885d596cdce7671841004);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b11ed495b62885d596cdce7671841004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b11ed495b62885d596cdce7671841004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b11ed495b62885d596cdce7671841004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b11ed495b62885d596cdce7671841004,
        type_description_1,
        par_dtype,
        var_element_dtype,
        var_shape,
        var_ctype
    );


    // Release cached frame if used for exception.
    if (frame_b11ed495b62885d596cdce7671841004 == cache_frame_b11ed495b62885d596cdce7671841004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b11ed495b62885d596cdce7671841004);
        cache_frame_b11ed495b62885d596cdce7671841004 = NULL;
    }

    assertFrameObject(frame_b11ed495b62885d596cdce7671841004);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_element_dtype);
    Py_DECREF(var_element_dtype);
    var_element_dtype = NULL;
    CHECK_OBJECT(var_shape);
    Py_DECREF(var_shape);
    var_shape = NULL;
    CHECK_OBJECT(var_ctype);
    Py_DECREF(var_ctype);
    var_ctype = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_element_dtype);
    var_element_dtype = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_ctype);
    var_ctype = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    PyObject *var_field_data = NULL;
    PyObject *var_name = NULL;
    PyObject *var_field_dtype = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_size = NULL;
    PyObject *var__fields_ = NULL;
    PyObject *var_ctype = NULL;
    PyObject *var_last_offset = NULL;
    PyObject *var_padding = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_805b07d97956b3a784b8c20901cb2a62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_805b07d97956b3a784b8c20901cb2a62 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_field_data == NULL);
        var_field_data = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_805b07d97956b3a784b8c20901cb2a62)) {
        Py_XDECREF(cache_frame_805b07d97956b3a784b8c20901cb2a62);

#if _DEBUG_REFCOUNTS
        if (cache_frame_805b07d97956b3a784b8c20901cb2a62 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_805b07d97956b3a784b8c20901cb2a62 = MAKE_FUNCTION_FRAME(codeobj_805b07d97956b3a784b8c20901cb2a62, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_805b07d97956b3a784b8c20901cb2a62->m_type_description == NULL);
    frame_805b07d97956b3a784b8c20901cb2a62 = cache_frame_805b07d97956b3a784b8c20901cb2a62;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_805b07d97956b3a784b8c20901cb2a62);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_805b07d97956b3a784b8c20901cb2a62) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_1 = par_dtype;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[74]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 402;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_4;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_4 = par_dtype;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[121]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_name);
        tmp_subscript_name_1 = var_name;
        tmp_expression_name_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_2 = mod_consts[122];
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 403;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 403;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 403;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[118];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 403;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_field_dtype;
            var_field_dtype = tmp_assign_source_8;
            Py_INCREF(var_field_dtype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_9;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        if (var_field_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_5 = var_field_data;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[34]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_offset);
        tmp_tuple_element_1 = var_offset;
        tmp_args_element_name_1 = PyTuple_New(3);
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyTuple_SET_ITEM0(tmp_args_element_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_name);
            tmp_tuple_element_1 = var_name;
            PyTuple_SET_ITEM0(tmp_args_element_name_1, 1, tmp_tuple_element_1);
            tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_called_name_2 == NULL)) {
                tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_field_dtype);
            tmp_args_element_name_2 = var_field_dtype;
            frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 404;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 404;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 402;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[124]);
        assert(tmp_called_name_3 != NULL);
        if (var_field_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_field_data;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda();

        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 407;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_3, args, kw_values, mod_consts[127]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_field_data;
            var_field_data = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_field_data);
        tmp_len_arg_1 = var_field_data;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[13];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_and_left_value_1_object_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_field_data);
            tmp_iter_arg_3 = var_field_data;
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_11;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 409;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[6];
        assert(var_size == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_size = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New(0);
        assert(var__fields_ == NULL);
        var__fields_ = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_field_data);
        tmp_iter_arg_4 = var_field_data;
        tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 413;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 413;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 413;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 413;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 413;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[128];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 413;
            goto try_except_handler_8;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_20;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_21;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_ctype;
            var_ctype = tmp_assign_source_22;
            Py_INCREF(var_ctype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_2;
        if (var__fields_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_1 = var__fields_;
        CHECK_OBJECT(var_name);
        tmp_tuple_element_2 = var_name;
        tmp_args_element_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_ctype);
        tmp_tuple_element_2 = var_ctype;
        PyTuple_SET_ITEM0(tmp_args_element_name_3, 1, tmp_tuple_element_2);
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 414;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_4 = LOOKUP_BUILTIN(mod_consts[130]);
        assert(tmp_called_name_4 != NULL);
        if (var_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_name_4 = var_size;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_ctype);
        tmp_args_element_name_6 = var_ctype;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 415;
        tmp_args_element_name_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[132], tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_size;
            var_size = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 413;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_6;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_dtype;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[55]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_size == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = var_size;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_3;
        if (var__fields_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var__fields_;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[34]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[133];
        tmp_args_element_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_right_name_1;
            PyObject *tmp_expression_name_9;
            PyTuple_SET_ITEM0(tmp_args_element_name_7, 0, tmp_tuple_element_3);
            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_8 == NULL)) {
                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[54]);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            if (par_dtype == NULL) {
                Py_DECREF(tmp_left_name_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 419;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_name_9 = par_dtype;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[55]);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 419;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_7, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 419;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        PyObject *tmp_type_name_name_1;
        PyObject *tmp_bases_name_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_type_name_name_1 = mod_consts[134];
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[135]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bases_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_bases_name_1, 0, tmp_tuple_element_4);
        tmp_dict_key_1 = mod_consts[129];
        if (var__fields_ == NULL) {
            Py_DECREF(tmp_bases_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var__fields_;
        tmp_dict_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[136];
        tmp_dict_value_1 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[89];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_return_value = BUILTIN_TYPE3(mod_consts[83], tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1);
        Py_DECREF(tmp_bases_name_1);
        Py_DECREF(tmp_dict_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[6];
        assert(var_last_offset == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_last_offset = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyList_New(0);
        assert(var__fields_ == NULL);
        var__fields_ = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_field_data);
        tmp_iter_arg_6 = var_field_data;
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_26;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 430;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
        tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_6, 0, 3);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 430;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_7, 1, 3);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 430;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_8, 2, 3);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 430;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 430;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[128];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 430;
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_offset;
            var_offset = tmp_assign_source_32;
            Py_INCREF(var_offset);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_33;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_34 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_ctype;
            var_ctype = tmp_assign_source_34;
            Py_INCREF(var_ctype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_offset);
        tmp_left_name_2 = var_offset;
        if (var_last_offset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[137]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }

        tmp_right_name_2 = var_last_offset;
        tmp_assign_source_35 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_padding;
            var_padding = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_padding);
        tmp_compexpr_left_3 = var_padding;
        tmp_compexpr_right_3 = mod_consts[6];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 432;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[138];
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 433;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 433;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_padding);
        tmp_compexpr_left_4 = var_padding;
        tmp_compexpr_right_4 = mod_consts[6];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 434;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_5;
        if (var__fields_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_name_11 = var__fields_;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[34]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_tuple_element_5 = mod_consts[133];
        tmp_args_element_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_expression_name_12;
            PyObject *tmp_right_name_3;
            PyTuple_SET_ITEM0(tmp_args_element_name_8, 0, tmp_tuple_element_5);
            tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_12 == NULL)) {
                tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_left_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[54]);
            if (tmp_left_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_padding);
            tmp_right_name_3 = var_padding;
            tmp_tuple_element_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
            Py_DECREF(tmp_left_name_3);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_8, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_8);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 435;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_6;
        if (var__fields_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_3 = var__fields_;
        CHECK_OBJECT(var_name);
        tmp_tuple_element_6 = var_name;
        tmp_args_element_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_9, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_ctype);
        tmp_tuple_element_6 = var_ctype;
        PyTuple_SET_ITEM0(tmp_args_element_name_9, 1, tmp_tuple_element_6);
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 437;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[34], tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(var_offset);
        tmp_left_name_4 = var_offset;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_ctype);
        tmp_args_element_name_10 = var_ctype;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 438;
        tmp_right_name_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[132], tmp_args_element_name_10);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_last_offset;
            var_last_offset = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 430;
        type_description_1 = "oooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_left_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_right_name_5;
        if (par_dtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = par_dtype;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[55]);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_last_offset == NULL) {
            Py_DECREF(tmp_left_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[137]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_5 = var_last_offset;
        tmp_assign_source_37 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_padding;
            var_padding = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_padding);
        tmp_compexpr_left_5 = var_padding;
        tmp_compexpr_right_5 = mod_consts[6];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 442;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_tuple_element_7;
        if (var__fields_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = var__fields_;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[34]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = mod_consts[133];
        tmp_args_element_name_11 = PyTuple_New(2);
        {
            PyObject *tmp_left_name_6;
            PyObject *tmp_expression_name_15;
            PyObject *tmp_right_name_6;
            PyTuple_SET_ITEM0(tmp_args_element_name_11, 0, tmp_tuple_element_7);
            tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_15 == NULL)) {
                tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_left_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[54]);
            if (tmp_left_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            CHECK_OBJECT(var_padding);
            tmp_right_name_6 = var_padding;
            tmp_tuple_element_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_6);
            Py_DECREF(tmp_left_name_6);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_element_name_11, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        frame_805b07d97956b3a784b8c20901cb2a62->m_frame.f_lineno = 443;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_5:;
    {
        PyObject *tmp_type_name_name_2;
        PyObject *tmp_bases_name_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_type_name_name_2 = mod_consts[139];
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[140]);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bases_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_bases_name_2, 0, tmp_tuple_element_8);
        tmp_dict_key_2 = mod_consts[129];
        if (var__fields_ == NULL) {
            Py_DECREF(tmp_bases_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_2 = var__fields_;
        tmp_dict_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dict_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[136];
        tmp_dict_value_2 = mod_consts[13];
        tmp_res = PyDict_SetItem(tmp_dict_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[89];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_dict_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_return_value = BUILTIN_TYPE3(mod_consts[83], tmp_type_name_name_2, tmp_bases_name_2, tmp_dict_name_2);
        Py_DECREF(tmp_bases_name_2);
        Py_DECREF(tmp_dict_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_805b07d97956b3a784b8c20901cb2a62);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_805b07d97956b3a784b8c20901cb2a62);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_805b07d97956b3a784b8c20901cb2a62);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_805b07d97956b3a784b8c20901cb2a62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_805b07d97956b3a784b8c20901cb2a62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_805b07d97956b3a784b8c20901cb2a62, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_805b07d97956b3a784b8c20901cb2a62,
        type_description_1,
        par_dtype,
        var_field_data,
        var_name,
        var_field_dtype,
        var_offset,
        var_size,
        var__fields_,
        var_ctype,
        var_last_offset,
        var_padding
    );


    // Release cached frame if used for exception.
    if (frame_805b07d97956b3a784b8c20901cb2a62 == cache_frame_805b07d97956b3a784b8c20901cb2a62) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_805b07d97956b3a784b8c20901cb2a62);
        cache_frame_805b07d97956b3a784b8c20901cb2a62 = NULL;
    }

    assertFrameObject(frame_805b07d97956b3a784b8c20901cb2a62);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_field_data);
    Py_DECREF(var_field_data);
    var_field_data = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_field_dtype);
    var_field_dtype = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var__fields_);
    var__fields_ = NULL;
    Py_XDECREF(var_ctype);
    var_ctype = NULL;
    Py_XDECREF(var_last_offset);
    var_last_offset = NULL;
    Py_XDECREF(var_padding);
    var_padding = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_field_data);
    var_field_data = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_field_dtype);
    var_field_dtype = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var__fields_);
    var__fields_ = NULL;
    Py_XDECREF(var_ctype);
    var_ctype = NULL;
    Py_XDECREF(var_last_offset);
    var_last_offset = NULL;
    Py_XDECREF(var_padding);
    var_padding = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_9e3acfe6eb4c8b85d4d1d0367afbadf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5)) {
        Py_XDECREF(cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 = MAKE_FUNCTION_FRAME(codeobj_9e3acfe6eb4c8b85d4d1d0367afbadf5, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5->m_type_description == NULL);
    frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 = cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_f);
        tmp_expression_name_1 = par_f;
        tmp_subscript_name_1 = mod_consts[6];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e3acfe6eb4c8b85d4d1d0367afbadf5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e3acfe6eb4c8b85d4d1d0367afbadf5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e3acfe6eb4c8b85d4d1d0367afbadf5,
        type_description_1,
        par_f
    );


    // Release cached frame if used for exception.
    if (frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 == cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);
        cache_frame_9e3acfe6eb4c8b85d4d1d0367afbadf5 = NULL;
    }

    assertFrameObject(frame_9e3acfe6eb4c8b85d4d1d0367afbadf5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_locals {
    PyObject *var_offset;
    PyObject *var_name;
    PyObject *var_ctype;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_offset = NULL;
    generator_heap->var_name = NULL;
    generator_heap->var_ctype = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_64b9cc4e38727b1a89b35ed2ce8cb417, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nooo";
                generator_heap->exception_lineno = 409;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 409;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 409;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 409;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 409;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
            generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Nooo";
                    generator_heap->exception_lineno = 409;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[128];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Nooo";
            generator_heap->exception_lineno = 409;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_offset;
            generator_heap->var_offset = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_offset);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_name;
            generator_heap->var_name = tmp_assign_source_7;
            Py_INCREF(generator_heap->var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = generator_heap->var_ctype;
            generator_heap->var_ctype = tmp_assign_source_8;
            Py_INCREF(generator_heap->var_ctype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_offset);
        tmp_compexpr_left_1 = generator_heap->var_offset;
        tmp_compexpr_right_1 = mod_consts[6];
        tmp_expression_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 409;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 409;
            generator_heap->type_description_1 = "Nooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 409;
        generator_heap->type_description_1 = "Nooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_offset,
            generator_heap->var_name,
            generator_heap->var_ctype
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_offset);
    generator_heap->var_offset = NULL;
    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;
    Py_XDECREF(generator_heap->var_ctype);
    generator_heap->var_ctype = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_offset);
    generator_heap->var_offset = NULL;
    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;
    Py_XDECREF(generator_heap->var_ctype);
    generator_heap->var_ctype = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_context,
        module_numpy$ctypeslib,
        mod_consts[85],
#if PYTHON_VERSION >= 0x350
        mod_consts[141],
#endif
        codeobj_64b9cc4e38727b1a89b35ed2ce8cb417,
        closure,
        1,
        sizeof(struct numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_numpy$ctypeslib$$$function__14__ctype_from_dtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    struct Nuitka_FrameObject *frame_bf207cfca04fa377db2af16d8fa361eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf207cfca04fa377db2af16d8fa361eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf207cfca04fa377db2af16d8fa361eb)) {
        Py_XDECREF(cache_frame_bf207cfca04fa377db2af16d8fa361eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf207cfca04fa377db2af16d8fa361eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf207cfca04fa377db2af16d8fa361eb = MAKE_FUNCTION_FRAME(codeobj_bf207cfca04fa377db2af16d8fa361eb, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf207cfca04fa377db2af16d8fa361eb->m_type_description == NULL);
    frame_bf207cfca04fa377db2af16d8fa361eb = cache_frame_bf207cfca04fa377db2af16d8fa361eb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf207cfca04fa377db2af16d8fa361eb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf207cfca04fa377db2af16d8fa361eb) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_1 = par_dtype;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[121]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_1 = par_dtype;
        frame_bf207cfca04fa377db2af16d8fa361eb->m_frame.f_lineno = 455;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_dtype);
        tmp_expression_name_2 = par_dtype;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[117]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_2 = par_dtype;
        frame_bf207cfca04fa377db2af16d8fa361eb->m_frame.f_lineno = 457;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_3 = par_dtype;
        frame_bf207cfca04fa377db2af16d8fa361eb->m_frame.f_lineno = 459;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf207cfca04fa377db2af16d8fa361eb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf207cfca04fa377db2af16d8fa361eb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf207cfca04fa377db2af16d8fa361eb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf207cfca04fa377db2af16d8fa361eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf207cfca04fa377db2af16d8fa361eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf207cfca04fa377db2af16d8fa361eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf207cfca04fa377db2af16d8fa361eb,
        type_description_1,
        par_dtype
    );


    // Release cached frame if used for exception.
    if (frame_bf207cfca04fa377db2af16d8fa361eb == cache_frame_bf207cfca04fa377db2af16d8fa361eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf207cfca04fa377db2af16d8fa361eb);
        cache_frame_bf207cfca04fa377db2af16d8fa361eb = NULL;
    }

    assertFrameObject(frame_bf207cfca04fa377db2af16d8fa361eb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__15_as_ctypes_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[0];
    struct Nuitka_FrameObject *frame_1032b84398e71d2903f09f6ae142f08e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1032b84398e71d2903f09f6ae142f08e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1032b84398e71d2903f09f6ae142f08e)) {
        Py_XDECREF(cache_frame_1032b84398e71d2903f09f6ae142f08e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1032b84398e71d2903f09f6ae142f08e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1032b84398e71d2903f09f6ae142f08e = MAKE_FUNCTION_FRAME(codeobj_1032b84398e71d2903f09f6ae142f08e, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1032b84398e71d2903f09f6ae142f08e->m_type_description == NULL);
    frame_1032b84398e71d2903f09f6ae142f08e = cache_frame_1032b84398e71d2903f09f6ae142f08e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1032b84398e71d2903f09f6ae142f08e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1032b84398e71d2903f09f6ae142f08e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dtype);
        tmp_args_element_name_2 = par_dtype;
        frame_1032b84398e71d2903f09f6ae142f08e->m_frame.f_lineno = 500;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1032b84398e71d2903f09f6ae142f08e->m_frame.f_lineno = 500;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1032b84398e71d2903f09f6ae142f08e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1032b84398e71d2903f09f6ae142f08e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1032b84398e71d2903f09f6ae142f08e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1032b84398e71d2903f09f6ae142f08e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1032b84398e71d2903f09f6ae142f08e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1032b84398e71d2903f09f6ae142f08e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1032b84398e71d2903f09f6ae142f08e,
        type_description_1,
        par_dtype
    );


    // Release cached frame if used for exception.
    if (frame_1032b84398e71d2903f09f6ae142f08e == cache_frame_1032b84398e71d2903f09f6ae142f08e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1032b84398e71d2903f09f6ae142f08e);
        cache_frame_1032b84398e71d2903f09f6ae142f08e = NULL;
    }

    assertFrameObject(frame_1032b84398e71d2903f09f6ae142f08e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__16_as_array(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_shape = python_pars[1];
    PyObject *var_p_arr_type = NULL;
    struct Nuitka_FrameObject *frame_48e5199e6769940467bb440a09e87398;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_48e5199e6769940467bb440a09e87398 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_48e5199e6769940467bb440a09e87398)) {
        Py_XDECREF(cache_frame_48e5199e6769940467bb440a09e87398);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48e5199e6769940467bb440a09e87398 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48e5199e6769940467bb440a09e87398 = MAKE_FUNCTION_FRAME(codeobj_48e5199e6769940467bb440a09e87398, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_48e5199e6769940467bb440a09e87398->m_type_description == NULL);
    frame_48e5199e6769940467bb440a09e87398 = cache_frame_48e5199e6769940467bb440a09e87398;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_48e5199e6769940467bb440a09e87398);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_48e5199e6769940467bb440a09e87398) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[146]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_shape);
        tmp_compexpr_left_1 = par_shape;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[147];
        frame_48e5199e6769940467bb440a09e87398->m_frame.f_lineno = 515;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 515;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[57]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_expression_name_3 = par_obj;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[148]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shape);
        tmp_args_element_name_3 = par_shape;
        frame_48e5199e6769940467bb440a09e87398->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_48e5199e6769940467bb440a09e87398->m_frame.f_lineno = 518;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_p_arr_type == NULL);
        var_p_arr_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_name_4 = par_obj;
        CHECK_OBJECT(var_p_arr_type);
        tmp_args_element_name_5 = var_p_arr_type;
        frame_48e5199e6769940467bb440a09e87398->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_expression_name_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[56],
                call_args
            );
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[51]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_obj;
            assert(old != NULL);
            par_obj = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_tuple_element_1 = par_obj;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[150]);
        frame_48e5199e6769940467bb440a09e87398->m_frame.f_lineno = 521;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48e5199e6769940467bb440a09e87398);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_48e5199e6769940467bb440a09e87398);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48e5199e6769940467bb440a09e87398);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48e5199e6769940467bb440a09e87398, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48e5199e6769940467bb440a09e87398->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48e5199e6769940467bb440a09e87398, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48e5199e6769940467bb440a09e87398,
        type_description_1,
        par_obj,
        par_shape,
        var_p_arr_type
    );


    // Release cached frame if used for exception.
    if (frame_48e5199e6769940467bb440a09e87398 == cache_frame_48e5199e6769940467bb440a09e87398) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_48e5199e6769940467bb440a09e87398);
        cache_frame_48e5199e6769940467bb440a09e87398 = NULL;
    }

    assertFrameObject(frame_48e5199e6769940467bb440a09e87398);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;
    Py_XDECREF(var_p_arr_type);
    var_p_arr_type = NULL;
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

    Py_XDECREF(par_obj);
    par_obj = NULL;
    Py_XDECREF(var_p_arr_type);
    var_p_arr_type = NULL;
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
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$ctypeslib$$$function__17_as_ctypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *var_ai = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_readonly = NULL;
    PyObject *var_ctype_scalar = NULL;
    PyObject *var_result_type = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_489ce008c66c5c37dd5a8c8e3bb7f0e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0)) {
        Py_XDECREF(cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 = MAKE_FUNCTION_FRAME(codeobj_489ce008c66c5c37dd5a8c8e3bb7f0e0, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_type_description == NULL);
    frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 = cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_name_1 = par_obj;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[152]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ai == NULL);
        var_ai = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ai);
        tmp_expression_name_2 = var_ai;
        tmp_subscript_name_1 = mod_consts[153];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[154];
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 529;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 529;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_ai);
        tmp_expression_name_3 = var_ai;
        tmp_subscript_name_2 = mod_consts[155];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[156];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[157];
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 531;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 531;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_ai);
        tmp_expression_name_4 = var_ai;
        tmp_subscript_name_3 = mod_consts[158];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 532;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 532;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 532;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[118];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 532;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_addr == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_addr = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_readonly == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_readonly = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_readonly);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_readonly);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[159];
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 534;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 534;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_4;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ai);
        tmp_expression_name_5 = var_ai;
        tmp_subscript_name_4 = mod_consts[161];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_4);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 538;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctype_scalar == NULL);
        var_ctype_scalar = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_5;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctype_scalar);
        tmp_args_element_name_2 = var_ctype_scalar;
        CHECK_OBJECT(var_ai);
        tmp_expression_name_6 = var_ai;
        tmp_subscript_name_5 = mod_consts[45];
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result_type == NULL);
        var_result_type = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_result_type);
        tmp_called_instance_1 = var_result_type;
        CHECK_OBJECT(var_addr);
        tmp_args_element_name_4 = var_addr;
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame.f_lineno = 540;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[162], tmp_args_element_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_obj);
        tmp_assattr_value_1 = par_obj;
        CHECK_OBJECT(var_result);
        tmp_assattr_target_1 = var_result;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[163], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_489ce008c66c5c37dd5a8c8e3bb7f0e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_489ce008c66c5c37dd5a8c8e3bb7f0e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_489ce008c66c5c37dd5a8c8e3bb7f0e0,
        type_description_1,
        par_obj,
        var_ai,
        var_addr,
        var_readonly,
        var_ctype_scalar,
        var_result_type,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 == cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);
        cache_frame_489ce008c66c5c37dd5a8c8e3bb7f0e0 = NULL;
    }

    assertFrameObject(frame_489ce008c66c5c37dd5a8c8e3bb7f0e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ai);
    Py_DECREF(var_ai);
    var_ai = NULL;
    CHECK_OBJECT(var_addr);
    Py_DECREF(var_addr);
    var_addr = NULL;
    CHECK_OBJECT(var_readonly);
    Py_DECREF(var_readonly);
    var_readonly = NULL;
    CHECK_OBJECT(var_ctype_scalar);
    Py_DECREF(var_ctype_scalar);
    var_ctype_scalar = NULL;
    CHECK_OBJECT(var_result_type);
    Py_DECREF(var_result_type);
    var_result_type = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_ai);
    var_ai = NULL;
    Py_XDECREF(var_addr);
    var_addr = NULL;
    Py_XDECREF(var_readonly);
    var_readonly = NULL;
    Py_XDECREF(var_ctype_scalar);
    var_ctype_scalar = NULL;
    Py_XDECREF(var_result_type);
    var_result_type = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__10__get_scalar_type_map() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__10__get_scalar_type_map,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bdb3fc50ca0f557fe8d6d408e5fd23ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6169561d7f438d313f8d0cd5ca5679a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b11ed495b62885d596cdce7671841004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_805b07d97956b3a784b8c20901cb2a62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_9e3acfe6eb4c8b85d4d1d0367afbadf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__14__ctype_from_dtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__14__ctype_from_dtype,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf207cfca04fa377db2af16d8fa361eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__15_as_ctypes_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__15_as_ctypes_type,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1032b84398e71d2903f09f6ae142f08e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__16_as_array(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__16_as_array,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_48e5199e6769940467bb440a09e87398,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[151],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__17_as_ctypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__17_as_ctypes,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_489ce008c66c5c37dd5a8c8e3bb7f0e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[164],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__1__dummy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__1__dummy,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18f22e436fc9c03dc5d8053490ae6284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__2_load_library() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__2_load_library,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c90b4813f743b503104074a2e0ab649,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__3__num_fromflags() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__3__num_fromflags,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82fd3f7b123c7b68729a44ab06d762ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__4__flags_fromnum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__4__flags_fromnum,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22f949a58d83da28fbf65ad4a0f32a96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__5_from_param() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__5_from_param,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_070ce791ff3383c5663b0b2bf7fc5556,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__6__check_retval_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__6__check_retval_,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_57f60c25fbccd88db4ba36d4129ac49f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__7_contents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__7_contents,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_29e8bce9d582afae5b31a415dac561bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__8_ndpointer(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__8_ndpointer,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9599b4eaa4946fe8eac9c273bfad9821,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function__9__ctype_ndarray() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function__9__ctype_ndarray,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54ed266637fa70f0638e65f87541456b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ctypeslib,
        mod_consts[90],
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

function_impl_code functable_numpy$ctypeslib[] = {
    impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured$$$function__1_lambda,
    impl_numpy$ctypeslib$$$function__1__dummy,
    impl_numpy$ctypeslib$$$function__2_load_library,
    impl_numpy$ctypeslib$$$function__3__num_fromflags,
    impl_numpy$ctypeslib$$$function__4__flags_fromnum,
    impl_numpy$ctypeslib$$$function__5_from_param,
    impl_numpy$ctypeslib$$$function__6__check_retval_,
    impl_numpy$ctypeslib$$$function__7_contents,
    impl_numpy$ctypeslib$$$function__8_ndpointer,
    impl_numpy$ctypeslib$$$function__9__ctype_ndarray,
    impl_numpy$ctypeslib$$$function__10__get_scalar_type_map,
    impl_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar,
    impl_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray,
    impl_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured,
    impl_numpy$ctypeslib$$$function__14__ctype_from_dtype,
    impl_numpy$ctypeslib$$$function__15_as_ctypes_type,
    impl_numpy$ctypeslib$$$function__16_as_array,
    impl_numpy$ctypeslib$$$function__17_as_ctypes,
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

    function_impl_code *current = functable_numpy$ctypeslib;
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

    if (offset > sizeof(functable_numpy$ctypeslib) || offset < 0) {
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
        functable_numpy$ctypeslib[offset],
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
        module_numpy$ctypeslib,
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
PyObject *modulecode_numpy$ctypeslib(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_numpy$ctypeslib = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

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

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.ctypeslib: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.ctypeslib: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("numpy.ctypeslib: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initnumpy$ctypeslib\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_numpy$ctypeslib = MODULE_DICT(module_numpy$ctypeslib);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$ctypeslib,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$ctypeslib,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$ctypeslib,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$ctypeslib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$ctypeslib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$ctypeslib);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$ctypeslib);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_a92afbb0f8259bbc84c7d93f72569ad7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numpy$ctypeslib$$$class__1__ndptr_177 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fe21879ce327eb39635c598e4d40aace_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fe21879ce327eb39635c598e4d40aace_2 = NULL;
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
    PyObject *locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198 = NULL;
    struct Nuitka_FrameObject *frame_c88f370276517982f84ff519a4ca12dc_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c88f370276517982f84ff519a4ca12dc_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_a92afbb0f8259bbc84c7d93f72569ad7 = MAKE_MODULE_FRAME(codeobj_a92afbb0f8259bbc84c7d93f72569ad7, module_numpy$ctypeslib);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a92afbb0f8259bbc84c7d93f72569ad7);
    assert(Py_REFCNT(frame_a92afbb0f8259bbc84c7d93f72569ad7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[169], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[170], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[172]);
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 55;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[174];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[175];
        tmp_level_name_1 = mod_consts[6];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 56;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[66],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[66]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[35],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[35]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[38],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[38]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[176],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[176]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[149],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[149]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[58],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[58]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[177];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[178];
        tmp_level_name_2 = mod_consts[6];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 59;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[31],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[31]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[67],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[67]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_15);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[2];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[6];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 62;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_16);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_a92afbb0f8259bbc84c7d93f72569ad7, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_a92afbb0f8259bbc84c7d93f72569ad7, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_17);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame) frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_compexpr_left_2 == NULL)) {
            tmp_compexpr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_numpy$ctypeslib$$$function__1__dummy();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assign_source_19 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assign_source_20 == NULL)) {
            tmp_assign_source_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assign_source_20 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assign_source_21 == NULL)) {
            tmp_assign_source_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assign_source_21 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assign_source_22 == NULL)) {
            tmp_assign_source_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[174];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[184];
        tmp_level_name_4 = mod_consts[6];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 82;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[185],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = (PyObject *)&PyBaseObject_Type;
        UPDATE_STRING_DICT0(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_24);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[188];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_numpy$ctypeslib;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[6];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 85;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_import_name_from_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[189],
                mod_consts[6]
            );
        } else {
            tmp_import_name_from_10 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[189]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy$ctypeslib,
                mod_consts[190],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[190]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[191]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 86;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[192]);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_26);
    }
    tmp_res = PyDict_DelItem((PyObject *)moduledict_numpy$ctypeslib, mod_consts[191]);
    tmp_result = tmp_res != -1;
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[191]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[193]);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_numpy$ctypeslib$$$function__2_load_library();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        assert(!(tmp_args_element_name_1 == NULL));
        tmp_args_element_name_2 = mod_consts[180];
        tmp_args_element_name_3 = mod_consts[181];
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_29);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_numpy$ctypeslib$$$function__3__num_fromflags();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = LIST_COPY(mod_consts[194]);
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_numpy$ctypeslib$$$function__4__flags_fromnum();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_32);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[187]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        tmp_assign_source_33 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[195];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[195];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_2 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[6];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[195];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[195];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 177;

        goto try_except_handler_5;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[196]);
        tmp_condition_result_5 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_4 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[196]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[81];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 177;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_5, mod_consts[197]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[198];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[199];
        tmp_getattr_default_1 = mod_consts[200];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[199]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 177;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_37;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$ctypeslib$$$class__1__ndptr_177 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__1__ndptr_177, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__1__ndptr_177, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_fe21879ce327eb39635c598e4d40aace_2)) {
            Py_XDECREF(cache_frame_fe21879ce327eb39635c598e4d40aace_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fe21879ce327eb39635c598e4d40aace_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fe21879ce327eb39635c598e4d40aace_2 = MAKE_FUNCTION_FRAME(codeobj_fe21879ce327eb39635c598e4d40aace, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fe21879ce327eb39635c598e4d40aace_2->m_type_description == NULL);
        frame_fe21879ce327eb39635c598e4d40aace_2 = cache_frame_fe21879ce327eb39635c598e4d40aace_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fe21879ce327eb39635c598e4d40aace_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fe21879ce327eb39635c598e4d40aace_2) == 2); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_numpy$ctypeslib$$$class__1__ndptr_177, mod_consts[202]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_3 = PyObject_GetItem(locals_numpy$ctypeslib$$$class__1__ndptr_177, mod_consts[202]);

            if (unlikely(tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[202]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_name_4 = MAKE_FUNCTION_numpy$ctypeslib$$$function__5_from_param();

            frame_fe21879ce327eb39635c598e4d40aace_2->m_frame.f_lineno = 178;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_numpy$ctypeslib$$$function__5_from_param();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__1__ndptr_177, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fe21879ce327eb39635c598e4d40aace_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fe21879ce327eb39635c598e4d40aace_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fe21879ce327eb39635c598e4d40aace_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fe21879ce327eb39635c598e4d40aace_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fe21879ce327eb39635c598e4d40aace_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fe21879ce327eb39635c598e4d40aace_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fe21879ce327eb39635c598e4d40aace_2 == cache_frame_fe21879ce327eb39635c598e4d40aace_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fe21879ce327eb39635c598e4d40aace_2);
            cache_frame_fe21879ce327eb39635c598e4d40aace_2 = NULL;
        }

        assertFrameObject(frame_fe21879ce327eb39635c598e4d40aace_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[81];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_numpy$ctypeslib$$$class__1__ndptr_177;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 177;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_38 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_numpy$ctypeslib$$$class__1__ndptr_177);
        locals_numpy$ctypeslib$$$class__1__ndptr_177 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numpy$ctypeslib$$$class__1__ndptr_177);
        locals_numpy$ctypeslib$$$class__1__ndptr_177 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 177;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_38);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        tmp_assign_source_40 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[195];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[195];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_7 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[6];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[195];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[195];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 198;

        goto try_except_handler_8;
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_8, mod_consts[196]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_9 = tmp_class_creation_2__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[196]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[80];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 198;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_10, mod_consts[197]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[198];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[199];
        tmp_getattr_default_2 = mod_consts[200];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_11 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[199]);
            Py_DECREF(tmp_expression_name_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 198;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[205];
        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[166], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_c88f370276517982f84ff519a4ca12dc_3)) {
            Py_XDECREF(cache_frame_c88f370276517982f84ff519a4ca12dc_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c88f370276517982f84ff519a4ca12dc_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c88f370276517982f84ff519a4ca12dc_3 = MAKE_FUNCTION_FRAME(codeobj_c88f370276517982f84ff519a4ca12dc, module_numpy$ctypeslib, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c88f370276517982f84ff519a4ca12dc_3->m_type_description == NULL);
        frame_c88f370276517982f84ff519a4ca12dc_3 = cache_frame_c88f370276517982f84ff519a4ca12dc_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c88f370276517982f84ff519a4ca12dc_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c88f370276517982f84ff519a4ca12dc_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_numpy$ctypeslib$$$function__6__check_retval_();

        tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[206], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[208]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_6 = PyObject_GetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[208]);

            if (unlikely(tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[208]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_name_5 = MAKE_FUNCTION_numpy$ctypeslib$$$function__7_contents();

            frame_c88f370276517982f84ff519a4ca12dc_3->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_name_6 = MAKE_FUNCTION_numpy$ctypeslib$$$function__7_contents();

            frame_c88f370276517982f84ff519a4ca12dc_3->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c88f370276517982f84ff519a4ca12dc_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c88f370276517982f84ff519a4ca12dc_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c88f370276517982f84ff519a4ca12dc_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c88f370276517982f84ff519a4ca12dc_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c88f370276517982f84ff519a4ca12dc_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c88f370276517982f84ff519a4ca12dc_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c88f370276517982f84ff519a4ca12dc_3 == cache_frame_c88f370276517982f84ff519a4ca12dc_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c88f370276517982f84ff519a4ca12dc_3);
            cache_frame_c88f370276517982f84ff519a4ca12dc_3 = NULL;
        }

        assertFrameObject(frame_c88f370276517982f84ff519a4ca12dc_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[80];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 198;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_45 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198);
        locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198);
        locals_numpy$ctypeslib$$$class__2__concrete_ndptr_198 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 198;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_45);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[210];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_48 = MAKE_FUNCTION_numpy$ctypeslib$$$function__8_ndpointer(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_48);
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_compexpr_left_3 == NULL)) {
            tmp_compexpr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_13 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_numpy$ctypeslib$$$function__9__ctype_ndarray();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_numpy$ctypeslib$$$function__10__get_scalar_type_map();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_9;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        assert(!(tmp_called_name_9 == NULL));
        frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame.f_lineno = 371;
        tmp_assign_source_51 = CALL_FUNCTION_NO_ARGS(tmp_called_name_9);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_numpy$ctypeslib$$$function__11__ctype_from_dtype_scalar();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_numpy$ctypeslib$$$function__12__ctype_from_dtype_subarray();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_numpy$ctypeslib$$$function__13__ctype_from_dtype_structured();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_numpy$ctypeslib$$$function__14__ctype_from_dtype();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_numpy$ctypeslib$$$function__15_as_ctypes_type();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[213];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_57 = MAKE_FUNCTION_numpy$ctypeslib$$$function__16_as_array(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_numpy$ctypeslib$$$function__17_as_ctypes();

        UPDATE_STRING_DICT1(moduledict_numpy$ctypeslib, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_58);
    }
    branch_no_9:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a92afbb0f8259bbc84c7d93f72569ad7);
#endif
    popFrameStack();

    assertFrameObject(frame_a92afbb0f8259bbc84c7d93f72569ad7);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a92afbb0f8259bbc84c7d93f72569ad7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a92afbb0f8259bbc84c7d93f72569ad7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a92afbb0f8259bbc84c7d93f72569ad7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a92afbb0f8259bbc84c7d93f72569ad7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

    return module_numpy$ctypeslib;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

