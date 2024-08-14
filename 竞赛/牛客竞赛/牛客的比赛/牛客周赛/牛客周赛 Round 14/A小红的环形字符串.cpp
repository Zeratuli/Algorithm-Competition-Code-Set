#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	char a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l = 0, r = n-1,cnt = 0,l1 = 1,pos = 0;
	while(l<r){
		if(a[l] == a[r]){
			cnt++;
			l++;
	    	r--;
		}
		else
			break;
	}
	if(l<r){
		r = l+1;
		while(r <= n){
			if(a[l] == a[r])
				cnt++;
			l++;
			r++;
		}
	}
	cout << 2*cnt << endl;
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
