# $1 -- run.sh or static_run.sh

lttng create --output=./d
lttng enable-event -u "provider_test:*"
lttng start

bash $1

lttng stop
lttng view
lttng destroy

rm -rf d
