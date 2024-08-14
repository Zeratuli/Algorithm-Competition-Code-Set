#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n,ans= 0;
	cin >> n;
	int a[n+10];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	if((a[n]-a[1])!=0)cout << "No" <<endl;
	else cout << "Yes" << endl;


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
