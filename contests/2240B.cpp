#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    long long MOD = 998244353;
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long f;
        if (n >= r && m >= c)
            f = n * m - (n - r + 1) * (m - c + 1);
        else
            f = n * m;

        long long ans = 1;
        long long base = 2 % MOD;
        while (f > 0) {
            if (f & 1) ans = ans * base % MOD;
            base = base * base % MOD;
            f >>= 1;
        }

        cout << ans << "\n";
    }
}
