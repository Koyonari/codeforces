#include <iostream>
#include <set>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    set<char>s1;

    for (char c : s) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            s1.insert(c);
        }
    }

    if (s1.size() == 26) cout << "YES";
    else cout << "NO";
}
