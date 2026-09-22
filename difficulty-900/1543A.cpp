#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // find diff
        long long diff;
        if (a >= b) diff = a - b;
        else diff = b - a;
        
        if (a > b) {
            cout << diff << ' ' << min(diff - (a % diff), b % diff) << '\n';
        }
        else if (a < b) {
            cout << diff << ' ' << min(diff - (b % diff), a % diff) << '\n';
        }
        else {
            cout << 0 << ' ' << 0 << '\n';
        }
    }
}
