#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        // no AI
        long long t1 = (n + (x + y) - 1) / (x + y);

        // with AI
        long long t2;
        long long during_setup = z * x;
        if (during_setup >= n) {
            t2 = (n + x - 1) / x;
        } else {
            long long remaining = n - during_setup;
            t2 = z + (remaining + (x + 10 * y) - 1) / (x + 10 * y);
        }

        cout << min(t1, t2) << "\n";
    }
}
