# $1 -- path to jdk-tracing root

lttng create new-dtrace-probe --output=./output
lttng enable-event -u 'hotspot_jni:*'
lttng enable-event -u 'hotspot_method_tp:*' --channel=channel1
lttng enable-event -u 'vm_tracepoint_provider:*' --channel=channel2

lttng start

$1build/linux-x86_64-server-release/images/jdk/bin/javac --version
$1build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$1build/linux-x86_64-server-release/images/jdk/bin/java Main

lttng stop
lttng view
lttng destroy
