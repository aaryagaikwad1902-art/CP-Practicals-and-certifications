#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // enqueue (push)
    q.push(10);
    q.push(20);
    q.push(30);

    // display front and rear
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;

    // dequeue (pop)
    q.pop();

    cout << "After pop, Front: " << q.front() << endl;

    return 0;
}
