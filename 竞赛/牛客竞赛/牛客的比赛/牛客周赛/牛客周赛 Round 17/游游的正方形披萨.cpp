#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	double n;
	int k,a,b;
	cin >> n >> k;

	if(k<2) cout << fixed << setprecision(2) <<  ((n/2.0)*n*1.0) << endl;
	else if(k % 2 == 0) {
		k/=2;
		k++;
		cout << fixed << setprecision(2) <<  (n/k)*(n/k) << endl;
	}
	else{
		a = k/2;
		b = k-a;
		a++,b++;
		cout << fixed << setprecision(2) <<  (n/a)*(n/b) << endl;
	}
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

