#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll a1, rest;
        cin >> a1;
        for (int i = 1; i < n; i++) cin >> rest;

        ll b1;
        cin >> b1;
        for (int i = 1; i < m; i++) cin >> rest;

        ll s_a = a1 + n - 1;
        ll s_b = b1 + m - 1;

        cout << (s_b <= s_a ? "1\n" : "2\n");
    }
}
