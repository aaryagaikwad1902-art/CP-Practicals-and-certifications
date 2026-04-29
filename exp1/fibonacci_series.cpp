#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=10;
    vector<int> fib = {0, 1};
    for(int i=2; i<n; i++){
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    for (int i=0; i<n; i++){
        cout << fib[i] << " ";
    }
    return 0;
}
