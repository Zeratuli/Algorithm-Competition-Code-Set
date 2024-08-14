#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e7+1000000;
const int mod = 1e9+7;

struct num{
	string A;
}ans[N];

struct ty{
	int a;
}b[N];
int j = 1;

void solve(){
	int n;
	cin >> n;
	cout << b[n].a << endl; 
	return ;
}
int trans(string A){
	int tra = 0;
	for(int i = 0; i < A.length(); i++){
		tra = tra*10 + (A[i]-'0');
	}
	//cout << tra << endl;
	return tra;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for(int i = 1; i < N; i++){
		int flag = 0;
		ans[i].A = to_string(i);
		// cout << ans[i].A << endl;
		for(int k = 0; k < ans[i].A.length(); k++){
			if(ans[i].A[k] <= ans[i].A[k+1]) {flag = 1;break;}
		}
		if(flag) continue;
		else {b[j++].a = stoll(ans[i].A);}
	}
	// for(int i = 1; i <= j ; i++){
	// 	cout << b[i] << endl;
	// }

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
