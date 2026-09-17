#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    int count = 0;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++) {
        if (arr[i] + arr[i+1] < k) {
            int diff = k - arr[i] - arr[i+1];
            arr[i+1]+=diff;
            count+=diff;
        }
    }
    
    cout << count << '\n';
    for (int i = 0 ; i < n; i++) cout << arr[i] << ' ';
}
