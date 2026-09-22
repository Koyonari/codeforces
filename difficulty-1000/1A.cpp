// This solution uses 100kb of memory
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m , a;
    cin >> n >> m >> a;
    cout << ((n + a - 1)/a) * ((m + a - 1)/a) << '\n'; // + a - 1 functions as ceil to avoid floating-point rounding errors
}

// This solution uses 0kb of memory
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, m , a;
    cin >> n >> m >> a;
    cout << (ll)(ceil(double(n)/a) * ceil(double(m)/a)) << '\n';
}
