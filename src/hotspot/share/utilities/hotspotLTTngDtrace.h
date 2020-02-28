#include "utilities/dtrace.hpp";

#include "utilities/lttng.hpp";

#define HOTSPOT_CLASS_LOADED_WRAPPER (hotspot, class__loaded , arg0, arg1, arg2, arg3)\
HOTSPOT_CLASS_LOADED (arg0, arg1, arg2, arg3);tracepoint (hotspot, class__loaded , arg0, arg1, arg2, arg3)

#define HOTSPOT_CLASS_UNLOADED_WRAPPER (hotspot, class__unloaded , arg0, arg1, arg2, arg3)\
HOTSPOT_CLASS_UNLOADED (arg0, arg1, arg2, arg3);tracepoint (hotspot, class__unloaded , arg0, arg1, arg2, arg3)

#define HOTSPOT_CLASS_INITIALIZATION_REQUIRED_WRAPPER (hotspot, class__initialization__required , arg0, arg1, arg2, arg3)\
HOTSPOT_CLASS_INITIALIZATION_REQUIRED (arg0, arg1, arg2, arg3);tracepoint (hotspot, class__initialization__required , arg0, arg1, arg2, arg3)

#define HOTSPOT_CLASS_INITIALIZATION_RECURSIVE_WRAPPER (hotspot, class__initialization__recursive , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_RECURSIVE (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__recursive , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_CONCURRENT_WRAPPER (hotspot, class__initialization__concurrent , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_CONCURRENT (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__concurrent , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_ERRONEOUS_WRAPPER (hotspot, class__initialization__erroneous , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_ERRONEOUS (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__erroneous , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_SUPER_FAILED_WRAPPER (hotspot, class__initialization__super__failed , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_SUPER_FAILED (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__super__failed , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_CLINIT_WRAPPER (hotspot, class__initialization__clinit , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_CLINIT (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__clinit , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_ERROR_WRAPPER (hotspot, class__initialization__error , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_ERROR (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__error , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_CLASS_INITIALIZATION_END_WRAPPER (hotspot, class__initialization__end , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_CLASS_INITIALIZATION_END (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, class__initialization__end , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_VM_INIT_BEGIN_WRAPPER (hotspot, vm__init__begin , )\
HOTSPOT_VM_INIT_BEGIN ();tracepoint (hotspot, vm__init__begin , )

#define HOTSPOT_VM_INIT_END_WRAPPER (hotspot, vm__init__end , )\
HOTSPOT_VM_INIT_END ();tracepoint (hotspot, vm__init__end , )

#define HOTSPOT_VM_SHUTDOWN_WRAPPER (hotspot, vm__shutdown , )\
HOTSPOT_VM_SHUTDOWN ();tracepoint (hotspot, vm__shutdown , )

#define HOTSPOT_VMOPS_REQUEST_WRAPPER (hotspot, vmops__request , arg0, arg1, arg2)\
HOTSPOT_VMOPS_REQUEST (arg0, arg1, arg2);tracepoint (hotspot, vmops__request , arg0, arg1, arg2)

#define HOTSPOT_VMOPS_BEGIN_WRAPPER (hotspot, vmops__begin , arg0, arg1, arg2)\
HOTSPOT_VMOPS_BEGIN (arg0, arg1, arg2);tracepoint (hotspot, vmops__begin , arg0, arg1, arg2)

#define HOTSPOT_VMOPS_END_WRAPPER (hotspot, vmops__end , arg0, arg1, arg2)\
HOTSPOT_VMOPS_END (arg0, arg1, arg2);tracepoint (hotspot, vmops__end , arg0, arg1, arg2)

#define HOTSPOT_GC_BEGIN_WRAPPER (hotspot, gc__begin , arg0)\
HOTSPOT_GC_BEGIN (arg0);tracepoint (hotspot, gc__begin , arg0)

