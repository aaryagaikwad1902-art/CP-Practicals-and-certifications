#include <iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;
    bool found = false;

    cout << "Intersection: ";
    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";  
            i++;
            j++;
            found = true;
        }
        else if (arr1[i] < arr2[j]) i++;
        else j++;                          
    }

    if (!found) cout << "No common elements";
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6, 8};
    int arr2[] = {2, 3, 5, 7, 8, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, size1, arr2, size2);

    return 0;
}
