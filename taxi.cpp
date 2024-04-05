#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(5, 0);
    dp[4] = count(coins.begin(), coins.end(), 4);
    dp[3] = count(coins.begin(), coins.end(), 3);
    dp[2] = count(coins.begin(), coins.end(), 2);
    dp[1] = count(coins.begin(), coins.end(), 1);

    int bags = dp[4];
    dp[1] = max(0, dp[1] - dp[3]);
    bags += dp[3] + (dp[2] + 1) / 2;
    if (dp[2] % 2 == 1) {
        dp[1] = max(0, dp[1] - 2);
    }
    bags += (dp[1] + 3) / 4;

    cout << bags << endl;

    return 0;
}