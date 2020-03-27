#define TRACEPOINT_DEFINE
#include "tp.h"
#include <stdio.h>

int main() {
	tracepoint(provider_test, test, 1);
	printf("hello\n");
}
