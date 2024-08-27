#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	double* score = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	double Max = 0;
	for (int i = 0; i < n; i++) {
		Max = max(Max, score[i]);
	}
	
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += score[i] / Max * 100;
	}

	cout << sum / n;

	return 0;
}