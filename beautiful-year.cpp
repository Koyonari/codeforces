#include <iostream>
#include <vector>
using namespace std;

int main() {
    int y = 0;
    cin >> y;

    while (true) {
        y++;
        vector<int> year = {y/1000, (y/100)%10, (y/10)%10, y%10};

        bool unique = true;
        for (int i = 0; i < 4 && unique; ++i) {
            for (int j = 0; j < i; ++j) {
                if (year[i] == year[j]) {
                    unique = false;
                    break;
                }
            }
        }

        if (unique) {
            cout << y;
            break;
        }
    }
}
