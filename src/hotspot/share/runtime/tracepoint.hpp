#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER vm_tracepoint_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./runtime/tracepoint.hpp"

#if !defined(_STARTVM_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _STARTVM_TP_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    vm_tracepoint_provider,
    vm_start,
    TP_ARGS(
        int, arg
    ),
    TP_FIELDS(
        ctf_integer(int, int_field, arg)
    )
)

#endif

#include <lttng/tracepoint-event.h>