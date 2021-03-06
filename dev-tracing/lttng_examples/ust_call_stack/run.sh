#!/bin/bash

g++ -std=c++11 -g  -finstrument-functions main.cpp -o main -lpthread
nm  --demangle main >mapping.txt
lttng create ust-trace --output=./ust-trace

lttng enable-channel -u --blocking-timeout=100 blocking-channel
lttng enable-event -u -a --channel=blocking-channel
lttng add-context -u -t vtid -t procname

lttng start

# LD_PRELOAD=liblttng-ust-libc-wrapper.so:liblttng-ust-dl.so:liblttng-ust-cyg-profile.so LTTNG_UST_ALLOW_BLOCKING=1 ./main
# LD_PRELOAD=liblttng-ust-cyg-profile-fast.so ./main

LD_PRELOAD=liblttng-ust-cyg-profile.so LTTNG_UST_ALLOW_BLOCKING=1 ./main

lttng stop
lttng view

lttng destroy ust-trace
