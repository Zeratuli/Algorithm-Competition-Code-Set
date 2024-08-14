#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 4e3 + 1000;
const int mod = 1e9 + 7;

struct total {
    multimap<int, int, greater<int>> mm[N];
    int j[N];
} t[N];

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int x, a;
    for (int i = 1; i <= n; i++) {
        cin >> x >> a;
        t[x].mm[x].insert({a, i});
        t[x].j[a] = i;
    }
    for (int i = 1; i <= m; i++) {
        if (t[i].mm[i].empty()) {
            cout << -1 << endl;
        } else {
            for (auto it = t[i].mm[i].begin(); it != t[i].mm[i].end(); ++it) {
                cout << it->second << " ";
            }
            cout << endl;
        }
    }
    return;
}
//原来你也玩原神
signed main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
