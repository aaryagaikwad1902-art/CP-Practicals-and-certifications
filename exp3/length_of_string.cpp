#include <bits/stdc++.h>
using namespace std;

int findLength(string s) {
    if (s == "")
        return 0;
    return 1 + findLength(s.substr(1));
}

int main() {
    string s;
    cin >> s;

    cout << "Length of string: " << findLength(s);

    return 0;
}
