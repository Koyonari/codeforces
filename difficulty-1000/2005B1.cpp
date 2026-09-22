
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        ll n, m ,q ;
        cin >> n >> m >> q;

        ll t1, t2;
        cin >> t1 >> t2;

        if (t1 > t2) swap(t1, t2);

        ll david; 
        cin >> david;

        if (david < t1) cout << t1 - 1 << '\n';
        else if (david > t2) cout << n - t2 << '\n';
        else cout << (t2 - t1) /2 << '\n';
    }
}
