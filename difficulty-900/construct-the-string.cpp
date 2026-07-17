#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        // n = length of required string
        // a = length of substring
        // b = required number of distinct leters
        int n, a, b;
        cin >> n >> a >> b;
        
        // Create array of required number of dinstinct letters 
        char arr[b];
        for (int i = 0; i < b; i++) {
            char character = 97 + i;
            arr[i] = character;
        }
        
        // Create string of length n by iterating through array
        string s;
        s.resize(n);
        int i = 0;
        int j = n;
        int count = 0;
        while (j--) {
            if (i == b) i = 0;
            s[count] = arr[i];
            i++;
            count++;
        }
        
        cout << s << '\n';
        
        // goofy proof: 7 5 3
        // string = abcabca
        // substring of 5 = abcab
        // substring of 5 = bcabc
        // 5 2 2
        // string = ababa
        // substring of 2 = ab
        // subtring of 2 = ba and so on
    }

}
