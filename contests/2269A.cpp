#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = 2 * (k - 1) + (long long)round(pow(2, n - k + 1));
        cout << ans << "\n";
    }
    return 0;
}
