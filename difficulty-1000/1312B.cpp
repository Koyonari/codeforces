
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // j - a[j] != i - a[i]
    // equivaltn to a[i] - a[j] != i - j
    //
    // after sorting in descending order, the left side will always return +tive and right side will always return -tive

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
}
