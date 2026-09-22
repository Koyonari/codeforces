#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;

    if (n >= 0) cout << n;
    else if (n >= -9) cout << 0;
    else {
        string str = to_string(n);
        int last = str[str.size()-1] - '0';
        int second_last = str[str.size()-2] - '0';

        if (last >= second_last)
            str.erase(str.size()-1, 1);
        else
            str.erase(str.size()-2, 1);

        cout << stoll(str);
    }
}
