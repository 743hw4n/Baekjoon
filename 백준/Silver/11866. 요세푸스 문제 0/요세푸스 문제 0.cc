#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> round;
	vector<int> ans;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		round.push_back(i);
	}

	int index = 0;

	while (!round.empty()) {
		index = (index + k - 1) % round.size();
		ans.push_back(round.at(index));
		round.erase(round.begin() + index);
	}

	cout << "<";
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
			cout << ", ";
	}
	cout << ">";


	return 0;
}