#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	
	int n;
	string str;
	cin >> n;
	cin >> str;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (str[i] - 96) * pow(31, i);
	}

	cout << sum;

	return 0;
}