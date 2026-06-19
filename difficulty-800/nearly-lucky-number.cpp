#include <iostream>
using namespace std;

int main() {
    long long n = 0;
    cin >> n;
    
    int count = 0;

    // Count number of digits
    do {
        // Count only 4 or 7
        int d = n % 10;
        if (d == 4 || d == 7) count++;
        n /= 10;
    } while (n != 0);

    if (count == 4 || count == 7) cout << "YES";
    else cout << "NO";
}
