#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int total = 0;
  int count = 0;
  int vasya_sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[i] = a;
    total += a;
  }

  sort(arr, arr + n);

  while (vasya_sum <= total - vasya_sum) {
    vasya_sum += arr[n - 1 - count];
    count++;
  }

  cout << count;
}
