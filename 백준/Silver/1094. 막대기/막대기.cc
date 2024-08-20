#include <iostream>
using namespace std;

char intToChar(int x) {

	if (x == 1) return '1';
	if (x == 0) return '0';
}


string tenToTwo(int x) {
	string toTwo = "";

	while(x > 0) {
		toTwo += intToChar(x % 2);
		x /= 2;
	}

	return toTwo;
}



int main() {

	int x;
	int cnt = 0;
	cin >> x;

	string str = tenToTwo(x);

	for (char ch : str) {
		if (ch == '1') cnt++;
	}

	cout << cnt;



	return 0;
}