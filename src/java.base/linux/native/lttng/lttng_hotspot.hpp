#if !defined(TRACEPOINT_HEADER_MULTI_READ)
#define TRACEPOINT_HEADER_MULTI_READ
#endif

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hotspot

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./lttng_hotspot.hpp"

#if !defined(HOTSPOT__TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define HOTSPOT__TP_H

#include <lttng/tracepoint.h>

/* hotspot events */

/* HOTSPOT_CLASS_LOADED ( char *, uintptr_t, void *, uintptr_t ) */
TRACEPOINT_EVENT( 
    hotspot,
    class__loaded,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        uintptr_t, shared
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(uintptr_t, shared, shared)
        )
)
// src/hotspot/share/services/classLoadingService.cpp

/* HOTSPOT_CLASS_UNLOADED ( char *, uintptr_t, void *, uintptr_t ) */
TRACEPOINT_EVENT( //called nowhere
    hotspot,
    class__unloaded,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        uintptr_t, shared
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(uintptr_t, shared, shared)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_REQUIRED ( char *, uintptr_t, void *, intptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__required,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader, 
        intptr_t, thread_type
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        )
)
// src/hotspot/share/oops/instanceKlass.cpp


/* HOTSPOT_CLASS_INITIALIZATION_RECURSIVE ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__recursive,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_CONCURRENT ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__concurrent,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_ERRONEOUS ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__erroneous,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_SUPER_FAILED ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__super__failed,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_CLINIT ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__clinit,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_ERROR ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__error,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)

/* HOTSPOT_CLASS_INITIALIZATION_END ( char *, uintptr_t, void *, intptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    class__initialization__end,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        void*, class_loader,
        intptr_t, thread_type,
        int, wait
        ),
    TP_FIELDS(
        ctf_string(class_name, name)
        ctf_integer(uintptr_t, class_loader, (uintptr_t) class_loader)
        ctf_integer(intptr_t, thread_type, thread_type)
        ctf_integer(int, wait, wait)
        )
)




/* HOTSPOT_COMPILED_METHOD_LOAD ( char *, uintptr_t, char *, uintptr_t, char *, uintptr_t, void *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    compiled__method__load,
    TP_ARGS(char*, class_name,
            int, class_name_len, 
            char*, name,
            int, name_len,
            char*, sig,
            int, sig_len,
            void*, insts_begin,
            int, insts_begin_len),
    TP_FIELDS(
            ctf_string(class_name, class_name)
            ctf_string(method_name, name)
            ctf_string(signature, sig)
            //insts ??
            )
)
// src/hotspot/share/code/nmethod.cpp

/* HOTSPOT_COMPILED_METHOD_UNLOAD ( char *, uintptr_t, char *, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    compiled__method__unload,
    TP_ARGS(char*, class_name,
            int, class_name_len, 
            char*, name,
            int, name_len,
            char*, sig,
            int, sig_len
            ),
    TP_FIELDS(
            ctf_string(class_name, class_name)
            ctf_string(method_name, name)
            ctf_string(signature, sig)
            )
)



/* HOTSPOT_GC_BEGIN ( uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    gc__begin,
    TP_ARGS(
            bool, full),
    TP_FIELDS(
        ctf_integer(bool, full, full)
    )

)
// src/hotspot/share/gc/shared/gcVMOperations.cpp

/* HOTSPOT_GC_END ( ) */
TRACEPOINT_EVENT(
    hotspot,
    gc__end,
    TP_ARGS(),
    TP_FIELDS()
)



