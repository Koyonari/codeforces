#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        deque<int> d;
        d.push_back(arr[0]);
        for (int i = 1; i < n; i++) {
            if (d.front() >= arr[i]) d.push_front(arr[i]);
            else d.push_back(arr[i]);
        }

        for (int i = 0; i < n; i++) {
            cout << d.front() << ' ';
            d.pop_front();
        }

        cout << '\n';
    }
}

// Add first to array
// Take next element and slot it in front or behind depending who is greater
// Next element puts in front or behind depending on if it is greater or smaller than the first element, if it is greater then put it behind the deque
// continue
