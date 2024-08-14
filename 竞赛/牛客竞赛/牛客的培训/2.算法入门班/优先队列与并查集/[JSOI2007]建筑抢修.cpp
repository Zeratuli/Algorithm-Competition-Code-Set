#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;


struct total{
	int T1;
	int T2;
}t[N];

bool comp(total A, total B){
	return A.T2 < B.T2;
}

priority_queue<int,vector<int>,less<int>> pq;

void solve(){
	int n,sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> t[i].T1 >> t[i].T2;
	sort(t,t+n,comp);

	for(int i = 0; i < n; i++){
		if(sum+t[i].T1 <= t[i].T2){
			pq.push(t[i].T1);
			sum += t[i].T1;
		}
		else if(t[i].T1 < pq.top()){
			sum = sum - pq.top() + t[i].T1;
			pq.pop();
			pq.push(t[i].T1);
		}
	}
	cout << pq.size() << endl;

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
