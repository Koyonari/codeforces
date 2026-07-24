#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        bool found = false;

        for (int i = 0; i < n-2; i++) {
            if (arr[i] < arr[i+1] && arr[i+1] > arr[i+2]) {
                cout << "YES\n";
                cout << i+1 << ' ' << i+2 << ' ' << i+3 << '\n';
                found = true;
                break;
            }
        }

        if (!found) cout << "NO\n";
    }
}
