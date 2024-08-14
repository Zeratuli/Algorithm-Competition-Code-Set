#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	double ans = n*304.8;
	cout << fixed << setprecision(1);
	int b = ans*10;
	if(b%10 == 0)
		cout << fixed << setprecision(0) << ans << endl;
	else
		cout << ans << endl;

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
