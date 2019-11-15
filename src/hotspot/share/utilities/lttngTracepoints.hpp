#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hotspot_method_tp

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./utilities/lttngTracepoints.hpp"

#if !defined(_VM_METHODS_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _VM_METHODS_TP_H 

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    hotspot_method_tp,
    method_entry,
    TP_ARGS(
        ulong, tid,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len
    ),
    TP_FIELDS(
        ctf_integer(ulong, thread_id, tid)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
    )
)

TRACEPOINT_EVENT(
    hotspot_method_tp,
    method_return,
    TP_ARGS(
        ulong, tid,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len
    ),
    TP_FIELDS(
        ctf_integer(ulong, thread_id, tid)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
    )
)

TRACEPOINT_EVENT(
    hotspot_method_tp,
    method_compile_begin,
    TP_ARGS(
        char*, comp_name,
        int, comp_name_len,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len
    ),
    TP_FIELDS(
        ctf_string(comp_name, comp_name)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
    )
)

#endif


#include <lttng/tracepoint-event.h>