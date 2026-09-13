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
        string s;
        cin >> s;
        int ans = 0;
        string patterns[4] = {"0011", "0110", "1001", "1100"};
        for (const string p : patterns) {
            bool ok = true;
            for (int i = 0; i < n && ok; i++)
                if (s[i] != '?' && s[i] != p[i % 4])
                    ok = false;
            ans += ok;
        }

        cout << ans << '\n';
    }
}
