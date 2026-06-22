#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        
        int maxLen = 1, curr = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] <= k) {
                curr++;
            }
            else {
                curr = 1;
            }

            maxLen = max(maxLen, curr);
        }

        cout << n - maxLen << '\n';
    }
}
