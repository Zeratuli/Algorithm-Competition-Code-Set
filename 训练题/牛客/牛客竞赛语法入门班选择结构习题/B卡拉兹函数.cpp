#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n,ans = 0;
	cin >> n;
	if(n%2 == 0) ans = n/2;
	else ans = 3*n+1;
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
