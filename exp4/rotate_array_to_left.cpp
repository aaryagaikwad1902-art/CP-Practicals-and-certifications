#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rotate(arr.begin(), arr.begin() + 1, arr.end());

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
