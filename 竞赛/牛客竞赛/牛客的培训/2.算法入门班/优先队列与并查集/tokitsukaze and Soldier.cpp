#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+100;
const int mod = 1e9+7;

struct total{
	int s;
	int v;
}t[N];

bool comp(total A, total B){
	if(A.s == B.s) return A.v > B.v;
	return A.s > B.s;
}

priority_queue<int,vector<int>,greater<int>> pq;//小在前

void solve(){
	int n,sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> t[i].v >> t[i].s;
	sort(t,t+n,comp);
	int ans = -1;
	for(int i = 0; i < n; i++){
		pq.push(t[i].v);
		sum += t[i].v;
		while(t[i].s < pq.size()){
			int q = pq.top();
			sum -= q;
			pq.pop();
		}
		ans = max(ans,sum);
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
