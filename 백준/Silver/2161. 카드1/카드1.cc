#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	deque<int> s;

	for (int i = 1; i <= n; i++)
	{
		s.push_back(i);
	}


	while (s.size() != 1) {
		cout << s.front() << " ";
		s.pop_front();
		s.push_back(s.front());
		s.pop_front();
	}

	cout << s.front();

	return 0;
}