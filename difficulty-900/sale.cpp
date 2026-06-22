#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int>arr;
    while (n--) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    int profit = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0 && m > 0) {
            profit-=arr[i];
            m--;
        }
    }

    cout << profit;
}
