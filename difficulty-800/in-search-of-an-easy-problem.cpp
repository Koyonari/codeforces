#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    bool hard = false;
    for (int i = 0; i < n; i++) {
        int input = 0;
        cin >> input;
        if (input == 1) {
            hard = true;
        }
    }

    if (hard == true) cout << "HARD";
    else cout << "EASY";
}
