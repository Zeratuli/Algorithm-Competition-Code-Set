#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	double a,b,sum,del;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		sum += a*b;
		del += a;
	}
	cout << fixed << setprecision(8) << sum/del << endl;

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
