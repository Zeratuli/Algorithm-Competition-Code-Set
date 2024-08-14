#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6 + 100;
const int mod = 1e9 + 7;

void solve()
{
    int n, cnt = 0;
    cin >> n;
    string A;
    cin >> A;

    set<string> st;

    for (int i = 0; i < n - 1; i++)
    {
        string X = "";
        X += A[i];
        X += A[i + 1];
        st.insert(X);
    }
  	for (const auto &element : st)
    {
        cout << element << " ";
    }

    cout << st.size()<< endl;
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
