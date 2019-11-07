#include <bits/stdc++.h>
#include <tp.h>

using namespace std;

int main(int argc, char *argv[])
{
    tracepoint(hello_tp_provider, hello_tp, argc);
    std::cout << "Hello, world!\n" << argc;
    tracepoint(hello_tp_provider, hello_tp, 0);
}