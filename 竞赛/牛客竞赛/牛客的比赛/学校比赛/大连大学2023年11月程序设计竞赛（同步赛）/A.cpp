#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	priority_queue<int,vector<int>,less<int>> pq;
	int n,k;
	cin >> n;
	for(int i = 0; i < n ; i++){
		cin >> k;
		pq.push(k);
	}
	int max = pq.top();
	cout << max*n << endl;
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
