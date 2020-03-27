#if !defined(TRACEPOINT_HEADER_MULTI_READ)
#define TRACEPOINT_HEADER_MULTI_READ
#endif

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hotspot_jni

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./utilities/lttng_hs_jni.hpp"

#if !defined(HS_JNI__TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define HS_JNI__TP_H

#include <lttng/tracepoint.h>
TRACEPOINT_EVENT(
hotspot_jni,
AllocObject__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, clazz, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
AllocObject__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
AttachCurrentThreadAsDaemon__entry,
TP_ARGS(
  void*, arg0,
  void**, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, penv, (uintptr_t) arg1)
  ctf_integer(uintptr_t, args, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
AttachCurrentThreadAsDaemon__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
AttachCurrentThread__entry,
TP_ARGS(
  void*, arg0,
  void**, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, penv, (uintptr_t) arg1)
  ctf_integer(uintptr_t, args, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
AttachCurrentThread__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallBooleanMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethodA__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethod__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallByteMethodV__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallCharMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallDoubleMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallFloatMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethodA__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethod__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallIntMethodV__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallLongMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualBooleanMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethodA__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethod__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualByteMethodV__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualCharMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualDoubleMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualFloatMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethodA__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethod__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualIntMethodV__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualLongMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethodA__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethod__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualObjectMethodV__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualShortMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallNonvirtualVoidMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethodA__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethod__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallObjectMethodV__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallShortMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticBooleanMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethodA__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethod__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticByteMethodV__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticCharMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticDoubleMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticFloatMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethodA__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethod__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticIntMethodV__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethodA__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticLongMethodV__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethodA__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethod__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticObjectMethodV__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethodA__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethod__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticShortMethodV__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallStaticVoidMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethodA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethodA__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethod__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethodV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, object, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CallVoidMethodV__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CreateJavaVM__entry,
TP_ARGS(
  void**, arg0,
  void**, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, vm, (uintptr_t) arg0)
  ctf_integer(uintptr_t, penv, (uintptr_t) arg1)
  ctf_integer(uintptr_t, args, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
CreateJavaVM__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DefineClass__entry,
TP_ARGS(
  void*, arg0,
  const char*, arg1,
  void*, arg2,
  char*, arg3,
  uintptr_t, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(name, (const char*) arg1)
  ctf_integer(uintptr_t, loaderRef, (uintptr_t) arg2)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg3)
  ctf_integer(int, buffer_len, arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DefineClass__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteGlobalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, ref, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteGlobalRef__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteLocalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteLocalRef__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteWeakGlobalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, ref, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DeleteWeakGlobalRef__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DestroyJavaVM__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, vm, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DestroyJavaVM__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DetachCurrentThread__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, vm, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
DetachCurrentThread__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
EnsureLocalCapacity__entry,
TP_ARGS(
  void*, arg0,
  uint32_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(int, capacity, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
EnsureLocalCapacity__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionCheck__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionCheck__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionClear__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionClear__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionDescribe__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionDescribe__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionOccurred__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ExceptionOccurred__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FatalError__entry,
TP_ARGS(
  void*, arg0,
  const char*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(message, (const char*) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FindClass__entry,
TP_ARGS(
  void*, arg0,
  const char*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(name, (const char*) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FindClass__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FromReflectedField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, field, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FromReflectedField__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FromReflectedMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, method, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
FromReflectedMethod__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetArrayLength__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  // ctf_???(???, array, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetArrayLength__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanArrayElements__return,
TP_ARGS(
  uintptr_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uintptr_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetBooleanField__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteArrayElements__return,
TP_ARGS(
  char*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  char*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetByteField__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharArrayElements__return,
TP_ARGS(
  uint16_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uint16_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCharField__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCreatedJavaVMs__entry,
TP_ARGS(
  void**, arg0,
  uintptr_t, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, vm_buf, (uintptr_t) arg0)
  ctf_integer(int, buffer_len, arg1)
  ctf_integer(uintptr_t, numVMs, *arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetCreatedJavaVMs__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDefaultJavaVMInitArgs__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, args, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDefaultJavaVMInitArgs__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDirectBufferAddress__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDirectBufferAddress__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDirectBufferCapacity__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDirectBufferCapacity__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleArrayElements__return,
TP_ARGS(
  double*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  double*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetDoubleField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetEnv__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uint32_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, vm, (uintptr_t) arg0)
  ctf_integer(uintptr_t, penv, (uintptr_t) arg1)
  ctf_integer(int, version, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetEnv__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFieldID__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2,
  const char*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_string(name, (const char*) arg2)
  ctf_string(signature, (const char*) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFieldID__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatArrayElements__return,
TP_ARGS(
  float*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  float*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetFloatField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntArrayElements__return,
TP_ARGS(
  uint32_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uint32_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetIntField__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetJavaVM__entry,
TP_ARGS(
  void*, arg0,
  void**, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, vm, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetJavaVM__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongArrayElements__return,
TP_ARGS(
  uintptr_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uintptr_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetLongField__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetMethodID__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2,
  const char*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_string(name, (const char*) arg2)
  ctf_string(signature, (const char*) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetMethodID__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetModule__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetModule__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectArrayElement__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, index, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectArrayElement__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectClass__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectClass__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectField__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectRefType__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetObjectRefType__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetPrimitiveArrayCritical__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetPrimitiveArrayCritical__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortArrayElements__return,
TP_ARGS(
  uint16_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uint16_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetShortField__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticBooleanField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticBooleanField__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticByteField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticByteField__return,
TP_ARGS(
  char, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticCharField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticCharField__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticDoubleField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticDoubleField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticFieldID__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2,
  const char*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_string(name, (const char*) arg2)
  ctf_string(signature, (const char*) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticFieldID__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticFloatField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticFloatField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticIntField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticIntField__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticLongField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticLongField__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticMethodID__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2,
  const char*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_string(name, (const char*) arg2)
  ctf_string(signature, (const char*) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticMethodID__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticObjectField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticObjectField__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticShortField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStaticShortField__return,
TP_ARGS(
  uint16_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringChars__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(string, (const char*) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringChars__return,
TP_ARGS(
  const uint16_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringCritical__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(string, (const char*) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringCritical__return,
TP_ARGS(
  const uint16_t*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringLength__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(string, (const char*) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringLength__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  uint16_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFChars__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(string, (const char*) arg1)
  ctf_integer(uintptr_t*, isCopy, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFChars__return,
TP_ARGS(
  const char*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFLength__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(string, (const char*) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFLength__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  char*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buffer, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetStringUTFRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetSuperclass__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, sub, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetSuperclass__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetVersion__entry,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
GetVersion__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsAssignableFrom__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, sub, (uintptr_t) arg1)
  ctf_integer(uintptr_t, super, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsAssignableFrom__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsInstanceOf__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, class, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsInstanceOf__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsSameObject__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, r1, (uintptr_t) arg1)
  ctf_integer(uintptr_t, r2, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
IsSameObject__return,
TP_ARGS(
  uintptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
MonitorEnter__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, jobj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
MonitorEnter__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
MonitorExit__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, jobj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
MonitorExit__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewBooleanArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewBooleanArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewByteArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewByteArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewCharArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewCharArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewDirectByteBuffer__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, adress, (uintptr_t) arg1)
  ctf_integer(long, capacity, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewDirectByteBuffer__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewDoubleArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewDoubleArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewFloatArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewFloatArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewGlobalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, ref, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewGlobalRef__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewIntArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewIntArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewLocalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, ref, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewLocalRef__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewLongArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewLongArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectA__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectA__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1,
  void*, arg2,
  void*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
  ctf_integer(uintptr_t, elementClass, (uintptr_t) arg2)
  ctf_integer(uintptr_t, initialElement, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObject__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObject__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectV__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methodID, (uintptr_t) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewObjectV__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewShortArray__entry,
TP_ARGS(
  void*, arg0,
  uintptr_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, len, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewShortArray__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewString__entry,
TP_ARGS(
  void*, arg0,
  const uint16_t*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(unicodeChars, (const char*) arg1)
  ctf_integer(uintptr_t, len, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewString__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewStringUTF__entry,
TP_ARGS(
  void*, arg0,
  const char*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_string(bytes, (const char*) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewStringUTF__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewWeakGlobalRef__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, ref, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
NewWeakGlobalRef__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
PopLocalFrame__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, result, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
PopLocalFrame__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
PushLocalFrame__entry,
TP_ARGS(
  void*, arg0,
  uint32_t, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uint32_t, capacity, arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
PushLocalFrame__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
RegisterNatives__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const void*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, methods, (uintptr_t) arg2)
  ctf_integer(uint32_t, nMethods, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
RegisterNatives__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseBooleanArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseBooleanArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseByteArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  char*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseByteArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseCharArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uint16_t*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseCharArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseDoubleArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  double*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseDoubleArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseFloatArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  float*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseFloatArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseIntArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uint32_t*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseIntArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseLongArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseLongArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleasePrimitiveArrayCritical__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  void*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, carray, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleasePrimitiveArrayCritical__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseShortArrayElements__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uint16_t*, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg2)
  ctf_integer(int, mode, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseShortArrayElements__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringChars__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const uint16_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, string, (uintptr_t) arg1)
  ctf_string(chars, (const char*) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringChars__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringCritical__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const uint16_t*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, string, (uintptr_t) arg1)
  ctf_string(chars, (const char*) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringCritical__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringUTFChars__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, string, (uintptr_t) arg1)
  ctf_string(chars, (const char*) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ReleaseStringUTFChars__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetBooleanArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const uintptr_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetBooleanArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetBooleanField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetBooleanField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetByteArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const char*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetByteArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetByteField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  char, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetByteField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetCharArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const uint16_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetCharArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetCharField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint16_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetCharField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetDoubleArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const double*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetDoubleArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetDoubleField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetDoubleField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetFloatArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const float*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetFloatArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetFloatField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetFloatField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetIntArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const uint32_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetIntArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetIntField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetIntField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetLongArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const uintptr_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetLongArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetLongField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetLongField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetObjectArrayElement__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  void*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, index, (uintptr_t) arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetObjectArrayElement__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetObjectField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  void*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetObjectField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetShortArrayRegion__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3,
  const uint16_t*, arg4),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, array, (uintptr_t) arg1)
  ctf_integer(uintptr_t, start, arg2)
  ctf_integer(uintptr_t, len, arg3)
  ctf_integer(uintptr_t, buf, (uintptr_t) arg4)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetShortArrayRegion__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetShortField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint16_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetShortField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticBooleanField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticBooleanField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticByteField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  char, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticByteField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticCharField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint16_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticCharField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticDoubleField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticDoubleField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticFloatField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticFloatField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticIntField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint32_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticIntField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticLongField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticLongField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticObjectField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  void*, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticObjectField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticShortField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uint16_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
  ctf_integer(uintptr_t, fieldID, arg2)
  ctf_integer(uintptr_t, value, (uintptr_t) arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
SetStaticShortField__return,
TP_ARGS(
),
TP_FIELDS(
)
)

TRACEPOINT_EVENT(
hotspot_jni,
Throw__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, obj, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
Throw__return,
TP_ARGS(
  intptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ThrowNew__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  const char*, arg2),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_string(message, (const char*) arg2)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ThrowNew__return,
TP_ARGS(
  intptr_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ToReflectedField__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, field_id, arg2)
  ctf_integer(bool, isStatic, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ToReflectedField__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ToReflectedMethod__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1,
  uintptr_t, arg2,
  uintptr_t, arg3),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, class, (uintptr_t) arg1)
  ctf_integer(uintptr_t, method_id, arg2)
  ctf_integer(bool, isStatic, arg3)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
ToReflectedMethod__return,
TP_ARGS(
  void*, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
UnregisterNatives__entry,
TP_ARGS(
  void*, arg0,
  void*, arg1),
TP_FIELDS(
  ctf_integer(uintptr_t, env, (uintptr_t) arg0)
  ctf_integer(uintptr_t, clazz, (uintptr_t) arg1)
)
)

TRACEPOINT_EVENT(
hotspot_jni,
UnregisterNatives__return,
TP_ARGS(
  uint32_t, arg0),
TP_FIELDS(
  ctf_integer(uintptr_t, result, (uintptr_t) arg0)
)
)

#endif

#include <lttng/tracepoint-event.h>

