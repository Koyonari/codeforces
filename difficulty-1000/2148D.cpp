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

        vector<ll> even;
        vector<ll> odd;
        ll max = 0;

        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            if (a % 2 == 0)
                even.push_back(a);
            else
                odd.push_back(a);
        }

        sort(even.begin(), even.end(), greater<ll>());
        sort(odd.begin(), odd.end(), greater<ll>());

        if (odd.size() > 0) {
            ll cutCount = (odd.size() + 1) / 2;
            for (ll i = 0; i < cutCount; i++)
                max += odd[i];
            for (ll i = 0; i < (ll)even.size(); i++)
                max += even[i];
        }

        cout << max << '\n';
    }
}
