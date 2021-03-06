/*
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ct.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_CT,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_CT,0,reason)

static ERR_STRING_DATA CT_str_functs[] = {
    {ERR_FUNC(CT_F_CTLOG_NEW), "CTLOG_new"},
    {ERR_FUNC(CT_F_CTLOG_NEW_FROM_BASE64), "CTLOG_new_from_base64"},
    {ERR_FUNC(CT_F_CTLOG_NEW_FROM_CONF), "ctlog_new_from_conf"},
    {ERR_FUNC(CT_F_CTLOG_NEW_NULL), "CTLOG_new_null"},
    {ERR_FUNC(CT_F_CTLOG_STORE_GET0_LOG_BY_ID), "CTLOG_STORE_get0_log_by_id"},
    {ERR_FUNC(CT_F_CTLOG_STORE_LOAD_CTX_NEW), "ctlog_store_load_ctx_new"},
    {ERR_FUNC(CT_F_CTLOG_STORE_LOAD_FILE), "CTLOG_STORE_load_file"},
    {ERR_FUNC(CT_F_CT_BASE64_DECODE), "ct_base64_decode"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_GET0_CERT),
     "CT_POLICY_EVAL_CTX_get0_cert"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_GET0_ISSUER),
     "CT_POLICY_EVAL_CTX_get0_issuer"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_GET0_LOG_STORE),
     "CT_POLICY_EVAL_CTX_get0_log_store"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_NEW), "CT_POLICY_EVAL_CTX_new"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_SET0_CERT),
     "CT_POLICY_EVAL_CTX_set0_cert"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_SET0_ISSUER),
     "CT_POLICY_EVAL_CTX_set0_issuer"},
    {ERR_FUNC(CT_F_CT_POLICY_EVAL_CTX_SET0_LOG_STORE),
     "CT_POLICY_EVAL_CTX_set0_log_store"},
    {ERR_FUNC(CT_F_CT_V1_LOG_ID_FROM_PKEY), "ct_v1_log_id_from_pkey"},
    {ERR_FUNC(CT_F_D2I_SCT_LIST), "d2i_SCT_LIST"},
    {ERR_FUNC(CT_F_I2D_SCT_LIST), "i2d_SCT_LIST"},
    {ERR_FUNC(CT_F_I2O_SCT), "i2o_SCT"},
    {ERR_FUNC(CT_F_I2O_SCT_LIST), "i2o_SCT_LIST"},
    {ERR_FUNC(CT_F_I2O_SCT_SIGNATURE), "i2o_SCT_signature"},
    {ERR_FUNC(CT_F_O2I_SCT), "o2i_SCT"},
    {ERR_FUNC(CT_F_O2I_SCT_LIST), "o2i_SCT_LIST"},
    {ERR_FUNC(CT_F_O2I_SCT_SIGNATURE), "o2i_SCT_signature"},
    {ERR_FUNC(CT_F_SCT_CTX_NEW), "SCT_CTX_new"},
    {ERR_FUNC(CT_F_SCT_LIST_VALIDATE), "SCT_LIST_validate"},
    {ERR_FUNC(CT_F_SCT_NEW), "SCT_new"},
    {ERR_FUNC(CT_F_SCT_NEW_FROM_BASE64), "SCT_new_from_base64"},
    {ERR_FUNC(CT_F_SCT_SET0_LOG_ID), "SCT_set0_log_id"},
    {ERR_FUNC(CT_F_SCT_SET1_EXTENSIONS), "SCT_set1_extensions"},
    {ERR_FUNC(CT_F_SCT_SET1_LOG_ID), "SCT_set1_log_id"},
    {ERR_FUNC(CT_F_SCT_SET1_SIGNATURE), "SCT_set1_signature"},
    {ERR_FUNC(CT_F_SCT_SET_LOG_ENTRY_TYPE), "SCT_set_log_entry_type"},
    {ERR_FUNC(CT_F_SCT_SET_SIGNATURE_NID), "SCT_set_signature_nid"},
    {ERR_FUNC(CT_F_SCT_SET_VERSION), "SCT_set_version"},
    {ERR_FUNC(CT_F_SCT_SIGNATURE_IS_VALID), "SCT_SIGNATURE_IS_VALID"},
    {ERR_FUNC(CT_F_SCT_VALIDATE), "SCT_validate"},
    {ERR_FUNC(CT_F_SCT_VERIFY), "SCT_verify"},
    {ERR_FUNC(CT_F_SCT_VERIFY_V1), "SCT_verify_v1"},
    {0, NULL}
};

static ERR_STRING_DATA CT_str_reasons[] = {
    {ERR_REASON(CT_R_BASE64_DECODE_ERROR), "base64 decode error"},
    {ERR_REASON(CT_R_INVALID_LOG_ID_LENGTH), "invalid log id length"},
    {ERR_REASON(CT_R_LOG_CONF_INVALID), "log conf invalid"},
    {ERR_REASON(CT_R_LOG_CONF_INVALID_KEY), "log conf invalid key"},
    {ERR_REASON(CT_R_LOG_CONF_MISSING_DESCRIPTION),
     "log conf missing description"},
    {ERR_REASON(CT_R_LOG_CONF_MISSING_KEY), "log conf missing key"},
    {ERR_REASON(CT_R_LOG_KEY_INVALID), "log key invalid"},
    {ERR_REASON(CT_R_NOT_ENOUGH_SCTS), "not enough scts"},
    {ERR_REASON(CT_R_SCT_INVALID), "sct invalid"},
    {ERR_REASON(CT_R_SCT_INVALID_SIGNATURE), "sct invalid signature"},
    {ERR_REASON(CT_R_SCT_LIST_INVALID), "sct list invalid"},
    {ERR_REASON(CT_R_SCT_LOG_ID_MISMATCH), "sct log id mismatch"},
    {ERR_REASON(CT_R_SCT_NOT_SET), "sct not set"},
    {ERR_REASON(CT_R_SCT_UNSUPPORTED_VERSION), "sct unsupported version"},
    {ERR_REASON(CT_R_SCT_VALIDATION_STATUS_NOT_SET),
     "sct validation status not set"},
    {ERR_REASON(CT_R_UNRECOGNIZED_SIGNATURE_NID),
     "unrecognized signature nid"},
    {ERR_REASON(CT_R_UNSUPPORTED_ENTRY_TYPE), "unsupported entry type"},
    {ERR_REASON(CT_R_UNSUPPORTED_VERSION), "unsupported version"},
    {0, NULL}
};

#endif

void ERR_load_CT_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(CT_str_functs[0].error) == NULL) {
        ERR_load_strings(0, CT_str_functs);
        ERR_load_strings(0, CT_str_reasons);
    }
#endif
}
