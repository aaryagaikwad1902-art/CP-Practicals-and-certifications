#include <iostream>
using namespace std;

int power(int n, int m) {
    if (m == 0) return 1;
    return n * power(n, m - 1);
}

int main() {
    int n = 2, m = 10;
    cout << n << "^" << m << " = " << power(n, m) << endl;
    return 0;
}
