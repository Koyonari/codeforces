#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <long long> arr;
    for (int i = 0; i < 4; i++) {
        int s;
        cin >> s;
        arr.push_back(s);
    }

    sort(arr.begin(), arr.end());

    // Find all repeated occurences then remove them from arr
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    cout << 4 - arr.size();
}
