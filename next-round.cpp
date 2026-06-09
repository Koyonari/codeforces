#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    // Add nums to vector
    for (int i = 0; i < n; i++) cin >> scores[i];

    // Get num
    int cutoff = scores[k - 1];

    // Count num of nums equal to or less than num
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) count++;
    }

    cout << count;
}
