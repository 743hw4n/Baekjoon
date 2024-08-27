#include <iostream>
using namespace std;

bool isPal(string n) {

	for (int i = 0; i < n.size(); i++) {
		if (n[i] != n[n.size() - i - 1]) return false;
	}

	return true;
}

int main() {
	string n;

	while (true) {
		cin >> n;
		if (n == "0") break;

		if (isPal(n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}