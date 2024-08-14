#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

void solve(){
	int n;
	cin >> n;
	if(n%3==0) cout << n;
	else if(n%3==1) cout << n+2;
	else if(n%3==2) cout << n+1;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
