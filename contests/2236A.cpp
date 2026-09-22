#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    while (n--) {
        int x = 0;
        cin >> x;

        vector<int> arr;
        while (x--) {
            int h;
            cin >> h;
            arr.push_back(h);
        }

        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());
        cout << mx - mn + 1 << "\n";
    }
}
