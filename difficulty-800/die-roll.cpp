#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int z = 0;
    if (y > z) z = y;
    if (w > z) z = w;
    z--;
    z = 6-z;

    int gcd = std::gcd(z, 6);

    int sim_num = z/gcd;
    int sim_denom = 6/gcd;

    cout << sim_num << '/' << sim_denom;
}
