#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

priority_queue<int,vector<int>,less<int>> pq,pq1;

void solve(){
	int n,m,ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int k,l;
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> l;
			pq.push(l);
		}
		ans += pq.top();
		m--;
		pq.pop();
		for(int j = 0; j < k-1; j++){
			pq1.push(pq.top());
			pq.pop();
		}
	}
	while(m--){
		ans += pq1.top();
		pq1.pop();
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
