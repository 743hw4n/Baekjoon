#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		int m;
		cin >> m;
		unordered_map<long long, int> land;

		long long landNum; // 땅의 이름 
		long long maxNum = -1; // 개수 

		for (int i = 0; i < m; i++)
		{
			long long num; // 땅 이름 입력 
			cin >> num;

			land[num]++;
			if (land[num] > maxNum) {
				maxNum = land[num];
				landNum = num;
			}
		}
		if (maxNum > m / 2)
			cout << landNum << '\n';
		else
			cout << "SYJKGW" << '\n';
	}


	return 0;
}