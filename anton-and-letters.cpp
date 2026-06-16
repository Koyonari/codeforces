#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<char> s;
    char c;

    while (cin >> c) {
        if (c == '}') break;
        if (c != '{' && c != ',')
            s.insert(c);
    }

    cout << s.size();
}
