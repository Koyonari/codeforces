#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long odd_count = (n + 1) / 2;
  if (k <= odd_count) cout << 2 * k - 1;
  else cout << 2 * (k - odd_count);
  /*
  vector<int>arr;
  vector<int>order;
  for (int i = 1; i <= n; i++) {
    arr.push_back(i);
  }
  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++) {
    if (i % 2 == 0) order.push_back(arr[i]);
  }
  for (int i = 0; i < arr.size(); i++) {
    if (i % 2 == 1) order.push_back(arr[i]);
  }

  cout << order[k-1]; */
}
