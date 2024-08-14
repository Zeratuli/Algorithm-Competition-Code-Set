#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int m,x;
	cin >> m >> x;
	if(x <= m){
		cout << x << endl;	
	}
	else{
		while((x-m)>0){
			x -= m;	
		}
		cout << x << endl;
	}
	return ;
}
	
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int q;
	cin >> q; 
	while(q--){
		solve();	
	}
	
	return 0;
}

