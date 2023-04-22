#include <algorithm>
#include <iostream>
#include <vector>
//해설보고 sort,vector 적용해서 다시 푼거
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int num[n];
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> num[i];
    v.push_back(num[i]);
  }
  sort(v.begin(), v.end());
  int first = v[n - 1];
  int second = v[n - 2];
  cout << first << second << endl;
  int sum = 0;
  while (true) {
    for (int j = 0; j < k; j++) {
      if (m == 0) {
        break;
      }
      sum += first;
      m--;
    }
    if (m == 0) {
      break;
    }
    sum += second;
    m--;
  }
  cout << sum << endl;
  return 0;
}