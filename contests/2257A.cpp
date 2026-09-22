#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<char> vec;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            char c = static_cast<char>(std::toupper(static_cast<unsigned char>(s[0])));
                if (find(vec.begin(), vec.end(), c) == vec.end()) {
                vec.push_back(c);
            }
        }

        bool ok = true;
        for (int i = 0; i < m; i++) {
            string w;
            cin >> w;
            for (char c: w) {
                if (find(vec.begin(), vec.end(), c) == vec.end()) ok = false;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
