#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;
    while (k--) {
        long long t;
        cin >> t;
        long long a[t];
        for (int i = 0; i < t; i++) {
            cin >> a[i];
            if (a[i] == 1) a[i]++;
        }
        
        for (int i = 0; i < t - 1; i++) {
            if (a[i + 1] % a[i] == 0) {
                a[i + 1]++;
            }
        }
        
        for (int i = 0; i < t; i++) cout << a[i] << ' ';
        cout << '\n';
    }
}
