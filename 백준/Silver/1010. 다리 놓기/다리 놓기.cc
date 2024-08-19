#include <iostream>
using namespace std;

int combination(int n, int m) {
	int result = 1;

	int r = 1;
	for (int i = m; i > m - n; i--) {
		result *=  i;
		result /= r;
		r++;
	}

	return result;
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;
		
		cout << combination(n, m) << endl;
	}
	



	return 0;
}