#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        bool found = false;
        for (auto &p : arr) {
            if (p.first == a) {
                p.second++;
                found = true;
                break;
            }
        }
        if (!found) {
            arr.push_back({a, 1});
        }
    }

    int maxHeight = 0;
    for (auto &p : arr) {
        maxHeight = max(maxHeight, p.second);
    }

    cout << maxHeight << " " << arr.size() << "\n";
}
