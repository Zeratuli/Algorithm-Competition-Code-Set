#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const ll N = 1e5 + 10, P = 65536;
const double eps = 1e-8;
string s;
bool legal;
int a[P + 1];
ll _pow(ll x, ll n)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
            res = res * x % P;
        n >>= 1;
        x = x * x % P;
    }
    return res;
}
ll cal(int l, int r)
{
    int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1;
    for (int i = l; i <= r; i ++)
    {
        if (s[i] == '+' || s[i] == '-') pos1 = i;
        else if (s[i] == '*' || s[i] == '/' ) pos2 = i;
        else if (s[i] == '^') pos3 = i;
        else if (s[i] == '!') pos4 = i;
    }
    if (pos1 == pos2 && pos1 == pos3 && pos1 == pos4 && pos1 == -1)
    {
        ll ans = 0;
        for (int i = l; i <= r; i ++)
            ans = ((ans << 2) + (ans << 3) + (s[i]^48)) % P;
        return ans;
    }
    else if (pos1 != -1)
    {
        if (s[pos1] == '+') return (cal(l, pos1 - 1) + cal(pos1 + 1, r)) % P;
        else return (cal(l, pos1 - 1) - cal(pos1 + 1, r) + P) % P;
    }
    else if (pos2 != -1)
    {
        if (s[pos2] == '*') return (cal(l, pos2 - 1) * cal(pos2 + 1, r)) % P;
        else
        {
            ll den = cal(pos2 + 1, r);
            if (den) return (cal(l, pos2 - 1) / den) % P;
            else
            {
                legal = 0;
                return 0;
            }
        }
    }
    else if (pos3 != -1)
    {
        return _pow(cal(l, pos3 - 1), cal(pos3 + 1, r)) % P;
    }
    else
    {
        return a[cal(l, pos4 - 1)] % P;
    }
}
void solve()
{
    legal = 1;
    cin >> s;
    int res = cal(0, s.size() - 1);
    if (legal)
        cout << res << "\n";
    else
        cout << "ArithmeticException" << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    a[0] = 1;
    for (int i = 1; i <= P; i ++)
        a[i] = (a[i - 1] * i) % P;
    int T;
    cin >> T;
    while ( T -- )
    {
        solve();
    }
    return 0;
}