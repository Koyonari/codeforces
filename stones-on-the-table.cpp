#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    
    string s;
    cin >> s;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
             count++;
             int tmp = 0;
             tmp = s[i];
             s[i+1] = s[i];
             s[i] = tmp;
        }
    }

    cout << count;
}
