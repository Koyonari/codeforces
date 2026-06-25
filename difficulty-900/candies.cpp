#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        int x = 0;
        int k = 2;
        while (true) {
            long long denom = pow(2, k) - 1;
            if (n % denom == 0) {
                x = n / denom;
                break;
            }
            k++;
        }

        cout << x << '\n';
    }
}
