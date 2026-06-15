#include <iostream>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        int a, b = 0;
        cin >> a >> b;
        
        if (a % b == 0) {
            cout << 0 << "\n";
        }
        else {
            cout << b - (a % b) << "\n";
        }
    }
}
