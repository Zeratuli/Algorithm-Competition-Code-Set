#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9;

int A[N];

void solve(){
	unsigned int n;
	cin >> n;
	for(int i = 1; i <= 100; i++){
		if(A[i] == n%mod){
			cout << i << endl;
			return ;
		}
	}
	cout << "-1" << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for(unsigned int i = 1; i <= 100; i++){
		A[i] = i;
		for(int j = 1; j < i; j++){
			A[i] *= i;
			A[i] %= mod;
		}
		A[i]%=mod;
		cout << A[i] << endl;
	}
	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
