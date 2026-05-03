#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // insert elements
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);

    // display
    cout << "Deque: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    // delete elements
    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter deletion: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    return 0;
}
