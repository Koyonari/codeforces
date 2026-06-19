#include <iostream>
#include <string>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int freq[26] = {};
    for (char c : guest) freq[c - 'A']++;
    for (char c : host)  freq[c - 'A']++;
    for (char c : pile)  freq[c - 'A']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
