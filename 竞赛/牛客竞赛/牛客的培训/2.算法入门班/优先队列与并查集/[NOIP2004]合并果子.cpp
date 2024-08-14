#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a[N];

void solve(){
	priority_queue<int,vector<int>,greater<int>> pq;
	memset(a,0,sizeof(a));
	int n;
	cin >> n;
	int temp1,temp2;
	for(int i = 1; i <= n; i++){
		cin >> temp1;
		pq.push(temp1);
	}
	
	int ans = 0;

	for(int i = 1; i < n; i++){
		temp2 = pq.top();
		pq.pop();
		temp1 = pq.top();
		pq.pop();
		ans += temp1+temp2;
		pq.push(temp1+temp2);
	}

	cout << ans << endl;

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
