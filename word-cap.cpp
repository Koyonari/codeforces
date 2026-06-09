#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char>arr;

    for (int i = 0 ; i < s.size(); i++) {
        if (i == 0 && s[0] >= 'a' && s[0] <= 'z') {
            arr.push_back(s[0] -= ('a' - 'A'));
        }
        else {
            arr.push_back(s[i]);
        }
    }

    for (char c: arr) {
        cout << c;
    }
}
