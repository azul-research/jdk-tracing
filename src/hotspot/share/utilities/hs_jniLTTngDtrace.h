#define HOTSPOT_JNI_ALLOCOBJECT_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_ALLOCOBJECT_ENTRY(arg0,arg1);tracepoint(hotspot_jni, AllocObject__entry, arg0,arg1)

#define HOTSPOT_JNI_ALLOCOBJECT_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ALLOCOBJECT_RETURN(arg0);tracepoint(hotspot_jni, AllocObject__return, arg0)

#define HOTSPOT_JNI_ATTACHCURRENTTHREADASDAEMON_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_ATTACHCURRENTTHREADASDAEMON_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, AttachCurrentThreadAsDaemon__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_ATTACHCURRENTTHREADASDAEMON_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ATTACHCURRENTTHREADASDAEMON_RETURN(arg0);tracepoint(hotspot_jni, AttachCurrentThreadAsDaemon__return, arg0)

#define HOTSPOT_JNI_ATTACHCURRENTTHREAD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_ATTACHCURRENTTHREAD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, AttachCurrentThread__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_ATTACHCURRENTTHREAD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ATTACHCURRENTTHREAD_RETURN(arg0);tracepoint(hotspot_jni, AttachCurrentThread__return, arg0)

#define HOTSPOT_JNI_CALLBOOLEANMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBOOLEANMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallBooleanMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBOOLEANMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBOOLEANMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallBooleanMethodA__return, arg0)

#define HOTSPOT_JNI_CALLBOOLEANMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBOOLEANMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallBooleanMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBOOLEANMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBOOLEANMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallBooleanMethod__return, arg0)

#define HOTSPOT_JNI_CALLBOOLEANMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBOOLEANMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallBooleanMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBOOLEANMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBOOLEANMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallBooleanMethodV__return, arg0)

#define HOTSPOT_JNI_CALLBYTEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBYTEMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallByteMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBYTEMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBYTEMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallByteMethodA__return, arg0)

#define HOTSPOT_JNI_CALLBYTEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBYTEMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallByteMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBYTEMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBYTEMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallByteMethod__return, arg0)

#define HOTSPOT_JNI_CALLBYTEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLBYTEMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallByteMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLBYTEMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLBYTEMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallByteMethodV__return, arg0)

#define HOTSPOT_JNI_CALLCHARMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLCHARMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallCharMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLCHARMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLCHARMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallCharMethodA__return, arg0)

#define HOTSPOT_JNI_CALLCHARMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLCHARMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallCharMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLCHARMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLCHARMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallCharMethod__return, arg0)

#define HOTSPOT_JNI_CALLCHARMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLCHARMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallCharMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLCHARMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLCHARMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallCharMethodV__return, arg0)

#define HOTSPOT_JNI_CALLDOUBLEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLDOUBLEMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallDoubleMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLDOUBLEMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLDOUBLEMETHODA_RETURN();tracepoint(hotspot_jni, CallDoubleMethodA__return)

#define HOTSPOT_JNI_CALLDOUBLEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLDOUBLEMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallDoubleMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLDOUBLEMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLDOUBLEMETHOD_RETURN();tracepoint(hotspot_jni, CallDoubleMethod__return)

#define HOTSPOT_JNI_CALLDOUBLEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLDOUBLEMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallDoubleMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLDOUBLEMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLDOUBLEMETHODV_RETURN();tracepoint(hotspot_jni, CallDoubleMethodV__return)

#define HOTSPOT_JNI_CALLFLOATMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLFLOATMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallFloatMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLFLOATMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLFLOATMETHODA_RETURN();tracepoint(hotspot_jni, CallFloatMethodA__return)

#define HOTSPOT_JNI_CALLFLOATMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLFLOATMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallFloatMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLFLOATMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLFLOATMETHOD_RETURN();tracepoint(hotspot_jni, CallFloatMethod__return)

#define HOTSPOT_JNI_CALLFLOATMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLFLOATMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallFloatMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLFLOATMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLFLOATMETHODV_RETURN();tracepoint(hotspot_jni, CallFloatMethodV__return)

#define HOTSPOT_JNI_CALLINTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLINTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallIntMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLINTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLINTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallIntMethodA__return, arg0)

#define HOTSPOT_JNI_CALLINTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLINTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallIntMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLINTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLINTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallIntMethod__return, arg0)

#define HOTSPOT_JNI_CALLINTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLINTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallIntMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLINTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLINTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallIntMethodV__return, arg0)

#define HOTSPOT_JNI_CALLLONGMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLLONGMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallLongMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLLONGMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLLONGMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallLongMethodA__return, arg0)

#define HOTSPOT_JNI_CALLLONGMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLLONGMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallLongMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLLONGMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLLONGMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallLongMethod__return, arg0)

#define HOTSPOT_JNI_CALLLONGMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLLONGMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallLongMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLLONGMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLLONGMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallLongMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualBooleanMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualBooleanMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualBooleanMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualBooleanMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualBooleanMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBOOLEANMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualBooleanMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualByteMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualByteMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualByteMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualByteMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualByteMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALBYTEMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualByteMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualCharMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualCharMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualCharMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualCharMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualCharMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALCHARMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualCharMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualDoubleMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODA_RETURN();tracepoint(hotspot_jni, CallNonvirtualDoubleMethodA__return)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualDoubleMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHOD_RETURN();tracepoint(hotspot_jni, CallNonvirtualDoubleMethod__return)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualDoubleMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALDOUBLEMETHODV_RETURN();tracepoint(hotspot_jni, CallNonvirtualDoubleMethodV__return)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualFloatMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODA_RETURN();tracepoint(hotspot_jni, CallNonvirtualFloatMethodA__return)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualFloatMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHOD_RETURN();tracepoint(hotspot_jni, CallNonvirtualFloatMethod__return)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualFloatMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALFLOATMETHODV_RETURN();tracepoint(hotspot_jni, CallNonvirtualFloatMethodV__return)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualIntMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualIntMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualIntMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualIntMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualIntMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALINTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALINTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualIntMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualLongMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualLongMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualLongMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualLongMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualLongMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALLONGMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualLongMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualObjectMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualObjectMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualObjectMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualObjectMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualObjectMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALOBJECTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualObjectMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualShortMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualShortMethodA__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualShortMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualShortMethod__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualShortMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLNONVIRTUALSHORTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallNonvirtualShortMethodV__return, arg0)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODA_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualVoidMethodA__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODA_RETURN();tracepoint(hotspot_jni, CallNonvirtualVoidMethodA__return)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualVoidMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHOD_RETURN();tracepoint(hotspot_jni, CallNonvirtualVoidMethod__return)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODV_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, CallNonvirtualVoidMethodV__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLNONVIRTUALVOIDMETHODV_RETURN();tracepoint(hotspot_jni, CallNonvirtualVoidMethodV__return)

