#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count0 = count(s.begin(), s.end(), '0');
    int count1 = count(s.begin(), s.end(), '1');

    cout << abs(count0 - count1);
}
