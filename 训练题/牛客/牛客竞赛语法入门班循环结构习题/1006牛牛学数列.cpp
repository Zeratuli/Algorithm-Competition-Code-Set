#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a[N];

void solve(){
	a[0] = 0;
	double ans = 0;
	for(int i = 1,j = 1; i <= 1000; i+=2,j++){
		if(j%2) a[j] = a[j-1] + i;
		else a[j] = a[j-1] - i;
	}
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		ans += 1.0/a[i];
	}
	cout << fixed << setprecision(3) << ans << endl;
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
