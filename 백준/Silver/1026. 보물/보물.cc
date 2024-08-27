#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int main() {
	int n;
	cin >> n;

	int a[50];
	int b[50];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n, greater<>());

	int s = 0;

	for (int i = 0; i < n; i++) {
		s += a[i] * b[i];
	}

	cout << s;

	return 0;
}