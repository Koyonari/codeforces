#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxIdx = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > a[maxIdx]) maxIdx = i;

    int minIdx = n - 1;
    for (int i = n - 2; i >= 0; i--)
        if (a[i] < a[minIdx]) minIdx = i;

    int swaps = maxIdx + (n - 1 - minIdx);
    if (minIdx < maxIdx) swaps--;

    cout << swaps << "\n";
}