#define HOTSPOT_JNI_CALLOBJECTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLOBJECTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallObjectMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLOBJECTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLOBJECTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallObjectMethodA__return, arg0)

#define HOTSPOT_JNI_CALLOBJECTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLOBJECTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallObjectMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLOBJECTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLOBJECTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallObjectMethod__return, arg0)

#define HOTSPOT_JNI_CALLOBJECTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLOBJECTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallObjectMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLOBJECTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLOBJECTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallObjectMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSHORTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSHORTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallShortMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSHORTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSHORTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallShortMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSHORTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSHORTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallShortMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSHORTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSHORTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallShortMethod__return, arg0)

#define HOTSPOT_JNI_CALLSHORTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSHORTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallShortMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSHORTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSHORTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallShortMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticBooleanMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticBooleanMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticBooleanMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticBooleanMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticBooleanMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBOOLEANMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBOOLEANMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticBooleanMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBYTEMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticByteMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBYTEMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticByteMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBYTEMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticByteMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBYTEMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticByteMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICBYTEMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticByteMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICBYTEMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICBYTEMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticByteMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICCHARMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICCHARMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticCharMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICCHARMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICCHARMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticCharMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICCHARMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICCHARMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticCharMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICCHARMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICCHARMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticCharMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICCHARMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICCHARMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticCharMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICCHARMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICCHARMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticCharMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticDoubleMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHODA_RETURN();tracepoint(hotspot_jni, CallStaticDoubleMethodA__return)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticDoubleMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHOD_RETURN();tracepoint(hotspot_jni, CallStaticDoubleMethod__return)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticDoubleMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICDOUBLEMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICDOUBLEMETHODV_RETURN();tracepoint(hotspot_jni, CallStaticDoubleMethodV__return)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICFLOATMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticFloatMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICFLOATMETHODA_RETURN();tracepoint(hotspot_jni, CallStaticFloatMethodA__return)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICFLOATMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticFloatMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICFLOATMETHOD_RETURN();tracepoint(hotspot_jni, CallStaticFloatMethod__return)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICFLOATMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticFloatMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICFLOATMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICFLOATMETHODV_RETURN();tracepoint(hotspot_jni, CallStaticFloatMethodV__return)

#define HOTSPOT_JNI_CALLSTATICINTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICINTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticIntMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICINTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICINTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticIntMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICINTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICINTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticIntMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICINTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICINTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticIntMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICINTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICINTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticIntMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICINTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICINTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticIntMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICLONGMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICLONGMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticLongMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICLONGMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICLONGMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticLongMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICLONGMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICLONGMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticLongMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICLONGMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICLONGMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticLongMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICLONGMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICLONGMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticLongMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICLONGMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICLONGMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticLongMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticObjectMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticObjectMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticObjectMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticObjectMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticObjectMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICOBJECTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICOBJECTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticObjectMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICSHORTMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticShortMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHODA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICSHORTMETHODA_RETURN(arg0);tracepoint(hotspot_jni, CallStaticShortMethodA__return, arg0)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICSHORTMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticShortMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICSHORTMETHOD_RETURN(arg0);tracepoint(hotspot_jni, CallStaticShortMethod__return, arg0)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICSHORTMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticShortMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICSHORTMETHODV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CALLSTATICSHORTMETHODV_RETURN(arg0);tracepoint(hotspot_jni, CallStaticShortMethodV__return, arg0)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICVOIDMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticVoidMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICVOIDMETHODA_RETURN();tracepoint(hotspot_jni, CallStaticVoidMethodA__return)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICVOIDMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticVoidMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICVOIDMETHOD_RETURN();tracepoint(hotspot_jni, CallStaticVoidMethod__return)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLSTATICVOIDMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallStaticVoidMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLSTATICVOIDMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLSTATICVOIDMETHODV_RETURN();tracepoint(hotspot_jni, CallStaticVoidMethodV__return)

#define HOTSPOT_JNI_CALLVOIDMETHODA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLVOIDMETHODA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallVoidMethodA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLVOIDMETHODA_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLVOIDMETHODA_RETURN();tracepoint(hotspot_jni, CallVoidMethodA__return)

#define HOTSPOT_JNI_CALLVOIDMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLVOIDMETHOD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallVoidMethod__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLVOIDMETHOD_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLVOIDMETHOD_RETURN();tracepoint(hotspot_jni, CallVoidMethod__return)

#define HOTSPOT_JNI_CALLVOIDMETHODV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CALLVOIDMETHODV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CallVoidMethodV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CALLVOIDMETHODV_RETURN_WRAPPER() \
HOTSPOT_JNI_CALLVOIDMETHODV_RETURN();tracepoint(hotspot_jni, CallVoidMethodV__return)

#define HOTSPOT_JNI_CREATEJAVAVM_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_CREATEJAVAVM_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, CreateJavaVM__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_CREATEJAVAVM_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_CREATEJAVAVM_RETURN(arg0);tracepoint(hotspot_jni, CreateJavaVM__return, arg0)

#define HOTSPOT_JNI_DEFINECLASS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_DEFINECLASS_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, DefineClass__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_DEFINECLASS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_DEFINECLASS_RETURN(arg0);tracepoint(hotspot_jni, DefineClass__return, arg0)

#define HOTSPOT_JNI_DELETEGLOBALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_DELETEGLOBALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, DeleteGlobalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_DELETEGLOBALREF_RETURN_WRAPPER() \
HOTSPOT_JNI_DELETEGLOBALREF_RETURN();tracepoint(hotspot_jni, DeleteGlobalRef__return)

