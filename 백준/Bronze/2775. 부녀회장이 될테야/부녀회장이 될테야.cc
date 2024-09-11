#include <iostream>
using namespace std;

int apart[15][15];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	//0층 1호는 1명 0층 2호는 2명 ...
	//k층 b호에는 아래층 1호부터 b호까지 다 데리고 살아야 함. 
	int t;
	cin >> t;
	
	while (t--) {
		int k, n;
		cin >> k >> n;

		for (int i = 0; i <= 14; i++) {
			for (int j = 1; j <= 14; j++)
			{
				if (i == 0) apart[0][j] = j;
				else if (j == 1) apart[i][1] = 1;
				else
					apart[i][j] = apart[i][j - 1] + apart[i - 1][j];
			}
		}

		cout << apart[k][n] << '\n';
	}

	return 0;
}