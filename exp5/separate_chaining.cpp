#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    vector<list<int>> table(n);

    // insert
    auto insert = [&](int key) {
        int index = key % n;
        table[index].push_back(key);
    };

    // search
    auto search = [&](int key) {
        int index = key % n;
        for (int x : table[index]) {
            if (x == key) {
                cout << key << " Found at index " << index << "\n";
                return;
            }
        }
        cout << key << " Not Found\n";
    };

    // delete
    auto remove = [&](int key) {
        int index = key % n;
        table[index].remove(key);
        cout << key << " Deleted\n";
    };

    // display
    auto display = [&]() {
        for (int i = 0; i < n; i++) {
            cout << "table[" << i << "] -> ";
            for (int x : table[i])
                cout << x << " -> ";
            cout << "NULL\n";
        }
    };

    insert(10);
    insert(20);
    insert(15);
    insert(7);
    insert(25);

    display();

    search(15);
    search(99);

    remove(20);
    display();

    return 0;
}
