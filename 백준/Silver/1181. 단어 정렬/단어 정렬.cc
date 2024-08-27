#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}


int main() {
	int n;
	string str[20000];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	sort(str, str + n, cmp);

	for (int i = 0; i < n; i++) {
		if (str[i] == str[i - 1]) continue;
		cout << str[i] << '\n';
	}

	return 0;
}