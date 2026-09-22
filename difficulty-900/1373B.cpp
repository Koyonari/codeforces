#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count0 = count(s.begin(), s.end(), '0');
        int count1 = count(s.begin(), s.end(), '1');
        int moves = min(count0, count1);

        if (moves % 2 == 0) cout << "NET" << '\n';
        else cout << "DA" << '\n';
    }
}
