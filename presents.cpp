#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 1; i < n + 1; i++) {
        int p = 0;
        cin >> p;
        arr[p-1] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
