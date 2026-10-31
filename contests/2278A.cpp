
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        // approach
        // find the first 's' then 'i' then 'x' if nil, continue

        int n, m;
        cin >> n >> m;

        vector<char> p(n), q(m);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < m; i++)
            cin >> q[i];

        bool ok = true;
        for (int i = 0; i < m; i++) {
            auto it = find(p.begin(), p.end(), q[i]);

            if (it != p.end())
                p.erase(it);
            else
                ok = false;
        }

        bool ans = false;
        if (ok) {
            string s(p.begin(), p.end());
            sort(s.begin(), s.end());
            if (s == "isx")
                ans = true;
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
}
