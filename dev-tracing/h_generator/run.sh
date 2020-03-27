# $1 -- path to jdk project root
export CLASSPATH=".:/usr/local/lib/antlr-4.8-complete.jar:$CLASSPATH"

touch $1/src/hotspot/share/utilities/hotspotLTTngDtrace.h
touch $1/src/hotspot/share/utilities/hs_privateLTTngDtrace.h
# touch $1/src/hotspot/share/utilities/hs_jniLTTngDtrace.h

java Main $1/src/hotspot/os/posix/dtrace/hotspot.d $1/src/hotspot/share/utilities/hotspotLTTngDtrace.h lttng dtrace
java Main $1/src/hotspot/os/posix/dtrace/hs_private.d $1/src/hotspot/share/utilities/hs_privateLTTngDtrace.h lttng dtrace
# java Main $1/src/hotspot/os/posix/dtrace/hotspot_jni.d $1/src/hotspot/share/utilities/hs_jniLTTngDtrace.h lttng dtrace
