#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int ave = (a+b+c)/3;
	if(ave >= 60) cout << "NO" << endl;
	else cout << "YES" << endl;
	
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
