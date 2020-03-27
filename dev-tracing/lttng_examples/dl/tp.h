#if !defined(TRACEPOINT_HEADER_MULTI_READ)
#define TRACEPOINT_HEADER_MULTI_READ
#endif

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER provider_test

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./tp.h"

#if !defined(TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define TP_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
	provider_test,
	test,
	TP_ARGS(
		int, arg
	),
	TP_FIELDS(
		ctf_integer(int, arg, arg)
	)
)

#endif

#include <lttng/tracepoint-event.h>
