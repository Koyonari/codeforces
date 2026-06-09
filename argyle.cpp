// NOT DONE
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    long long red   = ((n + 3) / 4) * ((n + 3) / 4);
    long long green = (n / 2) * (n / 2);
    
    cout << red   << "\n";
    cout << green << "\n";
    
    return 0;
}
