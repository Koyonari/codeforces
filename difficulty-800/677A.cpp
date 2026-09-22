#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    int h = 0;
    cin >> n >> h;
    vector<int>height;
    int count = 0;

    while (n--) {
        int h = 0;
        cin >> h;
        height.push_back(h);
    }

    for (int i = 0; i < height.size(); i++) {
        if (height[i] > h) {
            count+=2;
        }
        else {
            count++;
        }
    }

    cout << count;
}
