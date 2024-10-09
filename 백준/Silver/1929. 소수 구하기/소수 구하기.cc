#include <iostream>
#define MAX 1000000
using namespace std;

int arr[MAX + 1];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i*j <= n; j++)
		{
			arr[i*j] = 1;
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (i == 1) continue;

		if (!arr[i]) cout << i << '\n';
	}

	return 0;
}