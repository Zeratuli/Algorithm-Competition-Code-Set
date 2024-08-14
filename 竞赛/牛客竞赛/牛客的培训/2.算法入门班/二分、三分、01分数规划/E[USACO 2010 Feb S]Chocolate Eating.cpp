#include <bits/stdc++.h>
using namespace std;
#define int long long

const int NN = 1e6+100;
const int mod = 1e9+7;

int a[NN];

void solve(){
	int N,D,l = 1e9,r = 0,cnt = 0;
	cin >> N >> D;
	for(int i = 0; i < D; i++){
		cin >> a[i];
		r += a[i];
	}

	while(l<r){
		int mid = (l+r)>>1;
		if(jdg()){
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}

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
