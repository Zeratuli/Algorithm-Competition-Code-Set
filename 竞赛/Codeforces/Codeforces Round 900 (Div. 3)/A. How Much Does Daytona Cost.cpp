#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

struct prefix{
	int data;
	int len = 0;
}a[N];

void solve(){
	int n,k,j = 1;
	for(int i = 1; i <= n; i++){
		cin >> a[i].data;
		a[i+n].len += 1;
	}



	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
//	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
