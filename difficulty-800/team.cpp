#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int vector_count = a + b + c;

        if (vector_count >= 2) {k++;}
    }

    cout << k;
}
