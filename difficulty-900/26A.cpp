#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++) {
        int x = i, distinct = 0;
        for (int p = 2; p * p <= x; p++) {
            if (x % p == 0) {
                distinct++;
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) distinct++;
        if (distinct == 2) count++;
    }

    cout << count << endl;
}
