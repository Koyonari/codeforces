#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;
    vector<int>arr;

    while (n--) {
        int a, b = 0;
        cin >> a >> b;
        count+=b;
        count-=a;
        arr.push_back(count);
    }

    int min = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > min) {
            min = arr[i];
        }
    }

    cout << min;
}
