#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n,a,b;
	cin >> n >> a >> b;
	if(a+b<n)
		cout << b+1 << endl;
	else 
		cout << n-a << endl;


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
