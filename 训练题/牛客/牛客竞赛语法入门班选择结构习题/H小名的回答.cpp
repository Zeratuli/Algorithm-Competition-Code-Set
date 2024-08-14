#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a,b,n;
	cin >> a >> b >> n;
	if(abs(a+b) == n || abs(a+b)<n&&(n-a-b)%2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	

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
