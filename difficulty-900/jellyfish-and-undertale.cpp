#include <iostream>
using namespace std;

/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];

        for (int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        int i = 0;
        while (b != 0) {
            if (b == 1 && i <= n-1) {
                b+=arr[i];
                i++;
            }
            if (b > a) {
                b = a;
            }
            b--;
            count++;
        }

        cout << count << '\n';
    }
}
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 0;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        long long total = b;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= a) total += a - 1;
            else total += arr[i];
        }

        cout << total << '\n';
    }
}
