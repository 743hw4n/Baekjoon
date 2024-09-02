#include <iostream>
#include <stack>
using namespace std;

string checkVPS(string ps) {
	stack<char> s;
	for (int i = 0; i < ps.size(); i++) {
		if (ps[i] == '(')
			s.push('(');
		else {
			if (s.empty()) return "NO";
			else s.pop();
		}
	}

	if (s.empty()) return "YES";
	else return "NO";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		string ps;
		cin >> ps;

		cout << checkVPS(ps) << '\n';
	}
	

	

	return 0;
}


