path="../../.."
conf="dt-lt"

$path/build/$conf/images/jdk/bin/javac Main.java

lttng create --output=sp_output
lttng enable-channel -u --blocking-timeout=inf blocking-channel1
lttng enable-channel -u --blocking-timeout=inf blocking-channel2
lttng enable-channel -u --blocking-timeout=inf blocking-channel3
lttng enable-channel -u --blocking-timeout=inf blocking-channel4
lttng enable-event -u 'hotspot:method__entry' --channel=blocking-channel1
lttng enable-event -u 'hotspot:method__return' --channel=blocking-channel2
lttng enable-event -u 'hs_private:safepoint__begin' --channel=blocking-channel3
lttng enable-event -u 'hs_private:safepoint__end' --channel=blocking-channel4
lttng add-context -u -t vtid -t procname -t vpid -t ip --channel=blocking-channel1
lttng add-context -u -t vtid -t procname -t vpid -t ip --channel=blocking-channel2
lttng add-context -u -t vtid -t procname -t vpid -t ip --channel=blocking-channel3
lttng add-context -u -t vtid -t procname -t vpid -t ip --channel=blocking-channel4


lttng start

$path/build/$conf/images/jdk/bin/java -XX:+DTraceMethodProbes Main

lttng stop
#lttng view

lttng destroy
