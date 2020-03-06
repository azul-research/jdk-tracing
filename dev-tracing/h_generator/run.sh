#$1 -- path to jdk project root
export CLASSPATH=".:/usr/local/lib/antlr-4.8-complete.jar:$CLASSPATH"

touch $1/src/hotspot/share/utilities/hotspotLTTngDtrace.h
touch $1/src/hotspot/share/utilities/hotspotDtrace.h
touch $1/src/hotspot/share/utilities/hs_privateLTTngDtrace.h
touch $1/src/hotspot/share/utilities/hs_privateDtrace.h

java Main hotspot.d $1/src/hotspot/share/utilities/hotspotLTTngDtrace.h lttng dtrace
java Main hotspot.d $1/src/hotspot/share/utilities/hotspotDtrace.h dtrace
java Main hs_private.d $1/src/hotspot/share/utilities/hs_privateLTTngDtrace.h lttng dtrace
java Main hs_private.d $1/src/hotspot/share/utilities/hs_privateDtrace.h dtrace
