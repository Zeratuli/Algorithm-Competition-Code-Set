#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

double a[N];

void solve(){
	a[0] = 0;
	for(int i = 1; i <= N; i++){
		a[i] = a[i-1] + (-1)(i%2);
		a[i] = a[i-1] - i;
	}
	int n;
	cin >> n;
	cout << a[n];

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
