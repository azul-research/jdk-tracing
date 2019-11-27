# $1 -- path to jdk without tracepoints and probes
# $2 -- path to jdk with lttng tracepoints
# $3 -- path to jdk with enabled dtrace

ts=$(date +%s%N)
$1/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$1/build/linux-x86_64-server-release/images/jdk/bin/java Main

echo "nothing: "$((($(date +%s%N) - $ts)))

rm Main.class

ts=$(date +%s%N)
$2/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$2/build/linux-x86_64-server-release/images/jdk/bin/java Main
echo "lttng: "$((($(date +%s%N) - $ts)))

rm Main.class

ts=$(date +%s%N)
$2/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$2/build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main
echo "lttng + xx: "$((($(date +%s%N) - $ts)))

rm Main.class

lttng create dtrace-points --output=./dtrace-output
lttng enable-event -u 'hotspot_method_tp:method_entry' --channel=channel1
lttng enable-event -u 'hotspot_method_tp:method_exit' --channel=channel2
lttng start


ts=$(date +%s%N)
$2/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$2/build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main
echo "lttng + saving: "$((($(date +%s%N) - $ts)))


lttng stop
#lttng view
lttng destroy

rm Main.class
rm -rf dtrace-output

lttng create dtrace-points --output=./dtrace-output
lttng enable-channel --userspace --blocking-timeout=inf blocking-channel1
lttng enable-channel --userspace --blocking-timeout=inf blocking-channel2
lttng enable-event -u 'hotspot_method_tp:method_entry' --channel=blocking-channel1
lttng enable-event -u 'hotspot_method_tp:method_exit' --channel=blocking-channel2
lttng start


ts=$(date +%s%N)
$2/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$2/build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main
echo  "lttng + blocking saving: "$((($(date +%s%N) - $ts)))


lttng stop
#lttng view
lttng destroy

rm Main.class
rm -rf dtrace-output

ts=$(date +%s%N)
$3/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$3/build/linux-x86_64-server-release/images/jdk/bin/java Main
echo "ustd: "$((($(date +%s%N) - $ts)))

rm Main.class

ts=$(date +%s%N)
$3/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$3/build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main
echo "ustd + xx: " $((($(date +%s%N) - $ts)))

rm Main.class

lttng create  --output=./usdt-output

lttng enable-event -k --userspace-probe=sdt:$3/build/linux-x86_64-server-release/images/jdk/lib/server/libjvm.so:hotspot:method__entry --channel=channel1 entry
lttng enable-event -k --userspace-probe=sdt:$3/build/linux-x86_64-server-release/images/jdk/lib/server/libjvm.so:hotspot:method__return --channel=channel2 exit1
lttng start

ts=$(date +%s%N)
$3/build/linux-x86_64-server-release/images/jdk/bin/javac Main.java
$3/build/linux-x86_64-server-release/images/jdk/bin/java -XX:+DTraceMethodProbes Main
echo "ustd + lttng: "$((($(date +%s%N) - $ts)))

lttng stop
lttng destroy

rm Main.class
rm -rf usdt-output
