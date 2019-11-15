#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER lttng_ust_cyg_profile

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./tp.hpp"

#if !defined(_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TP_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    lttng_ust_cyg_profile,
    func_entry,
    TP_ARGS(
        const char*, addr,
        const char*, call_site
    ),
    TP_FIELDS(
        ctf_string(addr, addr)
        ctf_string(call_site, call_site)
    )
)


TRACEPOINT_EVENT(
    lttng_ust_cyg_profile,
    func_exit,
    TP_ARGS(
        const char*, addr,
        const char*, call_site
    ),
    TP_FIELDS(
        ctf_string(addr, addr)
        ctf_string(call_site, call_site)
    )
)

#endif

#include <lttng/tracepoint-event.h>