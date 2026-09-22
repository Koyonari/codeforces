#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        vector<int> summands;
        int len = n.size();
        for (int i = 0; i < len; i++) {
            int d = n[i] - '0';
            if (d != 0) {
                int power = 1;
                for (int j = 0; j < len - 1 - i; j++) power *= 10;
                summands.push_back(d * power);
            }
        }

        cout << summands.size() << "\n";
        for (int x : summands) cout << x << " ";
        cout << "\n";
    }
}
