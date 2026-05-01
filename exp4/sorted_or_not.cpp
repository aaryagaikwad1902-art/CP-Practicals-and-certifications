#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (is_sorted(arr.begin(), arr.end()))
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}
