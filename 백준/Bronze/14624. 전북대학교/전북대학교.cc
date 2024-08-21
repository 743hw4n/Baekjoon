#include <iostream>
using namespace std;

void printStars(int n) {
	int center = n / 2;

	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
	   
	
	for (int i = 0; i <= center; i++) {
		for (int j = 0; j < n; j++) {
			if (j == center - i || j == center + i) cout << "*";
			else if (j > center + i) break;
			else cout << " ";
		}
		cout << endl;
	}
}

int main() {

	int n;
	cin >> n;
	
	if (n % 2 == 0) {
		cout << "I LOVE CBNU" << endl;
	}

	else {
		printStars(n);
	}

	return 0;
}

