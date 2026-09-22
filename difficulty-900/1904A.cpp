#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        // Knight position
        long long a, b;
        cin >> a >> b;
        // King position
        long long xk, yk;
        cin >> xk >> yk;
        // Queen position
        long long xq, yq;
        cin >> xq >> yq;
        
        vector<long long> dx = {a, a, -a, -a, b, b, -b, -b};
        vector<long long> dy = {b, -b, b, -b, a, -a, a, -a};
        
        set<pair<long long, long long>> king_attackers;
        set<pair<long long, long long>> queen_attackers;
        
        for (int i = 0; i < 8; i++) {
            king_attackers.insert({xk + dx[i], yk + dy[i]});
            queen_attackers.insert({xq + dx[i], yq + dy[i]});
        }
        
        int position = 0;
        for (auto pos: king_attackers) {
            if (queen_attackers.count(pos)) position++;
        }
        cout << position << '\n';
    }

}
