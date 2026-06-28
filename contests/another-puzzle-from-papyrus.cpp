#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;
        int total = 0;
        bool possible = true;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) cin >> b[i];
        
        for (int i = 0 ; i < n; i++) {
            if (a[i] - b[i] < 0) {
                sort(a, a + n);
                sort(b, b+n);
                total+=c;
                break;
            }
        }

        for (int i = 0 ; i < n; i++ ) {
            if (a[i] - b[i] >= 0) total+=(a[i] - b[i]);
            else possible = false;
        }

        if (possible) cout << total << '\n';
        else cout << -1 << '\n';
    }
}
