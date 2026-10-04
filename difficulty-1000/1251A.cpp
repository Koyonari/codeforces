
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool ok[26] = {};

        for (int i = 0; i < s.size(); i++) {
            int fast = i;
            while (s[i] == s[fast] && fast < s.size()) fast++;

            if ((fast-i) % 2 != 0) ok[s[i] - 'a'] = true;
            i = fast - 1;
        }

        for (int i = 0; i < 26; i++) {
            if (ok[i] == true) cout << char('a' + i);
        }

        cout << '\n';

    }
}
