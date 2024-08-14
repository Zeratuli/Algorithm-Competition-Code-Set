#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int quickpow(int a, int b, int p){//快速幂
	int cnt = a;
	int ans = 1;
	while(b){
		if(b&1) ans = ans*cnt%p;
		cnt = cnt*cnt;
		b >>= 1;
	}
	return ans;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a,b;
	cin >> a >> b;
	int ans = quickpow(a,b,mod);
	cout << ans << endl;

	return 0;
}
