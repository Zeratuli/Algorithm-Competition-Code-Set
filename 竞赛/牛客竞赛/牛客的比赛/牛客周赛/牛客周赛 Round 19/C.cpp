#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
priority_queue<int,vector<int>,less<int>> pq;


void solve(){
	int n,a;
	int cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		pq.push(a);
	}
	while(pq.top() > 1){
		cnt++;
		int b = pq.top();
		pq.pop();
		if(b % 2 == 0){
			b/=2;
			pq.push(b);
		}
		else{
			b--;
			pq.push(b);
		}
	}
	cout << cnt << endl;
	
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
