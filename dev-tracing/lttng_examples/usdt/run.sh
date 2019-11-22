g++ -std=c++14 main.cpp -o main
lttng create --output=./here
lttng enable-event -k --userspace-probe=sdt:./main:provider:name probe
