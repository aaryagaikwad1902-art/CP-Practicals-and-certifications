#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    cout << "Element  Frequency\n";
    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << "        " << it->second << "\n";

    return 0;
}
