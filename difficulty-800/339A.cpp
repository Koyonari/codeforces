#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> arr;

    // Add numbers to vector
    for (int i = 0; i < s.size(); i+=2) {
        arr.push_back(s[i] - '0');
    }

    // Sort and print
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (i != arr.size() -1) {
            cout << arr[i] << "+";
        }
        else {
            cout << arr[i];
        }
    }
}