#define HOTSPOT_JNI_DELETELOCALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_DELETELOCALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, DeleteLocalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_DELETELOCALREF_RETURN_WRAPPER() \
HOTSPOT_JNI_DELETELOCALREF_RETURN();tracepoint(hotspot_jni, DeleteLocalRef__return)

#define HOTSPOT_JNI_DELETEWEAKGLOBALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_DELETEWEAKGLOBALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, DeleteWeakGlobalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_DELETEWEAKGLOBALREF_RETURN_WRAPPER() \
HOTSPOT_JNI_DELETEWEAKGLOBALREF_RETURN();tracepoint(hotspot_jni, DeleteWeakGlobalRef__return)

#define HOTSPOT_JNI_DESTROYJAVAVM_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_DESTROYJAVAVM_ENTRY(arg0);tracepoint(hotspot_jni, DestroyJavaVM__entry, arg0)

#define HOTSPOT_JNI_DESTROYJAVAVM_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_DESTROYJAVAVM_RETURN(arg0);tracepoint(hotspot_jni, DestroyJavaVM__return, arg0)

#define HOTSPOT_JNI_DETACHCURRENTTHREAD_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_DETACHCURRENTTHREAD_ENTRY(arg0);tracepoint(hotspot_jni, DetachCurrentThread__entry, arg0)

#define HOTSPOT_JNI_DETACHCURRENTTHREAD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_DETACHCURRENTTHREAD_RETURN(arg0);tracepoint(hotspot_jni, DetachCurrentThread__return, arg0)

#define HOTSPOT_JNI_ENSURELOCALCAPACITY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_ENSURELOCALCAPACITY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, EnsureLocalCapacity__entry, arg0,arg1)

#define HOTSPOT_JNI_ENSURELOCALCAPACITY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ENSURELOCALCAPACITY_RETURN(arg0);tracepoint(hotspot_jni, EnsureLocalCapacity__return, arg0)

#define HOTSPOT_JNI_EXCEPTIONCHECK_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONCHECK_ENTRY(arg0);tracepoint(hotspot_jni, ExceptionCheck__entry, arg0)

#define HOTSPOT_JNI_EXCEPTIONCHECK_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONCHECK_RETURN(arg0);tracepoint(hotspot_jni, ExceptionCheck__return, arg0)

#define HOTSPOT_JNI_EXCEPTIONCLEAR_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONCLEAR_ENTRY(arg0);tracepoint(hotspot_jni, ExceptionClear__entry, arg0)

#define HOTSPOT_JNI_EXCEPTIONCLEAR_RETURN_WRAPPER() \
HOTSPOT_JNI_EXCEPTIONCLEAR_RETURN();tracepoint(hotspot_jni, ExceptionClear__return)

#define HOTSPOT_JNI_EXCEPTIONDESCRIBE_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONDESCRIBE_ENTRY(arg0);tracepoint(hotspot_jni, ExceptionDescribe__entry, arg0)

#define HOTSPOT_JNI_EXCEPTIONDESCRIBE_RETURN_WRAPPER() \
HOTSPOT_JNI_EXCEPTIONDESCRIBE_RETURN();tracepoint(hotspot_jni, ExceptionDescribe__return)

#define HOTSPOT_JNI_EXCEPTIONOCCURRED_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONOCCURRED_ENTRY(arg0);tracepoint(hotspot_jni, ExceptionOccurred__entry, arg0)

#define HOTSPOT_JNI_EXCEPTIONOCCURRED_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_EXCEPTIONOCCURRED_RETURN(arg0);tracepoint(hotspot_jni, ExceptionOccurred__return, arg0)

#define HOTSPOT_JNI_FATALERROR_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_FATALERROR_ENTRY(arg0,arg1);tracepoint(hotspot_jni, FatalError__entry, arg0,arg1)

#define HOTSPOT_JNI_FINDCLASS_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_FINDCLASS_ENTRY(arg0,arg1);tracepoint(hotspot_jni, FindClass__entry, arg0,arg1)

#define HOTSPOT_JNI_FINDCLASS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_FINDCLASS_RETURN(arg0);tracepoint(hotspot_jni, FindClass__return, arg0)

#define HOTSPOT_JNI_FROMREFLECTEDFIELD_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_FROMREFLECTEDFIELD_ENTRY(arg0,arg1);tracepoint(hotspot_jni, FromReflectedField__entry, arg0,arg1)

#define HOTSPOT_JNI_FROMREFLECTEDFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_FROMREFLECTEDFIELD_RETURN(arg0);tracepoint(hotspot_jni, FromReflectedField__return, arg0)

#define HOTSPOT_JNI_FROMREFLECTEDMETHOD_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_FROMREFLECTEDMETHOD_ENTRY(arg0,arg1);tracepoint(hotspot_jni, FromReflectedMethod__entry, arg0,arg1)

#define HOTSPOT_JNI_FROMREFLECTEDMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_FROMREFLECTEDMETHOD_RETURN(arg0);tracepoint(hotspot_jni, FromReflectedMethod__return, arg0)

#define HOTSPOT_JNI_GETARRAYLENGTH_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETARRAYLENGTH_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetArrayLength__entry, arg0,arg1)

#define HOTSPOT_JNI_GETARRAYLENGTH_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETARRAYLENGTH_RETURN(arg0);tracepoint(hotspot_jni, GetArrayLength__return, arg0)

#define HOTSPOT_JNI_GETBOOLEANARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETBOOLEANARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetBooleanArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETBOOLEANARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETBOOLEANARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetBooleanArrayElements__return, arg0)

#define HOTSPOT_JNI_GETBOOLEANARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETBOOLEANARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetBooleanArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETBOOLEANARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETBOOLEANARRAYREGION_RETURN();tracepoint(hotspot_jni, GetBooleanArrayRegion__return)

#define HOTSPOT_JNI_GETBOOLEANFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETBOOLEANFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetBooleanField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETBOOLEANFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETBOOLEANFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetBooleanField__return, arg0)

#define HOTSPOT_JNI_GETBYTEARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETBYTEARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetByteArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETBYTEARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETBYTEARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetByteArrayElements__return, arg0)

#define HOTSPOT_JNI_GETBYTEARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETBYTEARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetByteArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETBYTEARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETBYTEARRAYREGION_RETURN();tracepoint(hotspot_jni, GetByteArrayRegion__return)

#define HOTSPOT_JNI_GETBYTEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETBYTEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetByteField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETBYTEFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETBYTEFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetByteField__return, arg0)

