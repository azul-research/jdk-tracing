dir="../../../"

$dir/build/$2/images/jdk/bin/javac Main.java

lttng create  --output=.output

lttng enable-event -k --userspace-probe=sdt:$dir/build/$2/images/jdk/lib/server/libjvm.so:hs_private:safepoint__begin --channel=channel1 entry

lttng enable-event -u  'hs_private:safepoint__begin' --channel=channel1
lttng start

$dir/build/$2/images/jdk/bin/java  -XX:+DTraceMethodProbes Main

lttng stop
lttng view
lttng destroy

rm -rf output
