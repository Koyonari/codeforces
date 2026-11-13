#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // parity -> sum always stays constant
    // divide every character in list + floor then get its new total
    // +/-1 for each ODD element until total = 0
    int n;
    cin >> n;

    double arr[n];
    double orig[n];
    double total = 0;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        orig[i] = a;
        arr[i] = floor(a / 2);
        total += floor(a / 2);
    }

    for (int i = 0; i < n; i++) {
        bool odd = fmod(orig[i], 2) != 0;
        if (total < 0 && odd) {
            arr[i]++;
            total++;
            cout << arr[i] << '\n';
        } else if (total > 0 && odd) {
            arr[i]--;
            total--;
            cout << arr[i] << '\n';
        } else {
            cout << arr[i] << '\n';
        }
    }
}
