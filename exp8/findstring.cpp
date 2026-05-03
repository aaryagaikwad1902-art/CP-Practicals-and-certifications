#include <iostream>
#include <string>
using namespace std;

int main() {
    string src, findStr;

    cout << "Enter main string: ";
    getline(cin, src);

    cout << "Enter string to find: ";
    getline(cin, findStr);

    int pos = src.find(findStr);

    if (pos != -1) {
        cout << "Found at position " << pos;
    } else {
        cout << "Not Found";
    }

    return 0;
}
