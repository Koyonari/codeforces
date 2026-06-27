#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {

    }
    int count = 0;
    int i = 0;
    while (count < n.length()) {
        if (n[i] == '1' && n[i+1] == '4' && n[i+2] == '4') {
            i+=3;
            count+=3;
        }
        else if (n[i] == '1' && n[i+1] == '4') {
            i+=2;
            count+=2;
        }
        else if (n[i] == '1') {
            i++;
            count++;
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
