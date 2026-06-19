#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int pos_ml = (k * l) / nl;
    int pos_lime = (c * d);
    int pos_salt = p / np;

    int law_of_min = min({pos_ml, pos_lime, pos_salt});

    cout << law_of_min / n;
}

/*
3 friends
4 bottles
5 ml/bottle
10 limes
8 slices/lime
100 g of salt

Requires
3 ml
1 slice
1 g of salt

total ml = 4 * 5 = 20
total slices = 10 * 8 = 80
20/3 = 6
80/1 = 80
100/1 = 100
6/3 = 2

(k * l) / nl
(c * d)
p / np
*/
