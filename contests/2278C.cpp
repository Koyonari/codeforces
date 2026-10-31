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
        ll sum = 0;
        bool any = false, interior = false;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
            if (a >= 2) {
                any = true;
                if (i > 0 && i < n - 1) interior = true;
            }
        }

        if (!any) cout << -1 << '\n';   // cant split
        else if (interior) cout << sum - 1 << '\n'; // last split loses 1
        else cout << sum - (n - 1) << '\n'; // each loses 1
    }
}
