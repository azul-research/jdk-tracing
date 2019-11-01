#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hello_tp_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./tp.h"

#if !defined(_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TP_H 

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    hello_tp_provider,
    hello_tp,
    TP_ARGS(
        int, args_number
    ),
    TP_FIELDS(
        ctf_integer(int, args_number, args_number)
    )
)

#endif

#include <lttng/tracepoint-event.h>