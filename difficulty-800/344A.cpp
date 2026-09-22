#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    vector<int>arr;

    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        arr.push_back(tmp);
    }

    int m = 0;
    for (int i = 0; i < n;i++) {
        if (m != arr[i]) {
            count++;
            m = arr[i];
        }
    }

    cout << count;
}
