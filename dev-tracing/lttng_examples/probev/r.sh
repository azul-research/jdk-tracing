$1/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java

lttng create  --output=.output

echo $1/build/linux-x86_64-server-release/images

lttng enable-event -k --userspace-probe=sdt:$1/build/linux-x86_64-server-release/images/jdk/lib/server/libjvm.so:hs_private:safepoint__begin --channel=channel1 entry

lttng enable-event -u  'hs_private:safepoint__begin' --channel=channel1
lttng start

$1/build/linux-x86_64-server-release/images/jdk/bin/java   -XX:+DTraceMethodProbes Main

lttng stop
lttng view
lttng destroy

rm -rf output
