#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // dp[j] = number of subsets with sum j
    vector<int> dp(target + 1, 0);
    dp[0] = 1; // empty subset

    for (int i = 0; i < n; i++)
        for (int j = target; j >= arr[i]; j--)
            dp[j] += dp[j - arr[i]];

    cout << "Count of subsets: " << dp[target];

    return 0;
}
