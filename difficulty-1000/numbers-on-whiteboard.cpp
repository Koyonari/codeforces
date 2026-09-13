#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        priority_queue<int> pq;
        for (int i = 1; i <= n; i++) pq.push(i);

        cout << 2 << "\n";

        while (pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            int c = (a + b + 1) / 2; // ceil((a+b)/2) or use c & 1 to check if its even or odd then +1 based on that:.. c & 1 is bitwise AND -> c & 1 checks the last bit is 1, evaluates to 1 == true, else false
            cout << a << " " << b << "\n";
            pq.push(c);
        }
    }
}

