#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int l,r;
	bitset<100010> a;
	bitset<100010> b;
	cin >> l >> r;
	for(int i = 1; i < 63; i++){
		if((l>>(i-1))&1) a[i] = 1;
		if((r>>(i-1))&1) b[i] = 1;
	}
//	for(int i = 1; i < 31; i++){
//		cout << a[i] << " " << b[i] << endl;
//	}
	long long ans = 0;
	for(int i = 63; i >= 0; i--){
		if(a[i] != b[i]){
			ans = i;
			break;	
		}
	}
	printf("%lld",(int)(1<<ans)-1);
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n;
	cin >> n;
	while(n--){
		solve();
	}

	return 0;
}

