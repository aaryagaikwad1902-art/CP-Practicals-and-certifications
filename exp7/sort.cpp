#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3, 7, 4};
    int size = 8;

    // Ascending order
    sort(arr, arr + size);
    cout << "Ascending:  ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    // Descending order
    sort(arr, arr + size, greater<int>());
    cout << "\nDescending: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}
