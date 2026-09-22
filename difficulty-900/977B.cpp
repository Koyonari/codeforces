#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string>arr;
    for (int i = 0; i < n - 1; i++) {
        string twogram = s.substr(i,2);
        arr.push_back(twogram);
    }

    sort(arr.begin(), arr.end());
    
    int count = 1;
    int maxcount = 1;
    string ans = arr[0];
    for (int i = 0; i < (int)arr.size()-1; i++) {
        if (arr[i] == arr[i+1]) {
            count++;
            if (count > maxcount) {
                maxcount = count;
                ans = arr[i];
            }
        } else {
            count = 1;
        }
    }

    cout << ans;
}
