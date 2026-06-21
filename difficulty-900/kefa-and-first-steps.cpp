#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr;
    int count = 0;
    int highest_count = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] <= arr[i + 1]) count++;
        else count = 0;
        if (highest_count < count) highest_count = count;
    }
    cout << highest_count + 1;
}
