#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n1, n2, k1, k2; // 1 : 비즈니스석 2 : 이코노미석
	cin >> n1 >> k1 >> n2 >> k2;

	cout << n1 * k1 + n2 * k2;

	return 0;
}