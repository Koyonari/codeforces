#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long occurence = 0;

    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;

        if (k.find("++") != string::npos) {
            occurence++;
        }
        else {
            occurence--;
        }
    }

    cout << occurence;
}
