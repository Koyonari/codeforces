#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b) swap(a, b);

        bool cbool = c > a && c < b;
        bool dbool = d > a && d < b;

        // if 1 is inside, intersect 
        if (cbool != dbool) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
    }
}
