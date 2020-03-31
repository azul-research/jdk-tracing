#define TRACEPOINT_DEFINE
#define TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#include "tp.h"
#include <stdio.h>
#include <dlfcn.h>

int main() {
    void* handle = dlopen("./libtpp.so", RTLD_NOW | RTLD_GLOBAL);
    if (!handle) {
        printf(":(\n");
    } else {
        printf(":)\n");    
    }   
    tracepoint(provider_test, test, 1);
	printf("hello!!\n");
}
