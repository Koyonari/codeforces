#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> aa(2*n + 1, 0), ba(2*n + 1, 0);

        // Get number of consecutive elements for a and b
        int prev = -1, len = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == prev) len++;
            else len = 1;
            aa[a] = max(aa[a], len);
            prev = a;
        }

        prev = -1, len = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b == prev) len++;
            else len = 1;
            ba[b] = max(ba[b], len);
            prev = b;
        }

        // Add consecutive elements for a and b
        int ans = 0;
        for (int x = 1; x <= 2*n; x++)
            ans = max(ans, aa[x] + ba[x]);

        cout << ans << '\n';
    }
}
