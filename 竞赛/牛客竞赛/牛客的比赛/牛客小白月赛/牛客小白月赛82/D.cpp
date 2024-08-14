#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

priority_queue<double,vector<double>,less<double>> pq;

int n,a,b,x,y;

void solve(){
	cin >> n >> a >> b >> x >> y;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		pq.push(temp);
	}
	double ans = 0;
	while(a != 0 && b != 0 && !pq.empty()){
		double tmp = pq.top();
		pq.pop();
		if(tmp - y <= 0){
			b--;
		}
		else if((tmp*(x/100.0)) > (tmp - y)){
			tmp -= y;
			ans += tmp;
			b--;
		}
		else{
			tmp = tmp*(x/100.0);
			ans += tmp;
			a--;
		}
	}
	if(a == 0){
		while(!pq.empty()){
			if(b > 0){
				double tt = pq.top();
				tt -= y;
				if(tt < 0) tt = 0;
				ans += tt;
				b--;
			}
			else{
				ans += pq.top();
			}
			pq.pop();
		}
	}
	else{
		while(!pq.empty()){
			if(a > 0){
				double ttt = pq.top();
				ttt = ttt*(x/100.0);
				ans += ttt;
				a--;
			}
			else{
				ans += pq.top();
			}
			pq.pop();
		}
	}


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
