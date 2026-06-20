#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int j = 0; j < n ; j++) {
      int i;
      cin >> i;
      arr[j] = i;
  }

  sort(arr, arr + n);

  for (int j = 0; j < n; j++) {
    cout << arr[j] << ' ';
  }
}
