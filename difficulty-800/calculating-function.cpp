#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Count number of pairs since i + (i+1) always = 1
    if (n % 2 == 0) cout << n / 2;
    else cout << -(n + 1) / 2;
}
