
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            for (int j = 0; j < 243; j++) {
                int s = 0;
                int x = curr;
                while (x > 0) {
                    int d = x % 10;
                    s += d * d;
                    x /= 10;
                }
                curr = s;
            }
            m[curr]++;
        }

        ll ans = 0;
        for (pair<int, int>p : m) {
            ll c = p.second;
            ans += c * (c - 1) / 2;
        }
        cout << ans << "\n";
    }
}