#define HOTSPOT_JNI_GETCHARARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETCHARARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetCharArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETCHARARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETCHARARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetCharArrayElements__return, arg0)

#define HOTSPOT_JNI_GETCHARARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETCHARARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetCharArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETCHARARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETCHARARRAYREGION_RETURN();tracepoint(hotspot_jni, GetCharArrayRegion__return)

#define HOTSPOT_JNI_GETCHARFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETCHARFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetCharField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETCHARFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETCHARFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetCharField__return, arg0)

#define HOTSPOT_JNI_GETCREATEDJAVAVMS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETCREATEDJAVAVMS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetCreatedJavaVMs__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETCREATEDJAVAVMS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETCREATEDJAVAVMS_RETURN(arg0);tracepoint(hotspot_jni, GetCreatedJavaVMs__return, arg0)

#define HOTSPOT_JNI_GETDEFAULTJAVAVMINITARGS_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_GETDEFAULTJAVAVMINITARGS_ENTRY(arg0);tracepoint(hotspot_jni, GetDefaultJavaVMInitArgs__entry, arg0)

#define HOTSPOT_JNI_GETDEFAULTJAVAVMINITARGS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETDEFAULTJAVAVMINITARGS_RETURN(arg0);tracepoint(hotspot_jni, GetDefaultJavaVMInitArgs__return, arg0)

#define HOTSPOT_JNI_GETDIRECTBUFFERADDRESS_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETDIRECTBUFFERADDRESS_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetDirectBufferAddress__entry, arg0,arg1)

#define HOTSPOT_JNI_GETDIRECTBUFFERADDRESS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETDIRECTBUFFERADDRESS_RETURN(arg0);tracepoint(hotspot_jni, GetDirectBufferAddress__return, arg0)

#define HOTSPOT_JNI_GETDIRECTBUFFERCAPACITY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETDIRECTBUFFERCAPACITY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetDirectBufferCapacity__entry, arg0,arg1)

#define HOTSPOT_JNI_GETDIRECTBUFFERCAPACITY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETDIRECTBUFFERCAPACITY_RETURN(arg0);tracepoint(hotspot_jni, GetDirectBufferCapacity__return, arg0)

#define HOTSPOT_JNI_GETDOUBLEARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETDOUBLEARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetDoubleArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETDOUBLEARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETDOUBLEARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetDoubleArrayElements__return, arg0)

#define HOTSPOT_JNI_GETDOUBLEARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETDOUBLEARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetDoubleArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETDOUBLEARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETDOUBLEARRAYREGION_RETURN();tracepoint(hotspot_jni, GetDoubleArrayRegion__return)

#define HOTSPOT_JNI_GETDOUBLEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETDOUBLEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetDoubleField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETDOUBLEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_GETDOUBLEFIELD_RETURN();tracepoint(hotspot_jni, GetDoubleField__return)

#define HOTSPOT_JNI_GETENV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETENV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetEnv__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETENV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETENV_RETURN(arg0);tracepoint(hotspot_jni, GetEnv__return, arg0)

#define HOTSPOT_JNI_GETFIELDID_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_GETFIELDID_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, GetFieldID__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_GETFIELDID_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETFIELDID_RETURN(arg0);tracepoint(hotspot_jni, GetFieldID__return, arg0)

#define HOTSPOT_JNI_GETFLOATARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETFLOATARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetFloatArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETFLOATARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETFLOATARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetFloatArrayElements__return, arg0)

#define HOTSPOT_JNI_GETFLOATARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETFLOATARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetFloatArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETFLOATARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETFLOATARRAYREGION_RETURN();tracepoint(hotspot_jni, GetFloatArrayRegion__return)

#define HOTSPOT_JNI_GETFLOATFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETFLOATFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetFloatField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETFLOATFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_GETFLOATFIELD_RETURN();tracepoint(hotspot_jni, GetFloatField__return)

#define HOTSPOT_JNI_GETINTARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETINTARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetIntArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETINTARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETINTARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetIntArrayElements__return, arg0)

#define HOTSPOT_JNI_GETINTARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETINTARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetIntArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETINTARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETINTARRAYREGION_RETURN();tracepoint(hotspot_jni, GetIntArrayRegion__return)

#define HOTSPOT_JNI_GETINTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETINTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetIntField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETINTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETINTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetIntField__return, arg0)

#define HOTSPOT_JNI_GETJAVAVM_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETJAVAVM_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetJavaVM__entry, arg0,arg1)

#define HOTSPOT_JNI_GETJAVAVM_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETJAVAVM_RETURN(arg0);tracepoint(hotspot_jni, GetJavaVM__return, arg0)

#define HOTSPOT_JNI_GETLONGARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETLONGARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetLongArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETLONGARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETLONGARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetLongArrayElements__return, arg0)

#define HOTSPOT_JNI_GETLONGARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETLONGARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetLongArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETLONGARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETLONGARRAYREGION_RETURN();tracepoint(hotspot_jni, GetLongArrayRegion__return)

#define HOTSPOT_JNI_GETLONGFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETLONGFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetLongField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETLONGFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETLONGFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetLongField__return, arg0)

#define HOTSPOT_JNI_GETMETHODID_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_GETMETHODID_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, GetMethodID__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_GETMETHODID_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETMETHODID_RETURN(arg0);tracepoint(hotspot_jni, GetMethodID__return, arg0)

#define HOTSPOT_JNI_GETMODULE_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETMODULE_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetModule__entry, arg0,arg1)

#define HOTSPOT_JNI_GETMODULE_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETMODULE_RETURN(arg0);tracepoint(hotspot_jni, GetModule__return, arg0)

#define HOTSPOT_JNI_GETOBJECTARRAYELEMENT_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETOBJECTARRAYELEMENT_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetObjectArrayElement__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETOBJECTARRAYELEMENT_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETOBJECTARRAYELEMENT_RETURN(arg0);tracepoint(hotspot_jni, GetObjectArrayElement__return, arg0)

#define HOTSPOT_JNI_GETOBJECTCLASS_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETOBJECTCLASS_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetObjectClass__entry, arg0,arg1)

#define HOTSPOT_JNI_GETOBJECTCLASS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETOBJECTCLASS_RETURN(arg0);tracepoint(hotspot_jni, GetObjectClass__return, arg0)