#define HOTSPOT_GC_END_WRAPPER (hotspot, gc__end , )\
HOTSPOT_GC_END ();tracepoint (hotspot, gc__end , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_THREAD_START_WRAPPER (hotspot, thread__start , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_THREAD_START (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, thread__start , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_THREAD_STOP_WRAPPER (hotspot, thread__stop , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_THREAD_STOP (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, thread__stop , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_THREAD_SLEEP_BEGIN_WRAPPER (hotspot, thread__sleep__begin , arg0)\
HOTSPOT_THREAD_SLEEP_BEGIN (arg0);tracepoint (hotspot, thread__sleep__begin , arg0)

#define HOTSPOT_THREAD_SLEEP_END_WRAPPER (hotspot, thread__sleep__end , arg0)\
HOTSPOT_THREAD_SLEEP_END (arg0);tracepoint (hotspot, thread__sleep__end , arg0)

#define HOTSPOT_THREAD_YIELD_WRAPPER (hotspot, thread__yield , )\
HOTSPOT_THREAD_YIELD ();tracepoint (hotspot, thread__yield , )

#define HOTSPOT_THREAD_PARK_BEGIN_WRAPPER (hotspot, thread__park__begin , arg0, arg1, arg2)\
HOTSPOT_THREAD_PARK_BEGIN (arg0, arg1, arg2);tracepoint (hotspot, thread__park__begin , arg0, arg1, arg2)

#define HOTSPOT_THREAD_PARK_END_WRAPPER (hotspot, thread__park__end , arg0)\
HOTSPOT_THREAD_PARK_END (arg0);tracepoint (hotspot, thread__park__end , arg0)

#define HOTSPOT_THREAD_UNPARK_WRAPPER (hotspot, thread__unpark , arg0)\
HOTSPOT_THREAD_UNPARK (arg0);tracepoint (hotspot, thread__unpark , arg0)

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_MONITOR_CONTENDED_ENTER_WRAPPER (hotspot, monitor__contended__enter , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_CONTENDED_ENTER (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__contended__enter , arg0, arg1, arg2, arg3)

#define HOTSPOT_MONITOR_CONTENDED_ENTERED_WRAPPER (hotspot, monitor__contended__entered , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_CONTENDED_ENTERED (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__contended__entered , arg0, arg1, arg2, arg3)

#define HOTSPOT_MONITOR_CONTENDED_EXIT_WRAPPER (hotspot, monitor__contended__exit , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_CONTENDED_EXIT (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__contended__exit , arg0, arg1, arg2, arg3)

#define HOTSPOT_MONITOR_WAIT_WRAPPER (hotspot, monitor__wait , arg0, arg1, arg2, arg3, arg4)\
HOTSPOT_MONITOR_WAIT (arg0, arg1, arg2, arg3, arg4);tracepoint (hotspot, monitor__wait , arg0, arg1, arg2, arg3, arg4)

#define HOTSPOT_MONITOR_WAITED_WRAPPER (hotspot, monitor__waited , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_WAITED (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__waited , arg0, arg1, arg2, arg3)

#define HOTSPOT_MONITOR_NOTIFY_WRAPPER (hotspot, monitor__notify , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_NOTIFY (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__notify , arg0, arg1, arg2, arg3)

#define HOTSPOT_MONITOR_NOTIFYALL_WRAPPER (hotspot, monitor__notifyAll , arg0, arg1, arg2, arg3)\
HOTSPOT_MONITOR_NOTIFYALL (arg0, arg1, arg2, arg3);tracepoint (hotspot, monitor__notifyAll , arg0, arg1, arg2, arg3)

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_OBJECT_ALLOC_WRAPPER (hotspot, object__alloc , arg0, arg1, arg2, arg3)\
HOTSPOT_OBJECT_ALLOC (arg0, arg1, arg2, arg3);tracepoint (hotspot, object__alloc , arg0, arg1, arg2, arg3)

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

#define HOTSPOT_PROBE_WRAPPER (hotspot, probe , )\
HOTSPOT_PROBE ();tracepoint (hotspot, probe , )

