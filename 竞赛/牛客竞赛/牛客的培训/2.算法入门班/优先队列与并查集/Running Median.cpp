#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;



void solve(){
	priority_queue<int,vector<int>,greater<int>>pqmin;
	priority_queue<int,vector<int>,less<int>>pqmax;
	int n;
	int temp;
	int k;
	cin >> k >> n;
	cout << k << " " << ((n+1)>>1) << endl;
	for(int i = 1; i <= n; i++){
		cin >> temp;
		if(i&1) pqmax.push(temp);
		else pqmin.push(temp);
		if(i >= 2) {
			int a = pqmax.top();
			int b = pqmin.top();
			if(a > b){
				pqmax.pop();
				pqmin.pop();
				pqmin.push(a);
				pqmax.push(b);
			}
		}
		if((!pqmax.empty()) && (i&1) ){
			cout << pqmax.top() << " ";
		}
		if(i % 20 == 0) cout << endl;
	}
	cout << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
