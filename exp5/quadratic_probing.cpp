#include <bits/stdc++.h>
using namespace std;

vector<int> table;
int n;

void insert(int key) {
    int index = key % n;
    int i = 0;
    while (table.at((index + i*i) % n) != -1)
        i++;
    table.at((index + i*i) % n) = key;
}

void search(int key) {
    int index = key % n;
    int i = 0;
    while (table.at((index + i*i) % n) != -1) {
        if (table.at((index + i*i) % n) == key) {
            cout << key << " Found at index " << (index + i*i) % n << "\n";
            return;
        }
        i++;
    }
    cout << key << " Not Found\n";
}

void display() {
    for (int i = 0; i < n; i++)
        cout << "table[" << i << "] = " << table.at(i) << "\n";
}

int main() {
    cin >> n;

    table.assign(n, -1); // -1 means empty

    insert(10);
    insert(20);
    insert(15);
    insert(7);
    insert(17);

    display();

    search(15);
    search(99);

    return 0;
}
