#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;

        int r = n % 12;

        if (r <= 9) {
            // single digit palindromes cover 0-9
            cout << r << " " << n - r << "\n";
        } else if (r == 10) {
            // smallest palindrome with 10 is 22
            if (n < 22) cout << -1 << "\n";
            else cout << 22 << " " << n - 22 << "\n";
        } else {
            // r == 11, smallest palindrome with 11 is 11
            cout << 11 << " " << n - 11 << "\n";
        }
    }
    return 0;
}
