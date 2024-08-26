#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool is90(int a, int b, int c) {
	int max_side = max({ a, b, c });
	
	if (max_side == a)
		return pow(b, 2) + pow(c, 2) == pow(a, 2);

	else if (max_side == b)
		return pow(a, 2) + pow(c, 2) == pow(b, 2);

	else if (max_side == c)
		return pow(a, 2) + pow(b, 2) == pow(c, 2);

}

int main() {

	int a, b, c;

	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (is90(a, b, c))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}

	return 0;
}