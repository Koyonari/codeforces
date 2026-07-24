#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        bool red = false;
        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;
            if (s == "RRRRRRRR") red = true;
        }

        if (red == true) cout << "R\n";
        else cout << "B\n";
    }
}

// Since red are drawn horizontally and blue is vertically, at least 1 stripe is painted as well
// If there are no fully red strings, blue is the painted one
