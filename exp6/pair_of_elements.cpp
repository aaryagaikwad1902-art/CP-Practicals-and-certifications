#include <iostream>
using namespace std;

void findPair(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == x) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            left++;
            right--;
            found = true;
        }
        else if (sum < x) left++;   
        else right--;               
    }

    if (!found) cout << "No pair found" << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 8, 9};
    int size = 7;
    int x = 10;

    findPair(arr, size, x);

    return 0;
}
