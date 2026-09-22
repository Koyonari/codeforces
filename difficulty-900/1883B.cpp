#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // At most only can have 1 odd occurence
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {};
        for (char c : s) freq[c - 'a']++;

        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) odd++;
        }

        cout << (odd <= k + 1 ? "YES" : "NO") << '\n';
    }
}
