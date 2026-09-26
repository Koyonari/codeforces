
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> vec;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            vec.push_back(a);
        }

        ll score = 0;
        for (int i = 0; i < n - k + 1; i++) {
            int m = vec.size();
            int L = k - 1, R = m - k;
            if (vec[L] >= vec[R]) {
                score += vec[L];
                vec.erase(vec.begin() + L);
            } else {
                score += vec[R];
                vec.erase(vec.begin() + R);
            }
        }

        cout << score << '\n';
    }
}
