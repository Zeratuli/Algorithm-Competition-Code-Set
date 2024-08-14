#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

void solve(){
	int n,m,X,Y;
	cin >> n >> m >> X >> Y;
	int count = n-m;
	int jud = count+X;
	if(X > Y){
		cout << "No" << endl;
		return ;
	}

	if(jud >= Y) cout << "Yes" << endl;
	else cout << "No" << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
