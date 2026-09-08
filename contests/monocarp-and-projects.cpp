#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll d = y - x;
        ll total = 0;

        if (d > 0) {
            ll hi = x + k - 1;             
            ll lim = min(hi, d);          
            for (ll a = x; a <= lim; a++) 
                total += d % a;
            if (hi > d) {
                ll lo = max(x, d + 1);
                total += (hi - lo + 1) * d;
            }
        }

        cout << total << '\n';
    }
}
