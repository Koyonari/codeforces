
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int vec[7];
    for (int i = 0; i < 7; i++) cin >> vec[i];

    int idx = 0;
    while (true) {
        n -= vec[idx];
        if (n <= 0)
            break;
        idx = (idx + 1) % 7;
    }

    cout << idx + 1 << '\n';
}
