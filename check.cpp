#include <iostream>
using namespace std;

    bool check(int n)
    {
        if(n<=0)
        return false;
        return((n & (n - 1))== 0);
    }
int main() {
    int n=5;
    cout<<check(n);
    return 0;
   
