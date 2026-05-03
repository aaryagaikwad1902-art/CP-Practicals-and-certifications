#include <iostream>
using namespace std;

int peakElement(int arr[], int left, int right) {
    int mid = left + (right - left) / 2;

    
    if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
        (mid == right || arr[mid] >= arr[mid + 1]))
        return mid;

    if (arr[mid] < arr[mid + 1])
        return peakElement(arr, mid + 1, right); // go right
    
    return peakElement(arr, left, mid - 1);      // go left
}

int main() {
    int arr[] = {1, 3, 7, 8, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = peakElement(arr, 0, size - 1);

    cout << "Peak element: " << arr[index] << " at index: " << index << endl;

    return 0;
}
