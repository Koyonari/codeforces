#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int ans = 0;

    // Convert a to lowercase
    transform(a.begin(), a.end(), a.begin(), [](unsigned char c) { 
        return tolower(c); 
    });

    // Convert b to lowercase
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) { 
        return tolower(c); 
    });

    if (a < b) ans = -1;
    else if (a > b) ans = 1;

    cout << ans;
}
