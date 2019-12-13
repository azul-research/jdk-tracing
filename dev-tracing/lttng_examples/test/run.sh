jdkPath="../../../build/linux-x86_64-server-release/images/jdk/bin"

$jdkPath/javac Main.java


lttng create test-session --output=./here
lttng enable-event -u 'hotspot:*' --channel=channel1
lttng enable-event -u 'hs_private:*' --channel=channel2
# lttng enable-event -k --userspace-probe=sdt:$jdkPath/../lib/server/libjvm.so:hotspot:method__entry --channel=channel1 entry
lttng start

$jdkPath/java -XX:+DTraceMethodProbes Main


lttng stop
lttng view

lttng destroy test-session



