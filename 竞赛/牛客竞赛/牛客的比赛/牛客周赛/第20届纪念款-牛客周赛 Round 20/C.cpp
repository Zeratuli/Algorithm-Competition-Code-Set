#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n,k,t;
	cin >> n >> k >> t;
	int tmp = t;
	if(k <= t || (k == n && t != 0) || (n-k < k-t-1)) {cout << -1 << endl; return ;}

		while(tmp>=0){
			cout <<	1;
			tmp--;
		}
	for(int  i = n-t-1; i > 0; i--){
		cout << 0;
		if(k-t-1 > 0){
			k--;
			cout << 1;
			i--;
		}
	}


	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
