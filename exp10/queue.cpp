#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// enqueue
void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = x;
}

// dequeue
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << queue[front] << endl;
    front++;
}

// display
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}
