#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    vector<vector<long long>> dp(n + 1, vector<long long>(26, 0));

    for (int i = 0; i < 26; i++) {
        dp[1][i] = 1;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {

                if (i != j) {
                    dp[len][i] += dp[len - 2][j];
                    dp[len][i] %= MOD;
                }
            }
        }
    }

    long long totalWeight = 0;
    
    for (int i = 0; i < 26; i++) {
        totalWeight += dp[n][i];
        totalWeight %= MOD;
    }

    cout << totalWeight << endl;

    return 0;
}
