#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a[N];

void solve(){
	int n,ans = 0;
	cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return ;
	}
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i = 0; i < n; i++){
		if(a[i] != a[i+1]){
			ans = n-(i+1);
			cout << ans << endl;
			return ;
		}
	}

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
