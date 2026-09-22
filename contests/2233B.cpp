#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Create vector with 1 to n
        vector<int> arr;
        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
        
        for (int i = 0; i < 4; i++) {
            // Left cyclic shift
            rotate(arr.begin(), arr.begin() + i % arr.size(), arr.end());
 
            for (int e: arr) {
                cout << e << " ";
            }
        }
        cout << "\n";
    }
}
