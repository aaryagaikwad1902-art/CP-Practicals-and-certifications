#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    int count = 0;

    cout << "Enter a line of text:\n";
    getline(cin, line);

    stringstream ss(line); 
    string word;

    while (ss >> word) {    
        count++;
    }

    cout << "Number of words: " << count << endl;

    return 0;
}
