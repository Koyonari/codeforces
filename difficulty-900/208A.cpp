#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int startPos;
    while ((startPos = s.find("WUB")) != string::npos) {
        s.replace(startPos, 3, " ");
        startPos++;
    }

    cout << s;
}
