#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        ll first, last;
        cin >> first;
        last = first;
        int drops = 0;

        cout << '1';

        for (int i = 1; i < q; i++) {
            ll x;
            cin >> x;

            int newDrops = drops + (last > x ? 1 : 0);

            if (newDrops + (x > first ? 1 : 0) <= 1) {
                cout << '1';
                last = x;
                drops = newDrops;
            } else {
                cout << '0';
            }
        }
        cout << '\n';
    }
}
