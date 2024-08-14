#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a[N];

void solve(){
	a[0] = 0;
	double ans = 0;
	for(int i = 1; i <= 1000; i++)
		a[i] = (i*(i+1))/2;

	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		ans += a[i];
	}
	cout << ans << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
