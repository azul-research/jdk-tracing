#!/bin/bash

g++ -std=c++14 -I. -g hello.cpp tp.c -llttng-ust -ldl -o hello

lttng create hello_test --output=./hello_output
lttng enable-event -u 'hello_tp_provider:*'
lttng start
./hello a a a a a
lttng stop
lttng view
lttng destroy hello_test