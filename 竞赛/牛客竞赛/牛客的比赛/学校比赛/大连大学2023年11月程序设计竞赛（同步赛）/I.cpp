#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

priority_queue<int,vector<int>,less<int>> pq;

void solve(){
	int n,m,k,ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> k;
		pq.push(k);
	}
	for(int i = 0; i < m; i++){
		ans += pq.top();
		pq.pop();
	}
	cout << ans << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}
