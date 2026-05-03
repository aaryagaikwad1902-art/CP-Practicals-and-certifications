#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int size, int k) {
    sort(arr, arr + size);  
    return arr[k - 1];    
}

int main() {
    int arr[] = {7, 2, 5, 1, 8, 3, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "K = " << k << endl;
    cout << "Kth Smallest: " << kthSmallest(arr, size, k) << endl;

    return 0;
}
