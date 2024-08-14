#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	string A;
	cin >> A;
	n = A[0] - 'A' + 1;
	int b,a = n;
	for(int i = 1; i <= n; i++){
		b = n-i;
		while(b-- > 0){cout << " ";}
		cout << A << endl;
		string B = string(1,'A' + a - i - 1);
		A = B + A + B;
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