#define HOTSPOT_JNI_GETOBJECTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETOBJECTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetObjectField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETOBJECTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETOBJECTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetObjectField__return, arg0)

#define HOTSPOT_JNI_GETOBJECTREFTYPE_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETOBJECTREFTYPE_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetObjectRefType__entry, arg0,arg1)

#define HOTSPOT_JNI_GETOBJECTREFTYPE_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETOBJECTREFTYPE_RETURN(arg0);tracepoint(hotspot_jni, GetObjectRefType__return, arg0)

#define HOTSPOT_JNI_GETPRIMITIVEARRAYCRITICAL_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETPRIMITIVEARRAYCRITICAL_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetPrimitiveArrayCritical__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETPRIMITIVEARRAYCRITICAL_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETPRIMITIVEARRAYCRITICAL_RETURN(arg0);tracepoint(hotspot_jni, GetPrimitiveArrayCritical__return, arg0)

#define HOTSPOT_JNI_GETSHORTARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSHORTARRAYELEMENTS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetShortArrayElements__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSHORTARRAYELEMENTS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSHORTARRAYELEMENTS_RETURN(arg0);tracepoint(hotspot_jni, GetShortArrayElements__return, arg0)

#define HOTSPOT_JNI_GETSHORTARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETSHORTARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetShortArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETSHORTARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETSHORTARRAYREGION_RETURN();tracepoint(hotspot_jni, GetShortArrayRegion__return)

#define HOTSPOT_JNI_GETSHORTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSHORTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetShortField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSHORTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSHORTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetShortField__return, arg0)

#define HOTSPOT_JNI_GETSTATICBOOLEANFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICBOOLEANFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticBooleanField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICBOOLEANFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICBOOLEANFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticBooleanField__return, arg0)

#define HOTSPOT_JNI_GETSTATICBYTEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICBYTEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticByteField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICBYTEFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICBYTEFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticByteField__return, arg0)

#define HOTSPOT_JNI_GETSTATICCHARFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICCHARFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticCharField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICCHARFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICCHARFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticCharField__return, arg0)

#define HOTSPOT_JNI_GETSTATICDOUBLEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICDOUBLEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticDoubleField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICDOUBLEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_GETSTATICDOUBLEFIELD_RETURN();tracepoint(hotspot_jni, GetStaticDoubleField__return)

#define HOTSPOT_JNI_GETSTATICFIELDID_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_GETSTATICFIELDID_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, GetStaticFieldID__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_GETSTATICFIELDID_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICFIELDID_RETURN(arg0);tracepoint(hotspot_jni, GetStaticFieldID__return, arg0)

#define HOTSPOT_JNI_GETSTATICFLOATFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICFLOATFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticFloatField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICFLOATFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_GETSTATICFLOATFIELD_RETURN();tracepoint(hotspot_jni, GetStaticFloatField__return)

#define HOTSPOT_JNI_GETSTATICINTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICINTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticIntField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICINTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICINTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticIntField__return, arg0)

#define HOTSPOT_JNI_GETSTATICLONGFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICLONGFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticLongField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICLONGFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICLONGFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticLongField__return, arg0)

#define HOTSPOT_JNI_GETSTATICMETHODID_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_GETSTATICMETHODID_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, GetStaticMethodID__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_GETSTATICMETHODID_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICMETHODID_RETURN(arg0);tracepoint(hotspot_jni, GetStaticMethodID__return, arg0)

#define HOTSPOT_JNI_GETSTATICOBJECTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICOBJECTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticObjectField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICOBJECTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICOBJECTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticObjectField__return, arg0)

#define HOTSPOT_JNI_GETSTATICSHORTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTATICSHORTFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStaticShortField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTATICSHORTFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTATICSHORTFIELD_RETURN(arg0);tracepoint(hotspot_jni, GetStaticShortField__return, arg0)

#define HOTSPOT_JNI_GETSTRINGCHARS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTRINGCHARS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStringChars__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTRINGCHARS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTRINGCHARS_RETURN(arg0);tracepoint(hotspot_jni, GetStringChars__return, arg0)

#define HOTSPOT_JNI_GETSTRINGCRITICAL_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTRINGCRITICAL_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStringCritical__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTRINGCRITICAL_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTRINGCRITICAL_RETURN(arg0);tracepoint(hotspot_jni, GetStringCritical__return, arg0)

#define HOTSPOT_JNI_GETSTRINGLENGTH_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETSTRINGLENGTH_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetStringLength__entry, arg0,arg1)

#define HOTSPOT_JNI_GETSTRINGLENGTH_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTRINGLENGTH_RETURN(arg0);tracepoint(hotspot_jni, GetStringLength__return, arg0)

#define HOTSPOT_JNI_GETSTRINGREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETSTRINGREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetStringRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETSTRINGREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETSTRINGREGION_RETURN();tracepoint(hotspot_jni, GetStringRegion__return)

#define HOTSPOT_JNI_GETSTRINGUTFCHARS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_GETSTRINGUTFCHARS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, GetStringUTFChars__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_GETSTRINGUTFCHARS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTRINGUTFCHARS_RETURN(arg0);tracepoint(hotspot_jni, GetStringUTFChars__return, arg0)

#define HOTSPOT_JNI_GETSTRINGUTFLENGTH_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETSTRINGUTFLENGTH_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetStringUTFLength__entry, arg0,arg1)

#define HOTSPOT_JNI_GETSTRINGUTFLENGTH_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSTRINGUTFLENGTH_RETURN(arg0);tracepoint(hotspot_jni, GetStringUTFLength__return, arg0)

#define HOTSPOT_JNI_GETSTRINGUTFREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_GETSTRINGUTFREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, GetStringUTFRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_GETSTRINGUTFREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_GETSTRINGUTFREGION_RETURN();tracepoint(hotspot_jni, GetStringUTFRegion__return)

#define HOTSPOT_JNI_GETSUPERCLASS_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_GETSUPERCLASS_ENTRY(arg0,arg1);tracepoint(hotspot_jni, GetSuperclass__entry, arg0,arg1)

#define HOTSPOT_JNI_GETSUPERCLASS_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETSUPERCLASS_RETURN(arg0);tracepoint(hotspot_jni, GetSuperclass__return, arg0)

