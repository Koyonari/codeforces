
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
        vector<long long> vec(n);
        priority_queue<long long> bonus;
        ll total = 0;

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++) {
            if (vec[i] != 0) {
                bonus.push(vec[i]); //push
            } else {
                if (!bonus.empty()) {
                    total += bonus.top();
                    bonus.pop(); // pop + top
                }
            }
        }

        cout << total << '\n';
    }
}
