#include <bits/stdc++.h>
using namespace std;
#define int long long

const int B = 1e6+100;
const int mod = 1e9+7;

int a[B];
int N,T;
int C = 0;

void solve(){
	if(T > (N-2)*100) {cout << -1 << endl; return ;}
	for(int i = 0 ; i < N-1; i++){
		cin >> a[i];
		C = max(a[i],C);
	}

	sort(a,a+N-1);
	int ans = a[0];
	int X = T;
	// for(int i = 0; i < N-1; i++){
	// 	cout << a[i] << " " << i << endl;
	// }
	for(int i = 1; i < N-2; i++){
		ans += a[i];
		X -= a[i];
	}
	if((X == 100 && ans >= T )||(ans >= T) || (X <= a[0] && X >= 0)) X = 0;
	else if((X < 0) || (X > 100) ||(X == T && C < T) || (X > a[N-2] && ans < T)) X = -1;
	else if((X > a[N-2]) && (X > ans)) X = a[N-2];
	cout << X << endl;
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> N >> T;
	while(t--){
		solve();
	}

	return 0;
}
