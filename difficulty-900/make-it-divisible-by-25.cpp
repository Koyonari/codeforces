#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        
        int ans = n.length(); // Track the absolute minimum deletions
        
        // Form a suffix ending in '0' (00 or 50)
        int initial_index = n.length() - 1;
        int count_zero = 0;
        
        // check if last digit is 0 or 5
        while (initial_index >= 0 && n[initial_index] != '0') {
            initial_index -= 1;
            count_zero++;
        }
        
        // then remove until second last digit is either 0/5 or 2/7 depending on last digit
        int second_index = initial_index - 1;
        if (initial_index >= 0 && n[initial_index] == '0') {
            while (second_index >= 0 && n[second_index] != '0' && n[second_index] != '5') {
                second_index--;
                count_zero++;
            }
            if (second_index >= 0) {
                ans = min(ans, count_zero);
            }
        }

        // Form a suffix ending in '5' (25 or 75)
        initial_index = n.length() - 1;
        int count_five = 0;
        
        // check if last digit is 0 or 5
        while (initial_index >= 0 && n[initial_index] != '5') {
            initial_index -= 1;
            count_five++;
        }
        
        // then remove until second last digit is either 0/5 or 2/7 depending on last digit
        second_index = initial_index - 1;
        if (initial_index >= 0 && n[initial_index] == '5') {
            while (second_index >= 0 && n[second_index] != '2' && n[second_index] != '7') {
                second_index--;
                count_five++;
            }
            if (second_index >= 0) {
                ans = min(ans, count_five);
            }
        }
        
        cout << ans << '\n';
    }
}
