#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        long long min = 0, max = 0, sum = 0;
        cin >> n >> x;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
            max += (a + x - 1) / x;
        }

        min = (sum + x - 1) / x;

        cout << min << " " << max << '\n';
    }
}
