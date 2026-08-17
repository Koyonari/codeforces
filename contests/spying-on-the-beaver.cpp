#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> par(n + 1);
        for (int i = 2; i <= n; i++) cin >> par[i];
        int m; cin >> m;
        vector<char> dam(n + 1, 0);
        for (int i = 0, a; i < m; i++) { cin >> a; dam[a] = 1; }

        vector<vector<int>> ch(n + 1);
        vector<int> cam;
        for (int v = n; v >= 1; v--) {
            int k = ch[v].size() + dam[v];
            bool rel = k > 0;
            if (k >= 2) {
                int start = dam[v] ? 0 : 1;
                for (int i = start; i < (int)ch[v].size(); i++) cam.push_back(ch[v][i]);
            }
            if (rel && v != 1) ch[par[v]].push_back(v);
        }

        cout << cam.size();
        for (int u : cam) cout << " " << u;
        cout << "\n";
    }
}
