#include <iostream>
using namespace std;


int m = 1234567891;

int main() {
	
	
	int n;
	string str;
	cin >> n;
	cin >> str;

	long long sum = 0;
	long long r = 1;

	for (int i = 0; i < n; i++) {
		sum = (sum + (str[i] - 96) * r) % m;
		r = (r* 31) % m;
	}

	cout << sum;

	return 0;
}