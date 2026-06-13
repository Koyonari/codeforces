#include <iostream>
using namespace std;

int main() {
    int n, k = 0;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0) {
            n = n/10;
        }
        else if (n % 10 > 0) {
            n--;
        }
    }

    cout << n;
}
