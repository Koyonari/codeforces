#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long x, n, delta, ans;
        cin >> x >> n;
        long long change = n % 4;
        if (change == 0) delta = 0;
        else if (change == 1) delta = -n;
        else if (change == 2) delta = 1;
        else if (change == 3) delta = n + 1;

        if (abs(x) % 2 == 0) ans = x + delta;
        else ans = x - delta;
        cout << ans << '\n';
    }
}

// Proof
// Time limit -> 10^8, can't iterate since n <=10^14
// Find formula
// move n times, start at x
// if current n has even, jumps left, else jumps right
// 0, 1 -> -1
// 0, 2 -> 1
// 0, 3 -> 4
// 0, 4 -> 0
// 0, 5 -> -5
// 0, 6 -> 1
// 1, 1 -> 2
// 1, 2 -> 0
// 1, 3 -> -3
// 1, 4 -> 1
// 1, 5 -> 6
// Conclusion
// % 4, odd is negative, even is positive
