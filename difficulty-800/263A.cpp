#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int steps = 0;

    // Get input in 2d array and check if its 1
    int array[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> array[i][j];

            // -2 because index 2 is center in an array of 5 -> MANHATTAN DISTANCE 
            if (array[i][j] == 1) {
                steps = abs(i - 2) + abs (j - 2);
            }
        }
    }

    cout << steps;
}
