#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << max(a*b*c,max((a+b)*c,max((b+c)*a,max((a*b)+c,max((b*c)+a,a+b+c)))));

	
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
