#include <bits/stdc++.h>
#include <tp.hpp>
using namespace std;

int bar(int cnt, const char* name = __builtin_FUNCTION());

#define entry(name) tracepoint(lttng_ust_cyg_profile, func_entry, __FUNCTION__,  name)

#define exit_func(name) tracepoint(lttng_ust_cyg_profile, func_exit, __FUNCTION__,  name)


int foo(int cnt, const char* name = __builtin_FUNCTION()) {
	entry(name);
	if (cnt == 0) {
		exit_func(name);
		return 42;
	}

	exit_func(name);
	return bar(cnt);
}

int bar(int cnt, const char* name) {
	entry(name);
	if (cnt == 0) {
		exit_func(name);
		return foo(0);
	}

	exit_func(name);
	return bar(cnt - 1);
}

int main() {
	entry("");
	srand(time(0));
	int n = rand()%100 + 100;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand()%1000;
		foo(i);
	}
	sort(a, a + n);
	cout << foo(n) << ' ' << bar(n) << endl;
	exit_func("");
}