#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        // Numbers which are 1 less than a power of 2 is full of 1 bits
        // Mersenne numbers - 2^n - 1
        // Qn asking to maximise number of 1 bits

        // Find largest Mersenne M where k copies fit in budget
        long long M = 0;
        long long next = 1;
        long long bits = 0; // tracks how many bits M has
        while (k * next <= n) {
            M = next;
            next = 2 * next + 1;
            bits++;
        }

        // number of slots can be upgraded to next Mersenne
        long long leftover = n - k * M;
        long long upgrade_cost = M + 1;
        long long upgrades = min(k, leftover / upgrade_cost);

        cout << k * bits + upgrades << "\n";
    }
}
