#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> leaders;
    int maxRight = arr[n-1];
    leaders.push_back(arr[n-1]); // last element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());

    cout << "Leaders: ";
    for (int i = 0; i < leaders.size(); i++)
        cout << leaders[i] << " ";

    return 0;
}
