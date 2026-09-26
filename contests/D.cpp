#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (__builtin_popcount(a[i]) % 2 == 0) {
                cnt++;
            }
        }
        cout << cnt;

        for (int j = 0; j < q; j++) {
            int p, x;
            cin >> p >> x;

            if (__builtin_popcount(a[p]) % 2 == 0) {
                cnt--;
            }

            a[p] = x;

            if (__builtin_popcount(a[p]) % 2 == 0) {
                cnt++;
            }

            cout << " " << cnt;
        }
        cout << "\n";
    }
}
