#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;
    bool found = false;

    for (int i = 0; i < p.length(); i ++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') found = true;
    }

    if (found == true) cout << "YES";
    else cout << "NO";
}
