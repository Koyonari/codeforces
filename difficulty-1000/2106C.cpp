#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll x = -1;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                ll cur = a[i] + b[i];
                if (x == -1)
                    x = cur;
                else if (cur != x)
                    ok = false;
            }
        }

        if (x == -1) {
            // case 1: every b is -1, so count the x values in [max(a), min(a) +
            // k]
            ll mn = *min_element(a.begin(), a.end());
            ll mx = *max_element(a.begin(), a.end());
            cout << max(0LL, mn + k - mx + 1) << '\n';
        } else {
            // case 2: x is fixed, so each unknown b must be x - a[i], within
            // [0, k]
            for (int i = 0; i < n && ok; i++) {
                if (b[i] == -1) {
                    ll need = x - a[i];
                    if (need < 0 || need > k)
                        ok = false;
                }
            }
            cout << (ok ? 1 : 0) << '\n';
        }
    }
}
