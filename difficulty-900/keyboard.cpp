#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char dir;
    cin >> dir;

    string s;
    cin >> s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.length(); i++) {
        if (dir == 'R') {
            cout << keyboard[keyboard.find(s[i]) - 1];
        }
        else {
            cout << keyboard[keyboard.find(s[i]) + 1];
        }
    }
}
