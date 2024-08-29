#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<tuple<int, int, string>> v;

	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;

		v.push_back(make_tuple(age, i, name));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << get<0>(v[i]) << " " << get<2>(v[i]) << '\n';
	}

	return 0;
}