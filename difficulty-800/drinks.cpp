#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    double total = 0;
    for (int i = 0; i < n; i++) {
        int p = 0;
        cin >> p;
        total += p;
    }
    total = total / n;
    cout << fixed << setprecision(4) << total;
}
