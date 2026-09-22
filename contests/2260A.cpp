#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) count++;
        }

        if (count < 2)
            cout << -1 << "\n";
        else
            cout << (a[0] == 1) + (a[n - 1] == 1) << "\n";
    }
    return 0;
}
