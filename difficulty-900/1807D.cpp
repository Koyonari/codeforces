#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // First line
    int t;
    cin >> t;

    while (t--) {
        // Second line
        int n, q;
        cin >> n >> q;

        // Prefix sum
        long long p[n + 1];
        p[0] = 0; // Add so r and l can be used as is and prevent out of bounds errorin p[l-1]
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            p[i] += p[i - 1];
        }
        long long total = p[n];

        // Third line
        for (int i = 0; i < q; i++) {
            long long l, r, k;
            cin >> l >> r >> k;

            long long len = r - l + 1;
            long long removed = p[r] - p[l - 1];
            long long newSum = total - removed + k * len;

            cout << (newSum % 2 != 0 ? "YES" : "NO") << '\n';
        }
    }
}
