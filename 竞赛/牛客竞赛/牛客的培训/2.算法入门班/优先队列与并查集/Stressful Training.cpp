#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

struct total{
	int a;
	int b;
	int hold;
}t[N];

bool comp(total A, total B){
	return A.a > B.a;
}

priority_queue<int,vector<int>,greater<int>> pq;


void solve(){
	int n,k;
	cin >> n >> k;
	//按题目要求输入a和b。
	for(int i = 0; i < n; i++)
		cin >> t[i].a;
	for(int i = 0; i < n; i++)
		cin >> t[i].b;
	for(int i = 0; i < n; i++)
		t[i].hold = t[i].a/t[i].b;
	


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
