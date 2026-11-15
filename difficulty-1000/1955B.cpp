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
        ll c, d;
        cin >> n >> c >> d;

        vector<ll> a(n*n), b;
        b.reserve(n*n);
        for (ll &x : a) cin >> x;
        sort(a.begin(), a.end());
        ll base = a[0];

        // base + i*c + j*d
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                b.push_back(base + i * c + j * d);

        sort(b.begin(), b.end());

        cout << (a == b ? "YES" : "NO") << '\n';
    }
}
