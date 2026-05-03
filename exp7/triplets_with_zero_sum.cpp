#include <iostream>
#include <algorithm>
using namespace std;

void findTriplets(int arr[], int size) {
    sort(arr, arr + size); 
    bool found = false;

    for (int i = 0; i < size - 2; i++) {

    
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1, right = size - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                cout << "(" << arr[i] << ", " << arr[left] << ", " << arr[right] << ")" << endl;
                left++;
                right--;
                found = true;
            }
            else if (sum < 0) left++;
            else right--;              
        }
    }

    if (!found) cout << "No triplets found" << endl;
}

int main() {
    int arr[] = {-3, -1, 0, 1, 2, 3, -2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Triplets with zero sum:" << endl;
    findTriplets(arr, size);

    return 0;
}
