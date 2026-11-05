#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // pair bag k with bag n^2 + 1 - k -> every pair sums to n^2 + 1
    // there are n^2 / 2 pairs, so each brother gets n / 2 pairs
    // gauss summation or smthg
    int k = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << k << ' ' << n*n + 1 - k << ' ';
            k++;
        }
        cout << '\n';
    }
}
