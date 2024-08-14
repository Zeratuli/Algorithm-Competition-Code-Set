#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m, k;
const int maxn = 2e5 + 10;
int a[maxn], b[maxn], c[maxn], d[maxn];

bool comp(int i, int j){
	return a[i] < a[j];
}

void solve() {
    cin >> n >> k;
    for (int i = 0; i != n; i++)
    	cin >> a[i], c[i] = i;
    for (int i = 0; i != n; i++)
    	cin >> b[i];
    sort(b, b + n);
    sort(c, c + n, comp);
    for (int i = 0; i != n; i++)
    	d[c[i]] = i;
    for (int i = 0; i != n; i++)
    	cout << b[d[i]] << ' ';
    cout << endl;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}