#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string words[100];
    int n = 0;

    string temp = "";
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            words[n++] = temp;
            temp = "";
        } else {
            temp += s[i];
        }
    }

    // swap first and last word
    swap(words[0], words[n - 1]);

    // print result
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }

    return 0;
}
