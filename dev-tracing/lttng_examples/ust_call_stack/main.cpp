#include <bits/stdc++.h>
using namespace std;

int bar(int cnt);

int foo(int cnt) {
	if (cnt == 0) {
		return 42;
	}

	return bar(cnt);
}

int bar(int cnt) {
	if (cnt == 0) {
		return foo(0);
	}
	return bar(cnt - 1);
}

int main() {
	srand(time(0));
	int n = rand()%100 + 100;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand()%1000;
		foo(i);
	}
	sort(a, a + n);
	cout << foo(n) << ' ' << bar(n) << endl;
}