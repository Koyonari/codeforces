#include <iostream>
#include <string>
using namespace std;

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
        int maxcount = 0;
        int count = 0;

        for (int i = 0; i < s.length()-1 ; i++) {
            if (s[i] == s[i+1]) {
                count++;
                if (count > maxcount) maxcount = count;
            }
            else {
                count = 0;
            }
        }

        cout << maxcount + 2 << '\n';
    }
}
