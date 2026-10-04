
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    int x1 = s[0] - 'a' + 1;
    int x2 = t[0] - 'a' + 1;
    int y1 = s[1] - '0';
    int y2 = t[1] - '0';

    int x = x2 - x1;
    int y = y2 - y1;

    cout << max(abs(x), abs(y)) << '\n';

    while (x1 != x2 || y1 != y2) {
        string move = "";
        if (x1 < x2) {
            move += "R";
            x1++;
        }
        else if (x1 > x2) {
            move += "L";
            x1--;
        }
        if (y1 < y2) {
            move += "U";
            y1++;
        }
        else if (y1 > y2) {
            move += "D";
            y1--;
        }

        cout << move << '\n';
    }
}
