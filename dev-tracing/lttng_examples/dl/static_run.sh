gcc -I. -c tpp.c
gcc -c static_main.c
gcc -o static_main static_main.o tpp.o -llttng-ust -ldl
./static_main
