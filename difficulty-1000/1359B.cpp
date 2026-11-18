#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        y = min(y, 2 * x);
        long long cost = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                if (s[j] != '.') continue;
                if (j + 1 < m && s[j + 1] == '.') {
                    cost += y;
                    j++;            
                } else {
                    cost += x;
                }
            }
        }
        cout << cost << '\n';
    }
}
