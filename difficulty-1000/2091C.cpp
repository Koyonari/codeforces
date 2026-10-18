
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
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = n; i > 0; i--) cout << i << ' ';

        cout << '\n';
    }
}
