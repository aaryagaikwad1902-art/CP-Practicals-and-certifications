#include <iostream>
#include <cmath>
using namespace std;

int countDigitsStirling(int n) {
    if (n == 0 || n == 1) return 1;

    double e  = 2.71828182845904523536;
    double pi = 3.14159265358979323846;

    double digits = n * log(n / e) / log(10) + 0.5 * log(2 * pi * n) / log(10);

    return (int)digits + 1;
}

int main() {
    int n = 100;
    cout << "Digits in " << n << "! = " << countDigitsStirling(n) << endl;
    return 0;
}
