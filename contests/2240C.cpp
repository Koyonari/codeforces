#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int X = 0;
        for (int i = 0; i < n; i++) { cin >> a[i]; X ^= a[i]; }

        if (n == 1) { cout << 0 << '\n'; continue; }
        if (X == 0) { cout << 1 << '\n'; continue; }

        int msb = 0;
        while ((1 << (msb + 1)) <= X) msb++;

        int cnt = 0;
        for (int x : a) if ((x >> msb) & 1) cnt++;
        cout << cnt % 998244353 << '\n';
    }
}
