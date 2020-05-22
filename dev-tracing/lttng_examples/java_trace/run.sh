path="../../.."
conf="dt-lt"

$path/build/$conf/images/jdk/bin/javac Main.java

lttng create --output=output
lttng enable-channel --userspace --blocking-timeout=inf blocking-channel1
lttng enable-channel --userspace --blocking-timeout=inf blocking-channel2
lttng enable-event -u 'hotspot:method__entry' --channel=blocking-channel1
lttng enable-event -u 'hotspot:method__return' --channel=blocking-channel2
lttng add-context -u -t vtid -t procname --channel=blocking-channel1
lttng add-context -u -t vtid -t procname --channel=blocking-channel2

lttng start

$path/build/$conf/images/jdk/bin/java -XX:+DTraceMethodProbes Main

lttng stop
lttng view

lttng destroy
