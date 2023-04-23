#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int card[n][m];
  vector<int> v[n];
  int high = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> card[i][j];
      v[i].push_back(card[i][j]);
    }
    sort(v[i].begin(), v[i].end());
    if (v[i][0] > high) {
      high = v[i][0];
    }
  }

  cout << high << endl;
  return 0;
}