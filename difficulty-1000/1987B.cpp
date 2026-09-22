
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

        ll k = 0;

        ll prev;
        cin >> prev;

        ll max_diff = 0;

        for (int i = 1; i < n; i++) {
            ll curr;
            cin >> curr;

            if (curr < prev) {
                ll diff = prev - curr;
                k+=diff;

                if (diff > max_diff) max_diff = diff;
            }
            else {
                prev = curr;
            }
        }
        
        cout << max_diff + k << '\n';
    }
}
