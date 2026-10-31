
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        // use median
        ll med = a[n / 2];
        ll cost = 0;
        for (ll x : a) cost += abs(x - med);

        // 1 per operation
        ll ops = a[n - 1] - a[0];

        cout << cost << ' ' << ops << '\n';
    }
}
