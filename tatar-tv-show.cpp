#include <iostream>
#include <string>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string possible = "YES";
        for (int r = 0; r < k; r++) {
            int ones = 0;
            for (int i = r; i < n; i += k) {
                if (s[i] == '1') ones++;
            }
            if (ones % 2 != 0) {
                possible = "NO";
                break;
            }
        }

        cout << possible << "\n";
    }
}
