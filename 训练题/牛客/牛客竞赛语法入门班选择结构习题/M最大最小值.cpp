#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int mx = max(a,max(b,c));
	int mi = min(a,min(b,c));
	cout << "The maximum number is : " << mx << endl;
	cout << "The minimum number is : " << mi << endl;
	
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