#define HOTSPOT_JNI_GETVERSION_ENTRY_WRAPPER(arg0) \
HOTSPOT_JNI_GETVERSION_ENTRY(arg0);tracepoint(hotspot_jni, GetVersion__entry, arg0)

#define HOTSPOT_JNI_GETVERSION_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_GETVERSION_RETURN(arg0);tracepoint(hotspot_jni, GetVersion__return, arg0)

#define HOTSPOT_JNI_ISASSIGNABLEFROM_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_ISASSIGNABLEFROM_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, IsAssignableFrom__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_ISASSIGNABLEFROM_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ISASSIGNABLEFROM_RETURN(arg0);tracepoint(hotspot_jni, IsAssignableFrom__return, arg0)

#define HOTSPOT_JNI_ISINSTANCEOF_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_ISINSTANCEOF_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, IsInstanceOf__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_ISINSTANCEOF_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ISINSTANCEOF_RETURN(arg0);tracepoint(hotspot_jni, IsInstanceOf__return, arg0)

#define HOTSPOT_JNI_ISSAMEOBJECT_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_ISSAMEOBJECT_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, IsSameObject__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_ISSAMEOBJECT_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_ISSAMEOBJECT_RETURN(arg0);tracepoint(hotspot_jni, IsSameObject__return, arg0)

#define HOTSPOT_JNI_MONITORENTER_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_MONITORENTER_ENTRY(arg0,arg1);tracepoint(hotspot_jni, MonitorEnter__entry, arg0,arg1)

#define HOTSPOT_JNI_MONITORENTER_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_MONITORENTER_RETURN(arg0);tracepoint(hotspot_jni, MonitorEnter__return, arg0)

#define HOTSPOT_JNI_MONITOREXIT_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_MONITOREXIT_ENTRY(arg0,arg1);tracepoint(hotspot_jni, MonitorExit__entry, arg0,arg1)

#define HOTSPOT_JNI_MONITOREXIT_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_MONITOREXIT_RETURN(arg0);tracepoint(hotspot_jni, MonitorExit__return, arg0)

#define HOTSPOT_JNI_NEWBOOLEANARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWBOOLEANARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewBooleanArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWBOOLEANARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWBOOLEANARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewBooleanArray__return, arg0)

#define HOTSPOT_JNI_NEWBYTEARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWBYTEARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewByteArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWBYTEARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWBYTEARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewByteArray__return, arg0)

#define HOTSPOT_JNI_NEWCHARARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWCHARARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewCharArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWCHARARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWCHARARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewCharArray__return, arg0)

#define HOTSPOT_JNI_NEWDIRECTBYTEBUFFER_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_NEWDIRECTBYTEBUFFER_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, NewDirectByteBuffer__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_NEWDIRECTBYTEBUFFER_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWDIRECTBYTEBUFFER_RETURN(arg0);tracepoint(hotspot_jni, NewDirectByteBuffer__return, arg0)

#define HOTSPOT_JNI_NEWDOUBLEARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWDOUBLEARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewDoubleArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWDOUBLEARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWDOUBLEARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewDoubleArray__return, arg0)

#define HOTSPOT_JNI_NEWFLOATARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWFLOATARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewFloatArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWFLOATARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWFLOATARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewFloatArray__return, arg0)

#define HOTSPOT_JNI_NEWGLOBALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWGLOBALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewGlobalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWGLOBALREF_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWGLOBALREF_RETURN(arg0);tracepoint(hotspot_jni, NewGlobalRef__return, arg0)

#define HOTSPOT_JNI_NEWINTARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWINTARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewIntArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWINTARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWINTARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewIntArray__return, arg0)

#define HOTSPOT_JNI_NEWLOCALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWLOCALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewLocalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWLOCALREF_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWLOCALREF_RETURN(arg0);tracepoint(hotspot_jni, NewLocalRef__return, arg0)

#define HOTSPOT_JNI_NEWLONGARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWLONGARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewLongArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWLONGARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWLONGARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewLongArray__return, arg0)

#define HOTSPOT_JNI_NEWOBJECTA_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_NEWOBJECTA_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, NewObjectA__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_NEWOBJECTA_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWOBJECTA_RETURN(arg0);tracepoint(hotspot_jni, NewObjectA__return, arg0)

#define HOTSPOT_JNI_NEWOBJECTARRAY_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_NEWOBJECTARRAY_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, NewObjectArray__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_NEWOBJECTARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWOBJECTARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewObjectArray__return, arg0)

#define HOTSPOT_JNI_NEWOBJECT_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_NEWOBJECT_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, NewObject__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_NEWOBJECT_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWOBJECT_RETURN(arg0);tracepoint(hotspot_jni, NewObject__return, arg0)

#define HOTSPOT_JNI_NEWOBJECTV_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_NEWOBJECTV_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, NewObjectV__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_NEWOBJECTV_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWOBJECTV_RETURN(arg0);tracepoint(hotspot_jni, NewObjectV__return, arg0)

#define HOTSPOT_JNI_NEWSHORTARRAY_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWSHORTARRAY_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewShortArray__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWSHORTARRAY_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWSHORTARRAY_RETURN(arg0);tracepoint(hotspot_jni, NewShortArray__return, arg0)

#define HOTSPOT_JNI_NEWSTRING_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_NEWSTRING_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, NewString__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_NEWSTRING_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWSTRING_RETURN(arg0);tracepoint(hotspot_jni, NewString__return, arg0)

#define HOTSPOT_JNI_NEWSTRINGUTF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWSTRINGUTF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewStringUTF__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWSTRINGUTF_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWSTRINGUTF_RETURN(arg0);tracepoint(hotspot_jni, NewStringUTF__return, arg0)

#define HOTSPOT_JNI_NEWWEAKGLOBALREF_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_NEWWEAKGLOBALREF_ENTRY(arg0,arg1);tracepoint(hotspot_jni, NewWeakGlobalRef__entry, arg0,arg1)

#define HOTSPOT_JNI_NEWWEAKGLOBALREF_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_NEWWEAKGLOBALREF_RETURN(arg0);tracepoint(hotspot_jni, NewWeakGlobalRef__return, arg0)

#define HOTSPOT_JNI_POPLOCALFRAME_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_POPLOCALFRAME_ENTRY(arg0,arg1);tracepoint(hotspot_jni, PopLocalFrame__entry, arg0,arg1)

