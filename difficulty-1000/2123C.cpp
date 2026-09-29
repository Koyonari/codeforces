
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

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // Element is 1 if its smaller than everything to the left or larger than everything to the right
        string ans(n, '0');

        int prefix_min = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr[i] < prefix_min)
                ans[i] = '1';
            prefix_min = min(prefix_min, arr[i]);
        }

        int suffix_max = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > suffix_max)
                ans[i] = '1';
            suffix_max = max(suffix_max, arr[i]);
        }

        cout << ans << '\n';
    }
}
