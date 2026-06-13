#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;

        vector<long long> a_vals, b_vals;
        vector<int> a_steps, b_steps;

        int steps = 0;
        long long val = a;
        while (val > 0) {
            a_vals.push_back(val);
            a_steps.push_back(steps);
            val = val / x;
            steps++;
        }
        a_vals.push_back(0);
        a_steps.push_back(steps);

        steps = 0;
        val = b;
        while (val > 0) {
            b_vals.push_back(val);
            b_steps.push_back(steps);
            val = val / x;
            steps++;
        }
        b_vals.push_back(0);
        b_steps.push_back(steps);

        long long min_cost = INT_MAX;
        for (int i = 0; i < a_vals.size(); i++) {
            for (int j = 0; j < b_vals.size(); j++) {
                long long cost = a_steps[i] + b_steps[j] + abs(a_vals[i] - b_vals[j]);
                min_cost = min(min_cost, cost);
            }
        }

        cout << min_cost << "\n";
    }
}
