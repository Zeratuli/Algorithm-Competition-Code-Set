#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int A(int n, int m) {
	int res = 1;
	for (int i = m; i >= 1; i--) {
		res = res * n;
		n--;
	}
	return res;
}
int quik_power(int base, int power, int p)
{
	int count1 = power + 1;
	int result = 1;   
	while (power > 0)    
	{
		if (power & 1)         							
			result = result * base % p; 
		base = base * base % p ;      						
		power >>= 1;					
	}
	result = result*count1%p;

	return result % p;       
}


void solve(){
	int n;
	cin >> n;
	if(n < 3){ 
		cout << 0 << endl;
		return ;
	}
	if(n == 3){
		cout << 1 << endl;
		return ;
	}
	int count = n-3;
	int ans = quik_power(26,count,998244353);
	cout << ans << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
