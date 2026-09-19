
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
        string s;
        cin >> s;
    
        unordered_map<string, int> seen;
        bool possible = false;

        for (int i = 0; i < n-1; i++) {
            string sub = s.substr(i, 2);
            if (seen.count(sub)) {
                if (seen[sub] < i-1) {
                    possible = true;
                    break;
                }
            }
            else {
                seen[sub] = i;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
        
    }
}

// find if there any substrings with at least a length of 2 that repeat in the string
