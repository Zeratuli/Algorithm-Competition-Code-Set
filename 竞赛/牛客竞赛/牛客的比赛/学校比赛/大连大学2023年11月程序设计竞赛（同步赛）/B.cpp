#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	int a,b,c;
	double ans =1e17;
	for(int i = 0; i < n; i++){
		cin >> a  >> b >> c;
		if(a <= 0 && b != 0){
			cout << -1000000000 << endl;
			return ;
		}
		else if(a == 0 && b == 0){
			ans = min(ans,c*1.0);
		}
		else{
			double minn = (4.0*a*c-b*b)/(4.0*a);
			ans = min(minn,ans);
		}
	}
	cout << fixed << setprecision(11) << ans << endl;

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
