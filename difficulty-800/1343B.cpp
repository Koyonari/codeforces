#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int new_n = n/2;
        // 2, 6, 10... = no
        if (new_n % 2 == 1) cout << "NO" << '\n';
        // 4, 8, 12... = yes
        else {
            cout << "YES" << '\n';
            int total_even = 0;
            vector<int> even = {2};
            int total_odd = 0;
            vector<int> odd = {1};
            for (int i = 1; i <= new_n; i++) {
                total_even += i * 2;
                total_odd += i * 2 - 1;
            }
            
            for (int i = 0; i < new_n-1; i++) {
                even.push_back(even.back() + 2);
                odd.push_back(odd.back() + 2);
            }

            while (total_even != total_odd) {
                if (total_even > total_odd) {
                    total_odd += 2;
                    odd.back() = odd.back() + 2;
                }
                else {
                    total_even += 2;
                    even.back() = even.back() + 2;
                }
            }

            for (int i = 0; i < new_n; i ++) cout << even[i] << " ";
            for (int i = 0; i < new_n; i++) cout << odd[i] << " ";
            cout << '\n';
        }

    }
}

/*
n = 2
no

n = 4
2 4 = 1 5

n = 6
4 6 8 = 18
3 5 7 = 15
no

n = 8
2 4 6 12 = 24
3 5 7 9 = 24
*/
