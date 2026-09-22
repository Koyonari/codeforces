
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int d = 0;
        int n;
        string s;
        cin >> n >> s;
        string repeat = s + s;

        int row = 0;
        for (int i = 0; i < repeat.size(); i++) {
            if (repeat[i] == '0') {
                row++;
            }
            else {
                row = 0;
            }

            if (row > d) d = row;
        }

        cout << d << '\n';
    }
}
