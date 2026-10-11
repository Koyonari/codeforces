#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll total = 0;
        vector<ll> a(n), b(k);
       
        for (int i = 0; i < n; i++) {
            ll p;
            cin >> p;
            a[i] = p;
            total += p;
        }

        for (int i = 0; i < k; i++) {
            ll v;
            cin >> v;
            b[i] = v;
        }

        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end());

        int pos = 0;
        for (int i = 0; i < k; i++) {
            if (pos + b[i] > n) // edge case if ts goes past the size of a
                break;
            total -= a[pos + b[i] - 1];
            pos += b[i];
        }
        cout << total << '\n';
    }
}
