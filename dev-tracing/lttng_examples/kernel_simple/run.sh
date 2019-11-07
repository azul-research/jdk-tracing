#`/bin/bash

lttng create kernel --output=./kernel
lttng enable-event -k -a
lttng start
sleep 5
lttng stop
lttng destroy kernel