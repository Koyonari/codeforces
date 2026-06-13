#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int anton = 0;
    int danik = 0;

    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') anton++;
        else danik++;
    }

    if (anton > danik) cout << "Anton";
    else if (danik > anton) cout << "Danik";
    else cout << "Friendship";
}
