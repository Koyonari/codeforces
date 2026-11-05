
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        // possible substrings: 001, 100, 110, 011
        // swapping 001 to 100 and vice versa -> parity of multiples of 2 for 1
        // same with 110 -> 011 with 0

        // compare number of 1s between even and odd for both strings
        int a_even = 0, a_odd = 0, b_even = 0, b_odd = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a_even += a[i];
                b_even += b[i];
            } else {
                a_odd += a[i];
                b_odd += b[i];
            }
        }

        if (a_even == b_even && a_odd == b_odd)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
