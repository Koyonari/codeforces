
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
        int max = 0;
        // keep track of every number and the number of occurences
        
        vector<int> freq(2*n + 1, 0);
        for (int i = 0; i < 2*n; i++) {
            int x;
            cin >> x;
            freq[x]++;

            if (freq[x] > max) max = freq[x];
        }

        cout << max << '\n';
    }
}
