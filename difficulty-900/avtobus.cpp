
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    while (k--) {
        long long n;
        cin >> n;
        if (n % 2 != 0 || n < 4) cout << -1 << '\n';
        else {
            long long max = n / 4;
            long long min = n / 6;
            if (n % 6 != 0) {
                min++;
            }
            cout << min << ' ' << max << '\n';
        }
    }
    return 0;
}
