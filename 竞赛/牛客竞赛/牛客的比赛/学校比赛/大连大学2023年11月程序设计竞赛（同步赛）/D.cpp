#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
int a[N];
void solve(){
	int n,sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i = 0; i < n; i++){
		if(a[i] >= 0){
			sum += a[i]+1;
		}
		else{
			sum += a[i]+1;
		}
	}
	if(sum <= 0)
		cout << n << endl;
	else
		cout << n-1 << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
//	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
