#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> nums;

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    nums.push_back(num);
  }

  int v;
  int cnt = 0;
  cin >> v;

  for (auto& num : nums) {
    if (num == v)
      cnt++;
  }

  cout << cnt;
  return 0;
}