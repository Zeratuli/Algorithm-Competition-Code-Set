#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	string A,C,D;
	cin >> A;
	n = A[0] - 'A' ;
	int b,a = n;
	for(int i = 0; i <= n; i++){
		b = n-i;
		while(b-- > 0){cout << " ";}
		string B = string(1,'A' + i);
		C = C + B;
		D = string(C.rbegin()+1,C.rend());
		cout << C+D << endl;
		
		
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
