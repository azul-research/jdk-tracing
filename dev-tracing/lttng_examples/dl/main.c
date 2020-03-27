#define TRACEPOINT_DEFINE
#define TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#include "tp.h"
#include <stdio.h>

int main() {
	tracepoint(provider_test, test, 1);
	printf("hello!!\n");
}
