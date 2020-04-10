gcc -I. -fpic lttng_hotspot.cpp
gcc -I. -fpic lttng_hs_private.cpp
gcc -I. -fpic lttng_hs_jni.cpp
gcc -I. -fpic -shared -o lttnglib.so lttng_hotspot.cpp lttng_hs_private.cpp lttng_hs_jni.cpp -llttng-ust -ldl
