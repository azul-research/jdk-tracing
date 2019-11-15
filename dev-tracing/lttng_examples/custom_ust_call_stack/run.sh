#!/bin/bash

g++ -I. -std=c++11 -g  tp.cpp main.cpp -o main -ldl -llttng-ust
lttng create ust-trace --output=./ust-custom-trace

lttng enable-channel -u --blocking-timeout=100 blocking-channel
lttng enable-event -u 'lttng_ust_cyg_profile:func_exit' --channel=blocking-channel
lttng enable-event -u 'lttng_ust_cyg_profile:func_entry' --channel=blocking-channel
lttng add-context -u -t vtid -t procname

lttng start

LTTNG_UST_ALLOW_BLOCKING=1 ./main

lttng stop
lttng view

lttng destroy ust-trace