/* HOTSPOT_MEM_POOL_GC_BEGIN ( char *, uintptr_t, char *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    mem__pool__gc__begin,
    TP_ARGS(
            char*, name,
            int, name_len,
            char*, pool_name,
            int, pool_name_len,
            uintptr_t, init_size,
            uintptr_t, used,
            uintptr_t, commited, 
            uintptr_t, max_size
            ),
    TP_FIELDS(
            ctf_string(name, name)
            ctf_string(pool_name, pool_name)
            ctf_integer(uintptr_t, init_size, init_size)
            ctf_integer(uintptr_t, used, used)
            ctf_integer(uintptr_t, commited, commited)
            ctf_integer(uintptr_t, max_size, max_size)
            )
)

/* HOTSPOT_MEM_POOL_GC_END ( char *, uintptr_t, char *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    mem__pool__gc__end,
    TP_ARGS(
            char*, name,
            int, name_len,
            char*, pool_name,
            int, pool_name_len,
            uintptr_t, init_size,
            uintptr_t, used,
            uintptr_t, commited, 
            uintptr_t, max_size
            ),
    TP_FIELDS(
            ctf_string(name, name)
            ctf_string(pool_name, pool_name)
            ctf_integer(uintptr_t, init_size, init_size)
            ctf_integer(uintptr_t, used, used)
            ctf_integer(uintptr_t, commited, commited)
            ctf_integer(uintptr_t, max_size, max_size)
            )
)

/* HOTSPOT_METHOD_COMPILE_BEGIN ( char *, uintptr_t, char *, uintptr_t, char *, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    method__compile__begin,
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

/* HOTSPOT_METHOD_COMPILE_END ( char *, uintptr_t, char *, uintptr_t, char *, uintptr_t, char *, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    method__compile__end,
    TP_ARGS(
        char*, comp_name,
        int, comp_name_len,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len,
        int, success
    ),
    TP_FIELDS(
        ctf_string(comp_name, comp_name)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
        ctf_integer(int, success, success)
    )
)


/* HOTSPOT_METHOD_ENTRY ( int, char *, int, char *, int, char *, int ) */
TRACEPOINT_EVENT(
    hotspot,
    method__entry,
    TP_ARGS(
        int, tid,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len
    ),
    TP_FIELDS(
        ctf_integer(int, thread_id, tid)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
    )
)

/* HOTSPOT_METHOD_RETURN ( int, char *, int, char *, int, char *, int ) */
TRACEPOINT_EVENT(
    hotspot,
    method__return,
    TP_ARGS(
        int, tid,
        char*, class_name,
        int, class_name_len,
        char*, name,
        int, name_len,
        char*, sig,
        int, sig_len
    ),
    TP_FIELDS(
        ctf_integer(int, thread_id, tid)
        ctf_string(class_name, class_name)
        ctf_string(method_name, name)
        ctf_string(signature, sig)
    )
)


/* HOTSPOT_MONITOR_CONTENDED_ENTER ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__contended__enter,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_string(bytes, bytes) // ????
            )
)
// src/hotspot/share/runtime/objectMonitor.cpp

/* HOTSPOT_MONITOR_CONTENDED_ENTERED ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__contended__entered,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_string(bytes, bytes) // ????
            )
)

/* HOTSPOT_MONITOR_CONTENDED_EXIT ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__contended__exit,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_string(bytes, bytes) // ????
            )
)

/* HOTSPOT_MONITOR_NOTIFY ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__notify,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_integer(uintptr_t, monitor, monitor)
            ctf_string(bytes, bytes) // ????
            )
)

/* HOTSPOT_MONITOR_NOTIFYALL ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__notifyAll,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_integer(uintptr_t, monitor, monitor)
            ctf_string(bytes, bytes) // ????
            )
)
// src/hotspot/share/runtime/synchronizer.cpp

/* HOTSPOT_MONITOR_WAIT ( uintptr_t, uintptr_t, char *, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__wait,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len,
            uintptr_t, millis
            ),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_integer(uintptr_t, monitor, monitor)
            ctf_string(bytes, bytes) // ????
            ctf_integer(uintptr_t, millis, millis)
            )
)

/* HOTSPOT_MONITOR_WAITED ( uintptr_t, uintptr_t, char *, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    monitor__waited,
    TP_ARGS(
            uintptr_t, jtid,
            uintptr_t, monitor,
            char*, bytes,
            uintptr_t, len
            ),

    TP_FIELDS(
            ctf_integer(uintptr_t, jtid, jtid)
            ctf_integer(uintptr_t, monitor, monitor)
            ctf_string(bytes, bytes) // ????
            )
)



/* HOTSPOT_OBJECT_ALLOC ( int, char *, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    object__alloc,
    TP_ARGS(
            int, tid, 
            char*, name,
            uintptr_t, name_len,
            uintptr_t, size
            ),
    TP_FIELDS(
            ctf_integer(int, tid, tid)
            ctf_string(class_name, name)
            ctf_integer(uintptr_t, size, size)
            )
)
// src/hotspot/share/runtime/sharedRuntime.cpp


/* HOTSPOT_THREAD_START ( char *, uintptr_t, uintptr_t, uintptr_t, uintptr_t ) */

