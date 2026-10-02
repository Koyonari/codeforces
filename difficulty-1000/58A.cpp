
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string hello = "hello";

    int pass = 0;

    for (int i = 0; i < s.length(); i++) {
        if (pass == 5) break;

        if (s[i] == hello[pass]) {
            pass++;
        }
    }

    cout << (pass == 5 ? "YES\n" : "NO\n");
}
