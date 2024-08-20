#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		string str;
		cin >> str;
		

		if ((int)str.back() % 2 == 0) cout << "even" << endl;
		else cout << "odd" << endl;

	}

	return 0;
}