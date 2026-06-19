#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int p = 0;
    cin >> p;
    vector<int> x(p);
    for (int i = 0; i < p; i++) cin >> x[i];

    int q = 0;
    cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++) cin >> y[i];

    unordered_set<int> z;
    for (int i = 0; i < x.size(); i++) z.insert(x[i]);
    for (int i = 0; i < y.size(); i++) z.insert(y[i]);

    bool complete = true;
    for (int i = 1; i <= n; i++) {
        // Doesn't find shit
        if (z.find(i) == z.end()) { complete = false; break; }
    }

    if (complete) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}
