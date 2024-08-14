#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6 + 100;
int a[N];

signed main(void) {
    int mod = pow(2,64);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        int a1 = a[i],b = k;
        while (b != 0) {
            int temp = b;
            b = a1 % b;
            a1 = temp;
        }
        int kb = a1;
        for (int j = 1; j <= n; j++) {
            int a2 = a[j]*a[i],b = k;
            while (b != 0) {
                int temp = b;
                b = a2 % b;
                a2 = temp;
            }

            ans += a2/kb%mod;

        }
    }
    cout << ans%mod << endl;

    return 0;
}
