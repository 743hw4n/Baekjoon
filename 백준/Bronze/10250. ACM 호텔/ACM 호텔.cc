#include <iostream>
using namespace std;

int T;
int H, W, N;

int main() {
  cin >> T;
  while (T--) {
    cin >> H >> W >> N;

    int floor = (N - 1) % H + 1;
    int room = (N - 1) / H + 1;
    cout << floor * 100 + room << endl;
  }
  return 0;
}
