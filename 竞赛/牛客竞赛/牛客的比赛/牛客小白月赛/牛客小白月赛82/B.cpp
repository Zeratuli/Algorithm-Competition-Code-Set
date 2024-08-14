#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

priority_queue<double,vector<double>,less<double>> pq1,pq2;

void solve(){
	int n,x,y;
	cin >> n >> x >> y;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		pq1.push(temp);
		pq2.push(temp);
	}
	double ans1 = 0.0, ans2 = 0.0;
	double a = pq1.top();
	pq1.pop();
	a -= y;
	if(a < 0) a = 0;
	pq1.push(a);
	if(pq1.top() == a){
		ans1 += pq1.top();
		pq1.pop();
	}
	a = pq1.top();
	pq1.pop();
	a = a*(x*1.0/100.0);
	pq1.push(a);

	double b;
	b = pq2.top();
	pq2.pop();
	b = b*(x*1.0/100.0);
	pq2.push(b);
	if(pq2.top() == b){
		ans2 += pq2.top();
		pq2.pop();
	}
	b = pq2.top();
	pq2.pop();

	b -= y;
	if(b < 0) b = 0;
	pq2.push(b);

	while(!pq1.empty()){
		ans1 += pq1.top();
		pq1.pop();
	}
	while(!pq2.empty()){
		ans2 += pq2.top();
		pq2.pop();
	}
	double ans = min(ans1,ans2);
	cout << fixed << setprecision(12) << ans << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
