#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        if(i == 1){
            cout << n << ' ' << 1 << ' ';
            cout << n << ' ' << m << '\n';
        } else if(i == n){
            cout << 1 << ' ' << 1 << ' ';
            cout << 1 << ' ' << m << '\n';
        }else{
            cout << 1 << ' ' << 1 << ' ';
            cout << n << ' ' << m << '\n';
        }
    }
}
