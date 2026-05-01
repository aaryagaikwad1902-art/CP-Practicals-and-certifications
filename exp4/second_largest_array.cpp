#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int largest = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            cout << "Second Largest: " << arr[i];
            return 0;
        }
    }

    cout << "No second largest element";

    return 0;
}
