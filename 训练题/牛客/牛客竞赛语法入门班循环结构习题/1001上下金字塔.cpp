#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
		string A = "*";
		int b;
		for(int i = 1; i <= n; i++){
			b = n-i;
			while(b-- > 0){cout << " ";}
			cout << A << endl;
			A += "**";
		}
		A.pop_back();
		A.pop_back();
		for(int i = 1; i <= n; i++){
			A.pop_back();
			A.pop_back();
			b = i;
			while(b-- > 0){cout << " ";}
			cout << A << endl;
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
