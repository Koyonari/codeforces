    #include <iostream>
    #include <set>
    #include <iterator>
    using namespace std;
     
    int main() {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
     
        set<int> s;
        s.insert(x1);
        s.insert(x2);
        s.insert(x3);
     
        int distance = 0;
        set<int>::iterator it = s.begin();
        int min = *(it);
        it++;
        it++;
        int max = *(it);
     
        cout << max - min;
    }
