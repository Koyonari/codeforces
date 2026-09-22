#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Find which line has the center and find when it starts
        int numof = 0;
        int ycenter = 0;
        int start = 0;
        int x_col = 0;
        bool startofcircle = false;

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;

            // Find the topmost of circle
            size_t found = row.find('#');
            // Run this once
            if (found != string::npos && startofcircle == false) {
                start = i;
                x_col = found;
                startofcircle = true;
            }
            
            // Find the center of circle
            int hash_count = count(row.begin(), row.end(), '#');
            if (hash_count > numof) {
                numof = hash_count;
                ycenter = i;
            }
        }
        
        int radius = ycenter - start;
        int xcenter = start + radius;
        cout << xcenter+1 << " " << x_col+1 << '\n';
    }
}
