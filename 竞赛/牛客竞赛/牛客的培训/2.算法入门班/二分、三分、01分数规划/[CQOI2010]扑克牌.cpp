#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e4+100;
const int mod = 1e9+7;
int c[N];
ll n,m;

bool jud(int mid){
	ll aa = 0;
	for(int i = 0; i < n; i++){
		aa += max(mid-c[i],0);
	}
	//cout << aa << " aa " << endl;
	if(aa <= m && aa <= mid)
		return true;
	return false;
}

void solve(){
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> c[i];
	
	int l = 0, r = 1e9;
	while(l < r){
		int mid = (l+r+1)/2;
		//cout << mid << " mid " << endl;
		//cout << " l " << l << " r " << r << endl;
		if(jud(mid)) l = mid;
		else r = mid-1;
	}
	cout << l << endl;
	
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
