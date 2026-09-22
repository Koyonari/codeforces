#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    int a[12];

    for (int i = 0; i < 12; i++) cin >> a[i];

    sort(a, a + 12);

    int count = 0;

    for (int i = 11; i >= 0; i--) {
        if (k > 0) {
            k -= a[i];
            count++;
        }
        else {
            break;
        }
    }

    if (k <= 0) cout << count;
    else cout << -1;
}
