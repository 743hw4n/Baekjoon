#include <iostream>
#include <string>
using namespace std;


int main() {
	string x;
	cin >> x;

	int cnt = 0;

	while (x.size() != 1) {
		int sum = 0;
		for (int i = 0; i < x.size(); i++) {
			sum += int(x[i]) - '0';
		}
		x = to_string(sum);
		cnt++;
	}

	cout << cnt << '\n';

	if (x== "3" || x == "6" || x == "9")
		cout << "YES";
	else
		cout << "NO";

	return 0;
}