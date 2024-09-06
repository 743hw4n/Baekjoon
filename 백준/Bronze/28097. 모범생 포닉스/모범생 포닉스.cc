#include <iostream>
using namespace std;

int main() {
	int n, planTime;
	cin >> n;
	
	int sum = 0;
	
	while (n--) {
		cin >> planTime;
		sum += planTime;
		if (n) sum += 8;
	}

	int day = 0, hour = 0;
	day = sum / 24;
	hour = sum % 24;

	cout << day << " " << hour;

	return 0;
}