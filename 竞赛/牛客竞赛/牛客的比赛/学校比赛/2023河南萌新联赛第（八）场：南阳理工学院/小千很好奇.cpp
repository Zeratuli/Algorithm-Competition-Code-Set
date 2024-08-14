#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
	int l,r,k,ans = 0;
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		k = 0;
		for(int j = 1; j <= i; j++){
			if(i%j == 0)
				k++;
		}
		if(k == 2){
			ans++;	
		}
	}
	cout << ans;
	return ;	
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int T;
	cin >> T;
	while(T--){
		solve();
	}
	return 0;
}

