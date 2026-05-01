#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    remove(arr.begin(), arr.end(), 0);

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
