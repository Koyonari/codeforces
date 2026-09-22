#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < m; i++) {
        int f;
        cin >> f;
        arr.push_back(f);
    }
    sort(arr.begin(), arr.end());

    int diff = arr[n-1] - arr[0];
    for (int i = 1; i <= m-n; i++) {
        if (arr[i+n-1] - arr[i] < diff) {
            diff = arr[i+n-1] - arr[i];
        }
    }

    cout << diff;
}
