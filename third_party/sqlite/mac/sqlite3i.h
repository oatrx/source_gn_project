﻿#ifndef _SQLITE3_UNICODE_AWARE_
#define _SQLITE3_UNICODE_AWARE_
#include "sqlite3.h"
//
// TCHAR based sqlite3 function names for Unicode/MCBS builds.
//
#if defined(_UNICODE) || defined(UNICODE)
#pragma message("Unicode Selected")
#define _sqlite3_aggregate_context      sqlite3_aggregate_context
#define _sqlite3_aggregate_count        sqlite3_aggregate_count
#define _sqlite3_bind_blob              sqlite3_bind_blob
#define _sqlite3_bind_double            sqlite3_bind_double
#define _sqlite3_bind_int               sqlite3_bind_int
#define _sqlite3_bind_int64             sqlite3_bind_int64
#define _sqlite3_bind_null              sqlite3_bind_null
#define _sqlite3_bind_parameter_count   sqlite3_bind_parameter_count
#define _sqlite3_bind_parameter_index   sqlite3_bind_parameter_index
#define _sqlite3_bind_parameter_name    sqlite3_bind_parameter_name
#define _sqlite3_bind_text              sqlite3_bind_text16
#define _sqlite3_bind_text16            sqlite3_bind_text16
#define _sqlite3_busy_handler           sqlite3_busy_handler
#define _sqlite3_busy_timeout           sqlite3_busy_timeout
#define _sqlite3_changes                sqlite3_changes
#define _sqlite3_close                  sqlite3_close
#define _sqlite3_collation_needed       sqlite3_collation_needed16
#define _sqlite3_collation_needed16     sqlite3_collation_needed16
#define _sqlite3_column_blob            sqlite3_column_blob
#define _sqlite3_column_bytes           sqlite3_column_bytes16
#define _sqlite3_column_bytes16         sqlite3_column_bytes16
#define _sqlite3_column_count           sqlite3_column_count
#define _sqlite3_column_decltype        sqlite3_column_decltype16
#define _sqlite3_column_decltype16      sqlite3_column_decltype16
#define _sqlite3_column_double          sqlite3_column_double
#define _sqlite3_column_int             sqlite3_column_int
#define _sqlite3_column_int64           sqlite3_column_int64
#define _sqlite3_column_name            sqlite3_column_name16
#define _sqlite3_column_name16          sqlite3_column_name16
#define _sqlite3_column_text            sqlite3_column_text16
#define _sqlite3_column_text16          sqlite3_column_text16
#define _sqlite3_column_type            sqlite3_column_type
#define _sqlite3_commit_hook            sqlite3_commit_hook
#define _sqlite3_complete               sqlite3_complete16
#define _sqlite3_complete16             sqlite3_complete16
#define _sqlite3_create_collation       sqlite3_create_collation16
#define _sqlite3_create_collation16     sqlite3_create_collation16
#define _sqlite3_create_function        sqlite3_create_function16
#define _sqlite3_create_function16      sqlite3_create_function16
#define _sqlite3_data_count             sqlite3_data_count
#define _sqlite3_errcode                sqlite3_errcode
#define _sqlite3_errmsg                 sqlite3_errmsg16
#define _sqlite3_errmsg16               sqlite3_errmsg16
#define _sqlite3_exec                   sqlite3_exec
#define _sqlite3_finalize               sqlite3_finalize
#define _sqlite3_free                   sqlite3_free
#define _sqlite3_free_table             sqlite3_free_table
#define _sqlite3_get_table              sqlite3_get_table
#define _sqlite3_interrupt              sqlite3_interrupt
#define _sqlite3_last_insert_rowid      sqlite3_last_insert_rowid
#define _sqlite3_libversion             sqlite3_libversion
#define _sqlite3_mprintf                sqlite3_mprintf
#define _sqlite3_open                   sqlite3_open16
#define _sqlite3_open16                 sqlite3_open16
#define _sqlite3_prepare                sqlite3_prepare16
#define _sqlite3_prepare16              sqlite3_prepare16
#define _sqlite3_progress_handler       sqlite3_progress_handler
#define _sqlite3_reset                  sqlite3_reset
#define _sqlite3_result_blob            sqlite3_result_blob
#define _sqlite3_result_double          sqlite3_result_double
#define _sqlite3_result_error           sqlite3_result_error16
#define _sqlite3_result_error16         sqlite3_result_error16
#define _sqlite3_result_int             sqlite3_result_int
#define _sqlite3_result_int64           sqlite3_result_int64
#define _sqlite3_result_null            sqlite3_result_null
#define _sqlite3_result_text            sqlite3_result_text16
#define _sqlite3_result_text16          sqlite3_result_text16
#define _sqlite3_result_text16be        sqlite3_result_text16be
#define _sqlite3_result_text16le        sqlite3_result_text16le
#define _sqlite3_result_value           sqlite3_result_value
#define _sqlite3_set_authorizer         sqlite3_set_authorizer
#define _sqlite3_step                   sqlite3_step
#define _sqlite3_total_changes          sqlite3_total_changes
#define _sqlite3_trace                  sqlite3_trace
#define _sqlite3_user_data              sqlite3_user_data
#define _sqlite3_value_blob             sqlite3_value_blob
#define _sqlite3_value_bytes            sqlite3_value_bytes16
#define _sqlite3_value_bytes16          sqlite3_value_bytes16
#define _sqlite3_value_double           sqlite3_value_double
#define _sqlite3_value_int              sqlite3_value_int
#define _sqlite3_value_int64            sqlite3_value_int64
#define _sqlite3_value_text             sqlite3_value_text16
#define _sqlite3_value_text16           sqlite3_value_text16
#define _sqlite3_value_text16be         sqlite3_value_text16be
#define _sqlite3_value_text16le         sqlite3_value_text16le
#define _sqlite3_value_type             sqlite3_value_type
#define _sqlite3_vmprintf               sqlite3_vmprintf
#else
//#pragma message("MCBS Selected")
#define _sqlite3_aggregate_context      sqlite3_aggregate_context
#define _sqlite3_aggregate_count        sqlite3_aggregate_count
#define _sqlite3_bind_blob              sqlite3_bind_blob
#define _sqlite3_bind_double            sqlite3_bind_double
#define _sqlite3_bind_int               sqlite3_bind_int
#define _sqlite3_bind_int64             sqlite3_bind_int64
#define _sqlite3_bind_null              sqlite3_bind_null
#define _sqlite3_bind_parameter_count   sqlite3_bind_parameter_count
#define _sqlite3_bind_parameter_index   sqlite3_bind_parameter_index
#define _sqlite3_bind_parameter_name    sqlite3_bind_parameter_name
#define _sqlite3_bind_text              sqlite3_bind_text
#define _sqlite3_bind_text16            sqlite3_bind_text16
#define _sqlite3_busy_handler           sqlite3_busy_handler
#define _sqlite3_busy_timeout           sqlite3_busy_timeout
#define _sqlite3_changes                sqlite3_changes
#define _sqlite3_close                  sqlite3_close
#define _sqlite3_collation_needed       sqlite3_collation_needed
#define _sqlite3_collation_needed16     sqlite3_collation_needed16
#define _sqlite3_column_blob            sqlite3_column_blob
#define _sqlite3_column_bytes           sqlite3_column_bytes
#define _sqlite3_column_bytes16         sqlite3_column_bytes16
#define _sqlite3_column_count           sqlite3_column_count
#define _sqlite3_column_decltype        sqlite3_column_decltype
#define _sqlite3_column_decltype16      sqlite3_column_decltype16
#define _sqlite3_column_double          sqlite3_column_double
#define _sqlite3_column_int             sqlite3_column_int
#define _sqlite3_column_int64           sqlite3_column_int64
#define _sqlite3_column_name            sqlite3_column_name
#define _sqlite3_column_name16          sqlite3_column_name16
#define _sqlite3_column_text            sqlite3_column_text
#define _sqlite3_column_text16          sqlite3_column_text16
#define _sqlite3_column_type            sqlite3_column_type
#define _sqlite3_commit_hook            sqlite3_commit_hook
#define _sqlite3_complete               sqlite3_complete
#define _sqlite3_complete16             sqlite3_complete16
#define _sqlite3_create_collation       sqlite3_create_collation
#define _sqlite3_create_collation16     sqlite3_create_collation16
#define _sqlite3_create_function        sqlite3_create_function
#define _sqlite3_create_function16      sqlite3_create_function16
#define _sqlite3_data_count             sqlite3_data_count
#define _sqlite3_errcode                sqlite3_errcode
#define _sqlite3_errmsg                 sqlite3_errmsg
#define _sqlite3_errmsg16               sqlite3_errmsg16
#define _sqlite3_exec                   sqlite3_exec
#define _sqlite3_finalize               sqlite3_finalize
#define _sqlite3_free                   sqlite3_free
#define _sqlite3_free_table             sqlite3_free_table
#define _sqlite3_get_table              sqlite3_get_table
#define _sqlite3_interrupt              sqlite3_interrupt
#define _sqlite3_last_insert_rowid      sqlite3_last_insert_rowid
#define _sqlite3_libversion             sqlite3_libversion
#define _sqlite3_mprintf                sqlite3_mprintf
#define _sqlite3_open                   sqlite3_open
#define _sqlite3_open16                 sqlite3_open16
#define _sqlite3_prepare                sqlite3_prepare
#define _sqlite3_prepare16              sqlite3_prepare16
#define _sqlite3_progress_handler       sqlite3_progress_handler
#define _sqlite3_reset                  sqlite3_reset
#define _sqlite3_result_blob            sqlite3_result_blob
#define _sqlite3_result_double          sqlite3_result_double
#define _sqlite3_result_error           sqlite3_result_error
#define _sqlite3_result_error16         sqlite3_result_error16
#define _sqlite3_result_int             sqlite3_result_int
#define _sqlite3_result_int64           sqlite3_result_int64
#define _sqlite3_result_null            sqlite3_result_null
#define _sqlite3_result_text            sqlite3_result_text
#define _sqlite3_result_text16          sqlite3_result_text16
#define _sqlite3_result_text16be        sqlite3_result_text16be
#define _sqlite3_result_text16le        sqlite3_result_text16le
#define _sqlite3_result_value           sqlite3_result_value
#define _sqlite3_set_authorizer         sqlite3_set_authorizer
#define _sqlite3_step                   sqlite3_step
#define _sqlite3_total_changes          sqlite3_total_changes
#define _sqlite3_trace                  sqlite3_trace
#define _sqlite3_user_data              sqlite3_user_data
#define _sqlite3_value_blob             sqlite3_value_blob
#define _sqlite3_value_bytes            sqlite3_value_bytes
#define _sqlite3_value_bytes16          sqlite3_value_bytes16
#define _sqlite3_value_double           sqlite3_value_double
#define _sqlite3_value_int              sqlite3_value_int
#define _sqlite3_value_int64            sqlite3_value_int64
#define _sqlite3_value_text             sqlite3_value_text
#define _sqlite3_value_text16           sqlite3_value_text16
#define _sqlite3_value_text16be         sqlite3_value_text16be
#define _sqlite3_value_text16le         sqlite3_value_text16le
#define _sqlite3_value_type             sqlite3_value_type
#define _sqlite3_vmprintf               sqlite3_vmprintf
#endif

#endif

