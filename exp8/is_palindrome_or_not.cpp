#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = str;  
    
    for (int i = 0; i < str.length() / 2; i++) {
        swap(rev[i], rev[str.length() - i - 1]);
    }

    // check palindrome
    if (str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
