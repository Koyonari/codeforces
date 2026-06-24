#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if ((b - a) == (c - b)) cout << "YES" << '\n';
        // Check for A
        else if ((2 * b - c) % a == 0 && 2 * b - c > 0) cout << "YES" << '\n';
        // Check for B
        else if ((a + c) % (2 * b) == 0) cout << "YES" << '\n';
        // Check for C
        else if ((2 * b - a) % c == 0 && 2 * b - a > 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
