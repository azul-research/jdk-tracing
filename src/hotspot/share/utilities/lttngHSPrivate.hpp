#if !defined(TRACEPOINT_HEADER_MULTI_READ)
#define TRACEPOINT_HEADER_MULTI_READ
#endif

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hs_private

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./utilities/lttngHSPrivate.hpp"

#if !defined(HOTSPOT_PRIVATE__TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define HOTSPOT_PRIVATE__TP_H 

#include <lttng/tracepoint.h>


/* hotspot private events */

TRACEPOINT_EVENT(
    hs_private, 
    safepoint__begin,
    TP_ARGS(),
    TP_FIELDS()
)

TRACEPOINT_EVENT(
    hs_private, 
    safepoint__end,
    TP_ARGS(),
    TP_FIELDS()
)

TRACEPOINT_EVENT(
    hs_private,
    cms__initmark__begin,
    TP_ARGS(),
    TP_FIELDS()
)

TRACEPOINT_EVENT(
    hs_private,
    cms__initmark__end,
    TP_ARGS(),
    TP_FIELDS()
)

TRACEPOINT_EVENT(
    hs_private,
    cms__remark__begin,
    TP_ARGS(),
    TP_FIELDS()
)

TRACEPOINT_EVENT(
    hs_private,
    cms__remark__end,
    TP_ARGS(),
    TP_FIELDS()
)


#endif

#include <lttng/tracepoint-event.h>
