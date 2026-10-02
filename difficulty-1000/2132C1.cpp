
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // ternary number system - base 3, therefore a deal is only used 0, 1 or 2 times
    // precompute cost for x = 1 to 20: n <= 10^9 and 3^19 = 1.16*10^9, therefore n has at most 19 digits base 3 
    vector<long long> cost;
    ll c = 3;
    ll count = 1;
    for (int i = 0; i < 21; i++) {
        cost.push_back(c);
        c = 3 * c + count;
        count *= 3;
    }

    while (t--) {
        ll n;
        cin >> n;
        ll min_cost = 0;
        int size = 0;

        while (n) {
            min_cost += (n % 3) * cost[size];
            n/=3;
            size++;
        }

        cout << min_cost << '\n';
    }
}
