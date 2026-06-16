#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool right = true;

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n || i % 2 == 1) {
            int x = m;
            while (x--) cout << "#";
            cout << "\n";
        }
        else if (i % 2 == 0 && right == true) {
            int x = m-1;
            while (x--) cout << ".";
            cout << "#" << "\n";
            right = false;
        }
        else if (i % 2 == 0 && right == false) {
            int x = m-1;
            cout << "#";
            while (x--) cout << ".";
            cout << "\n";
            right = true;
        }
    }
}