#define HOTSPOT_JNI_POPLOCALFRAME_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_POPLOCALFRAME_RETURN(arg0);tracepoint(hotspot_jni, PopLocalFrame__return, arg0)

#define HOTSPOT_JNI_PUSHLOCALFRAME_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_PUSHLOCALFRAME_ENTRY(arg0,arg1);tracepoint(hotspot_jni, PushLocalFrame__entry, arg0,arg1)

#define HOTSPOT_JNI_PUSHLOCALFRAME_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_PUSHLOCALFRAME_RETURN(arg0);tracepoint(hotspot_jni, PushLocalFrame__return, arg0)

#define HOTSPOT_JNI_REGISTERNATIVES_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_REGISTERNATIVES_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, RegisterNatives__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_REGISTERNATIVES_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_REGISTERNATIVES_RETURN(arg0);tracepoint(hotspot_jni, RegisterNatives__return, arg0)

#define HOTSPOT_JNI_RELEASEBOOLEANARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEBOOLEANARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseBooleanArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEBOOLEANARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEBOOLEANARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseBooleanArrayElements__return)

#define HOTSPOT_JNI_RELEASEBYTEARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEBYTEARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseByteArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEBYTEARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEBYTEARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseByteArrayElements__return)

#define HOTSPOT_JNI_RELEASECHARARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASECHARARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseCharArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASECHARARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASECHARARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseCharArrayElements__return)

#define HOTSPOT_JNI_RELEASEDOUBLEARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEDOUBLEARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseDoubleArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEDOUBLEARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEDOUBLEARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseDoubleArrayElements__return)

#define HOTSPOT_JNI_RELEASEFLOATARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEFLOATARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseFloatArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEFLOATARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEFLOATARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseFloatArrayElements__return)

#define HOTSPOT_JNI_RELEASEINTARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEINTARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseIntArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEINTARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEINTARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseIntArrayElements__return)

#define HOTSPOT_JNI_RELEASELONGARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASELONGARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseLongArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASELONGARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASELONGARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseLongArrayElements__return)

#define HOTSPOT_JNI_RELEASEPRIMITIVEARRAYCRITICAL_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASEPRIMITIVEARRAYCRITICAL_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleasePrimitiveArrayCritical__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASEPRIMITIVEARRAYCRITICAL_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASEPRIMITIVEARRAYCRITICAL_RETURN();tracepoint(hotspot_jni, ReleasePrimitiveArrayCritical__return)

#define HOTSPOT_JNI_RELEASESHORTARRAYELEMENTS_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_RELEASESHORTARRAYELEMENTS_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ReleaseShortArrayElements__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_RELEASESHORTARRAYELEMENTS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASESHORTARRAYELEMENTS_RETURN();tracepoint(hotspot_jni, ReleaseShortArrayElements__return)

#define HOTSPOT_JNI_RELEASESTRINGCHARS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_RELEASESTRINGCHARS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, ReleaseStringChars__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_RELEASESTRINGCHARS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASESTRINGCHARS_RETURN();tracepoint(hotspot_jni, ReleaseStringChars__return)

#define HOTSPOT_JNI_RELEASESTRINGCRITICAL_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_RELEASESTRINGCRITICAL_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, ReleaseStringCritical__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_RELEASESTRINGCRITICAL_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASESTRINGCRITICAL_RETURN();tracepoint(hotspot_jni, ReleaseStringCritical__return)

#define HOTSPOT_JNI_RELEASESTRINGUTFCHARS_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_RELEASESTRINGUTFCHARS_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, ReleaseStringUTFChars__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_RELEASESTRINGUTFCHARS_RETURN_WRAPPER() \
HOTSPOT_JNI_RELEASESTRINGUTFCHARS_RETURN();tracepoint(hotspot_jni, ReleaseStringUTFChars__return)

#define HOTSPOT_JNI_SETBOOLEANARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETBOOLEANARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetBooleanArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETBOOLEANARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETBOOLEANARRAYREGION_RETURN();tracepoint(hotspot_jni, SetBooleanArrayRegion__return)

#define HOTSPOT_JNI_SETBOOLEANFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETBOOLEANFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetBooleanField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETBOOLEANFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETBOOLEANFIELD_RETURN();tracepoint(hotspot_jni, SetBooleanField__return)

#define HOTSPOT_JNI_SETBYTEARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETBYTEARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetByteArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETBYTEARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETBYTEARRAYREGION_RETURN();tracepoint(hotspot_jni, SetByteArrayRegion__return)

#define HOTSPOT_JNI_SETBYTEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETBYTEFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetByteField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETBYTEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETBYTEFIELD_RETURN();tracepoint(hotspot_jni, SetByteField__return)

#define HOTSPOT_JNI_SETCHARARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETCHARARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetCharArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETCHARARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETCHARARRAYREGION_RETURN();tracepoint(hotspot_jni, SetCharArrayRegion__return)

#define HOTSPOT_JNI_SETCHARFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETCHARFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetCharField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETCHARFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETCHARFIELD_RETURN();tracepoint(hotspot_jni, SetCharField__return)

#define HOTSPOT_JNI_SETDOUBLEARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETDOUBLEARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetDoubleArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETDOUBLEARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETDOUBLEARRAYREGION_RETURN();tracepoint(hotspot_jni, SetDoubleArrayRegion__return)

#define HOTSPOT_JNI_SETDOUBLEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_SETDOUBLEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, SetDoubleField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_SETDOUBLEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETDOUBLEFIELD_RETURN();tracepoint(hotspot_jni, SetDoubleField__return)

#define HOTSPOT_JNI_SETFLOATARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETFLOATARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetFloatArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETFLOATARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETFLOATARRAYREGION_RETURN();tracepoint(hotspot_jni, SetFloatArrayRegion__return)

#define HOTSPOT_JNI_SETFLOATFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_SETFLOATFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, SetFloatField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_SETFLOATFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETFLOATFIELD_RETURN();tracepoint(hotspot_jni, SetFloatField__return)

#define HOTSPOT_JNI_SETINTARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETINTARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetIntArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETINTARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETINTARRAYREGION_RETURN();tracepoint(hotspot_jni, SetIntArrayRegion__return)

