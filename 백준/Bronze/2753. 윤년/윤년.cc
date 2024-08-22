#include <iostream>
using namespace std;

bool isYoon(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0)
			if (year % 400 == 0)
				return true;
			else return false;
		else return true;
	}
	return false;
}
int main() {
	int year;
	cin >> year;

	cout << isYoon(year);

	return 0;
}
