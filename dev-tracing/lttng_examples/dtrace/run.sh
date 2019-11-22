lttng create new-dtrace-probe --output=./output
#lttng enable-event -u 'hotspot_jni:*'
#lttng enable-event -u -a
lttng enable-event -u 'hotspot_method_tp:*' --channel=channel1
#lttng enable-event -u 'vm_tracepoint_provider:*' --channel=channel2

lttng start

../../../build/linux-x86_64-server-release/images/jdk/bin/javac  --version
../../../build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
../../../build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main

lttng stop
#lttng view
lttng destroy
