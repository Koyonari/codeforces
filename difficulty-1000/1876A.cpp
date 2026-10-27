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
        ll p;
        cin >> n >> p;

        vector<pair<ll, ll>> res(n);
        for (int i = 0; i < n; i++)
            cin >> res[i].second;
        for (int i = 0; i < n; i++)
            cin >> res[i].first;

        sort(res.begin(), res.end());

        ll total = p;
        ll rem = n - 1;
        for (int i = 0; i < n && rem > 0; i++) {
            if (res[i].first >= p)
                break;
            ll k = min(res[i].second, rem);
            total += k * res[i].first;
            rem -= k;
        }
        total += rem * p;

        cout << total << '\n';
    }
}
