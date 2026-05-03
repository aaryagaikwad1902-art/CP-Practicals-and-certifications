#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};

    l.push_back(4);
    l.push_front(0);

    l.remove(2); // remove value 2

    for (int x : l)
        cout << x << " ";

    return 0;
}
