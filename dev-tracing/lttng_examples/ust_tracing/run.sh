#!/bin/bash

gcc -g -finstrument-functions main.c -o main

lttng create ust-trace --output=./ust-trace

lttng add-context -u -t vpid -t vtid -t procname

lttng enable-channel -u --blocking-timeout=100 blocking-channel
lttng enable-event -u -a --channel=blocking-channel

lttng start

LD_PRELOAD=liblttng-ust-libc-wrapper.so:liblttng-ust-dl.so:liblttng-ust-cyg-profile.so LTTNG_UST_ALLOW_BLOCKING=1 ./main

lttng stop

lttng destroy ust-trace