#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int withTax1 = n * 0.78;
	int withTax2 = n -n * 0.2 * 0.22;

	cout << withTax1 << " " << withTax2;




	return 0;
}