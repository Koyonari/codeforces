#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string name;
    cin >> name;
    unordered_set<char> distinct(name.begin(), name.end());

    if (distinct.size() % 2 == 0) {
        cout << "CHAT WITH HER!"; 
    }
    else {
        cout << "IGNORE HIM!";
    }
}
