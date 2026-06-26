#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long factor = 2;
        long long ans = 0;
        while (true) {
            if (n % factor != 0) {
                ans = factor;
                break;
            }
            factor++;
        }

        cout << factor - 1 << '\n';
    }
}

/*
n = 40
multiples of n from 1-40
1
2
4 <-
5 <-
8
10
20

factors of 40
1, 40
2, 20
4, 10
5, 8

smallest positive integer that isn't a factor - 1 = 3 - 1 = 2
*/
