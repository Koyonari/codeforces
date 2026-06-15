#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 1 && n > 1) {
            cout << "I love that ";
            count++;
        }
        else if (i % 2 == 0 && n > 1){
            cout << "I hate that ";
            count++;
        }
    }

    if (count % 2 == 1) cout << "I love it";
    else cout << "I hate it";
}
