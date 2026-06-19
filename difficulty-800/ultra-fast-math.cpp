#include <iostream>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    string z(x.size(), '0');

    for (int i = 0; i < x.size(); i++) {
        if (x[i] != y[i]) z[i] = '1';
    }

    cout << z;
}
