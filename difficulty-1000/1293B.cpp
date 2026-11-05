
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double s, t;
    cin >> s;
    t = s;
    double total = 0;

    for (int i = 0; i < s; i++) {
        total+=(1/t);
        t--;
    }

    cout << total;
}
