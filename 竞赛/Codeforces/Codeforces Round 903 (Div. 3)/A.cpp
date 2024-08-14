#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;


void solve(){
	int n,m;
	string x,s;
	cin >> n >> m;
	cin >> x >> s;
	int ans = 0;
	while(x.length() < s.length()){
		x += x;
		ans++;
	}
	
	if(x.find(s) != x.npos) {
		cout << ans << endl;
	}
	else {
		x += x;
		if(x.find(s) != x.npos)
			cout << ans+1 << endl;
		else {
			x+=x;
			if(x.find(s)!=x.npos)
				cout << ans + 2 << endl;
			else
				cout << -1 << endl;
		}

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
