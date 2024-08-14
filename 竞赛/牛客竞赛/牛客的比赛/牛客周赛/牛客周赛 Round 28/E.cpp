#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int goodArrays(int n, int k) {
    vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
    dp[1][0] = (k + 1) / 2;  
    dp[1][1] = k / 2;       

    for (int i = 2; i <= n; ++i) {
        dp[i][0] = (dp[i - 1][0] * ((k + 1) / 2) + dp[i - 1][1] * (k / 2)) % MOD;
        dp[i][1] = (dp[i - 1][1] * ((k + 1) / 2) + dp[i - 1][0] * (k / 2)) % MOD;
    }

    return dp[n][0];
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << goodArrays(n, k) << endl;
    return 0;
}
