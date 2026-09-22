#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        // n = 2020x + 2021y = 2020x + 2020y + 1y
        int numof2020 = n / 2020;
        int remainderof2020 = n % 2020;

        if (numof2020 >= remainderof2020) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
