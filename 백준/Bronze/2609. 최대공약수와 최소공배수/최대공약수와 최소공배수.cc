#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
	int result;

	for (int i = 1; i <= min(n1, n2); i++) {
		if (n1 % i == 0 && n2 % i == 0) result = i;
	}

	return result;
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	cout << gcd(n1, n2) << '\n' << n1 * n2 / gcd(n1, n2);
	return 0;
}