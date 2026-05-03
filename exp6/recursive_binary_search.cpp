#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, mid + 1, right, target);
    return binarySearch(arr, left, mid - 1, target);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 90};
    int size =10;
    int target = 23;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
