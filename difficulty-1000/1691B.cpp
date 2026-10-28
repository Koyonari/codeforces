
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

        vector<ll> vec;
        for (int i = 0; i < n; i++) {
            ll s;
            cin >> s;
            vec.push_back(s);
        }

        vector<int> p(n);
        for (int k = 0; k < n; k++)
            p[k] = k + 1;
        bool ok = true;

        // 2 pointers
        int i = 0;
        while (i < n) {
            int j = i;
            while (j + 1 < n && vec[j + 1] == vec[i])
                j++;

            // same size
            if (i == j) {
                ok = false; //unique
                break;
            }

            // adjacent swaps 
            for (int k = i; k < j; k++)
                swap(p[k], p[k + 1]);
            i = j + 1;
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int k = 0; k < n; k++)
                cout << p[k] << " ";
            cout << "\n";
        }
    }
}
