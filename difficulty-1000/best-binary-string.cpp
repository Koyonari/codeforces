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

        int last = '0';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '?') s[i] = last;
            else last = s[i];
        }

        cout << s << '\n';
    }
}
