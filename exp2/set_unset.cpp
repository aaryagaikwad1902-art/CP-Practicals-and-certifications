#include <iostream>
using namespace std;

int main() {
    int num = 45;  
    int n = 3;   
    if (num & (1 << n))
        cout << "Bit " << n << " is SET" << endl;
    else
        cout << "Bit " << n << " is UNSET" << endl;

    return 0;
}
