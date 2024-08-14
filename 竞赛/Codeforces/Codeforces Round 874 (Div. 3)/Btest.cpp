#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e4 + 100;
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[N], b[N];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - b[i]) > k)
        {
            int minDiff = LLONG_MAX, swapIndex = -1;
            for (int j = 0; j < n; j++)
            {
                if (abs(a[i] - b[j]) <= k && abs(a[i] - b[j]) < minDiff)
                {
                    minDiff = abs(a[i] - b[j]);
                    swapIndex = j;
                }
            }
            swap(b[i], b[swapIndex]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