#define HOTSPOT_JNI_SETINTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETINTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetIntField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETINTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETINTFIELD_RETURN();tracepoint(hotspot_jni, SetIntField__return)

#define HOTSPOT_JNI_SETLONGARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETLONGARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetLongArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETLONGARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETLONGARRAYREGION_RETURN();tracepoint(hotspot_jni, SetLongArrayRegion__return)

#define HOTSPOT_JNI_SETLONGFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETLONGFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetLongField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETLONGFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETLONGFIELD_RETURN();tracepoint(hotspot_jni, SetLongField__return)

#define HOTSPOT_JNI_SETOBJECTARRAYELEMENT_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETOBJECTARRAYELEMENT_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetObjectArrayElement__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETOBJECTARRAYELEMENT_RETURN_WRAPPER() \
HOTSPOT_JNI_SETOBJECTARRAYELEMENT_RETURN();tracepoint(hotspot_jni, SetObjectArrayElement__return)

#define HOTSPOT_JNI_SETOBJECTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETOBJECTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetObjectField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETOBJECTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETOBJECTFIELD_RETURN();tracepoint(hotspot_jni, SetObjectField__return)

#define HOTSPOT_JNI_SETSHORTARRAYREGION_ENTRY_WRAPPER(arg0,arg1,arg2,arg3,arg4) \
HOTSPOT_JNI_SETSHORTARRAYREGION_ENTRY(arg0,arg1,arg2,arg3,arg4);tracepoint(hotspot_jni, SetShortArrayRegion__entry, arg0,arg1,arg2,arg3,arg4)

#define HOTSPOT_JNI_SETSHORTARRAYREGION_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSHORTARRAYREGION_RETURN();tracepoint(hotspot_jni, SetShortArrayRegion__return)

#define HOTSPOT_JNI_SETSHORTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSHORTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetShortField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSHORTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSHORTFIELD_RETURN();tracepoint(hotspot_jni, SetShortField__return)

#define HOTSPOT_JNI_SETSTATICBOOLEANFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICBOOLEANFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticBooleanField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICBOOLEANFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICBOOLEANFIELD_RETURN();tracepoint(hotspot_jni, SetStaticBooleanField__return)

#define HOTSPOT_JNI_SETSTATICBYTEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICBYTEFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticByteField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICBYTEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICBYTEFIELD_RETURN();tracepoint(hotspot_jni, SetStaticByteField__return)

#define HOTSPOT_JNI_SETSTATICCHARFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICCHARFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticCharField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICCHARFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICCHARFIELD_RETURN();tracepoint(hotspot_jni, SetStaticCharField__return)

#define HOTSPOT_JNI_SETSTATICDOUBLEFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_SETSTATICDOUBLEFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, SetStaticDoubleField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_SETSTATICDOUBLEFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICDOUBLEFIELD_RETURN();tracepoint(hotspot_jni, SetStaticDoubleField__return)

#define HOTSPOT_JNI_SETSTATICFLOATFIELD_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_SETSTATICFLOATFIELD_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, SetStaticFloatField__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_SETSTATICFLOATFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICFLOATFIELD_RETURN();tracepoint(hotspot_jni, SetStaticFloatField__return)

#define HOTSPOT_JNI_SETSTATICINTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICINTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticIntField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICINTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICINTFIELD_RETURN();tracepoint(hotspot_jni, SetStaticIntField__return)

#define HOTSPOT_JNI_SETSTATICLONGFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICLONGFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticLongField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICLONGFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICLONGFIELD_RETURN();tracepoint(hotspot_jni, SetStaticLongField__return)

#define HOTSPOT_JNI_SETSTATICOBJECTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICOBJECTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticObjectField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICOBJECTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICOBJECTFIELD_RETURN();tracepoint(hotspot_jni, SetStaticObjectField__return)

#define HOTSPOT_JNI_SETSTATICSHORTFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_SETSTATICSHORTFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, SetStaticShortField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_SETSTATICSHORTFIELD_RETURN_WRAPPER() \
HOTSPOT_JNI_SETSTATICSHORTFIELD_RETURN();tracepoint(hotspot_jni, SetStaticShortField__return)

#define HOTSPOT_JNI_THROW_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_THROW_ENTRY(arg0,arg1);tracepoint(hotspot_jni, Throw__entry, arg0,arg1)

#define HOTSPOT_JNI_THROW_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_THROW_RETURN(arg0);tracepoint(hotspot_jni, Throw__return, arg0)

#define HOTSPOT_JNI_THROWNEW_ENTRY_WRAPPER(arg0,arg1,arg2) \
HOTSPOT_JNI_THROWNEW_ENTRY(arg0,arg1,arg2);tracepoint(hotspot_jni, ThrowNew__entry, arg0,arg1,arg2)

#define HOTSPOT_JNI_THROWNEW_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_THROWNEW_RETURN(arg0);tracepoint(hotspot_jni, ThrowNew__return, arg0)

#define HOTSPOT_JNI_TOREFLECTEDFIELD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_TOREFLECTEDFIELD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ToReflectedField__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_TOREFLECTEDFIELD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_TOREFLECTEDFIELD_RETURN(arg0);tracepoint(hotspot_jni, ToReflectedField__return, arg0)

#define HOTSPOT_JNI_TOREFLECTEDMETHOD_ENTRY_WRAPPER(arg0,arg1,arg2,arg3) \
HOTSPOT_JNI_TOREFLECTEDMETHOD_ENTRY(arg0,arg1,arg2,arg3);tracepoint(hotspot_jni, ToReflectedMethod__entry, arg0,arg1,arg2,arg3)

#define HOTSPOT_JNI_TOREFLECTEDMETHOD_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_TOREFLECTEDMETHOD_RETURN(arg0);tracepoint(hotspot_jni, ToReflectedMethod__return, arg0)

#define HOTSPOT_JNI_UNREGISTERNATIVES_ENTRY_WRAPPER(arg0,arg1) \
HOTSPOT_JNI_UNREGISTERNATIVES_ENTRY(arg0,arg1);tracepoint(hotspot_jni, UnregisterNatives__entry, arg0,arg1)

#define HOTSPOT_JNI_UNREGISTERNATIVES_RETURN_WRAPPER(arg0) \
HOTSPOT_JNI_UNREGISTERNATIVES_RETURN(arg0);tracepoint(hotspot_jni, UnregisterNatives__return, arg0)

