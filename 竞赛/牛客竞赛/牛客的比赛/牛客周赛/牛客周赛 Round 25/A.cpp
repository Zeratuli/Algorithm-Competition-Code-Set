#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int n,a[N],ans = 0;
string A;

void solve(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> A;
	for(int i = 0; i < n; i++){
		if(A[i] == 'F'){
			int cal = floor((a[i]*1.0)/(100.0));
			int div = (5>cal?5:cal);
			ans += div;
		}
		else{
			ans += a[i];
		}
	}
	cout << ans << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
