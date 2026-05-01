#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> table(n, -1); // -1 means empty

    // insert
    auto insert = [&](int key) {
        int index = key % n;
        while (table[index] != -1) {
            index = (index + 1) % n; // move to next slot
        }
        table[index] = key;
    };

    // search
    auto search = [&](int key) {
        int index = key % n;
        while (table[index] != -1) {
            if (table[index] == key) {
                cout << key << " Found at index " << index << "\n";
                return;
            }
            index = (index + 1) % n;
        }
        cout << key << " Not Found\n";
    };

    // display
    auto display = [&]() {
        for (int i = 0; i < n; i++)
            cout << "table[" << i << "] = " << (table[i] == -1 ? -1 : table[i]) << "\n";
    };

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