TRACEPOINT_EVENT(
    hotspot,
    thread__start,
    TP_ARGS(
            char*, name,
            uintptr_t, name_len,
            uintptr_t, jtid,
            uintptr_t, tid,
            uintptr_t, is_daemon
        ),
    TP_FIELDS(
            ctf_string(thread_name, name)
            ctf_integer(uintptr_t, java_thread_id, jtid)
            ctf_integer(uintptr_t, thread_id, tid)
            ctf_integer(uintptr_t, is_daemon, is_daemon)
        )
)
//  src/hotspot/share/runtime/thread.cpp

/* HOTSPOT_THREAD_STOP ( char *, uintptr_t, uintptr_t, uintptr_t, uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__stop,
    TP_ARGS(
            char*, name,
            uintptr_t, name_len,
            uintptr_t, jtid,
            uintptr_t, tid,
            uintptr_t, is_daemon
        ),
    TP_FIELDS(
            ctf_string(thread_name, name)
            ctf_integer(uintptr_t, java_thread_id, jtid)
            ctf_integer(uintptr_t, thread_id, tid)
            ctf_integer(uintptr_t, is_daemon, is_daemon)
        )
)

/* HOTSPOT_THREAD_SLEEP_BEGIN ( long long ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__sleep__begin,
    
    TP_ARGS( 
            long long, millis
            ),
    TP_FIELDS(
            ctf_integer(long long, millis, millis)
        )
)

// src/hotspot/share/prims/jvm.cpp

/* HOTSPOT_THREAD_SLEEP_END ( int ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__sleep__end,
    
    TP_ARGS(
        int, is_interrupted
        ),
    TP_FIELDS(
            ctf_integer(int, is_interrupted, is_interrupted)
        )
)

/* HOTSPOT_THREAD_YIELD ( ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__yield,
    TP_ARGS(),
    TP_FIELDS()
)

/* HOTSPOT_THREAD_PARK_BEGIN ( uintptr_t, int, long long ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__park__begin,
    TP_ARGS(
        uintptr_t, thread_parker,
        int, is_absolute,
        long long, time
        ),
    TP_FIELDS(
        ctf_integer(uintptr_t, thread_parker, thread_parker)
        ctf_integer(int, is_absolute, is_absolute)
        ctf_integer(long long, time, time)
        )
)
// src/hotspot/share/prims/unsafe.cpp

/* HOTSPOT_THREAD_PARK_END ( uintptr_t ) */
TRACEPOINT_EVENT(
    hotspot,
    thread__park__end,
    TP_ARGS(
        uintptr_t, thread_parker
        ),
    TP_FIELDS(
        ctf_integer(uintptr_t, thread_parker, thread_parker) // ??
        )
)

/* HOTSPOT_THREAD_UNPARK ( uintptr_t ) */

TRACEPOINT_EVENT(
    hotspot,
    thread__unpark,
    TP_ARGS(
        uintptr_t, p // 'p' points to type-stable-memory if non-NULL (c)
        ),

    TP_FIELDS(
        ctf_integer(uintptr_t, p, p) // ???????
        )
)


/* HOTSPOT_VM_INIT_BEGIN ( ) */
TRACEPOINT_EVENT(
    hotspot,
    vm__init__begin,
    TP_ARGS(),
    TP_FIELDS()
)

/* HOTSPOT_VM_INIT_END ( ) */
TRACEPOINT_EVENT(
    hotspot,
    vm__init__end,
    TP_ARGS(),
    TP_FIELDS()
)

/* HOTSPOT_VM_SHUTDOWN ( ) */
TRACEPOINT_EVENT(
    hotspot,
    vm__shutdown,
    TP_ARGS(),
    TP_FIELDS()
)



/* HOTSPOT_VMOPS_REQUEST ( char *, uintptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    vmops__request,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        int, mode
        ),
    TP_FIELDS(
        ctf_string(operation_name, name)
        ctf_integer(int, evaluation_mode, mode)
        )
)
// src/hotspot/share/runtime/vmThread.cpp

/* HOTSPOT_VMOPS_BEGIN ( char *, uintptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    vmops__begin,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        int, mode
        ),
    TP_FIELDS(
        ctf_string(operation_name, name) // look to types
        ctf_integer(int, evaluation_mode, mode)
        )
)

/* HOTSPOT_VMOPS_END ( char *, uintptr_t, int ) */
TRACEPOINT_EVENT(
    hotspot,
    vmops__end,
    TP_ARGS(
        char*, name,
        uintptr_t, name_len,
        int, mode
        ),
    TP_FIELDS(
        ctf_string(operation_name, name)
        ctf_integer(int, evaluation_mode, mode)
        )
)



#endif

#include <lttng/tracepoint-event.h>
