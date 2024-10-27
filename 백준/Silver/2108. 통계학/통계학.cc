#define OFFSET 4000

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<int> nums, modes;
int cnt[8001];

int main() {
  ios::sync_with_stdio(false), cin.tie(0);

  int n;
  cin >> n;

  nums = vector<int>(n);
  modes.reserve(n);

  double sum = 0;
  for (int &num : nums) {
    cin >> num;
    sum += num;
    ++cnt[num + OFFSET];
  }

  sort(nums.begin(), nums.end());

  int modeCnt = 0;
  for (int i = 0; i < 8001; i++) {
    if (cnt[i] > modeCnt) {
      modes.clear();
      modeCnt = cnt[i];
      modes.push_back(i - OFFSET);
    } else if (cnt[i] == modeCnt) {
      modes.push_back(i - OFFSET);
    }
  }

  cout << round(sum / n) + 0.0 << '\n';
  cout << nums[n / 2] << '\n';
  if (modes.size() == 1) {
    cout << modes.front() << '\n';
  } else {
    cout << modes[1] << '\n';
  }
  cout << nums.back() - nums.front();
  return 0;
}