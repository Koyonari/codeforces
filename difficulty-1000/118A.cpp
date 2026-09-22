#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string new_str;

    // easy - let's do this in 1 pass

    for (char c: s) {
        if (c != 'A' && c != 'O' && c != 'Y' && c != 'E' && c != 'U' && c != 'I' &&
            c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            new_str+='.';
            new_str+=tolower(c);
        }
    }

    cout << new_str << '\n';
}
