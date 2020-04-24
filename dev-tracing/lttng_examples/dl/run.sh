gcc -I. -fpic -c tpp.c
gcc -shared -o libtpp.so tpp.o -llttng-ust -ldl

gcc -c main.c
gcc -o main main.o -ldl

# LD_PRELOAD=./libtpp.so ./main
./main
