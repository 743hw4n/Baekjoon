#include <deque>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  deque<int> dq;
  for (int i = 1; i <= n; i++) {
    dq.push_back(i);
  }

  int result = 0;
  while (m--) {
    int num;
    cin >> num;

    int idx = 0;
    for (int i = 0; i < dq.size(); i++) {
      if (dq[i] == num) {
        idx = i;
        break;
      }
    }

    // 찾는 수가 더 오른쪽 있는 경우
    if (idx > dq.size() / 2) {
      while (dq.front() != num) {
        dq.push_front(dq.back());
        dq.pop_back();
        result++;
      }
    }
    // 찾는 수가 왼쪽 있을 경우
    else {
      while (dq.front() != num) {
        dq.push_back(dq.front());
        dq.pop_front();
        result++;
      }
    }
    dq.pop_front();
  }
  cout << result;
  return 0;
}
