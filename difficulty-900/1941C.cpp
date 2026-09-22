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

        string_view sv(s);
        int count = 0;

        for (int i = 0; i < n - 2; ) {
            if (i + 4 < n && sv.substr(i, 5) == "mapie") {
                count++;
                i += 5;
            } 
            else if (sv.substr(i, 3) == "map" || sv.substr(i, 3) == "pie") {
                count++;
                i += 3;
            } 
            else {
                i++;
            }
        }
        cout << count << '\n';
    }
}

