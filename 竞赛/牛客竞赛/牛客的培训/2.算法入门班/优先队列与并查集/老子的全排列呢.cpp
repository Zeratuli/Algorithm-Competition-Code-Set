#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int a[N];

void solve(){
	int n = 8;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	do{
		for(int i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	while(next_permutation(a+1,a+n+1));
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
