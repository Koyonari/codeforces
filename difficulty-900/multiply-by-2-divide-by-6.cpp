#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int count2 = 0, count3 = 0;
        while (n % 2 == 0) {
            n /= 2;
            count2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            count3++;
        }

        if (n != 1) { cout << -1 << '\n'; continue; }

        if (count3 >= count2) cout << count3 - count2 + count3<< '\n';
        else cout << -1 << '\n';
    }
}

