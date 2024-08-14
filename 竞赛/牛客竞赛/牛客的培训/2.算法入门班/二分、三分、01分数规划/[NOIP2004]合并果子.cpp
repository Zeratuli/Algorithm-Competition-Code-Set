#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int q[100010];

void solve(){
	queue<int> a,b;
	int n,temp = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> q[i];
	}
	int ans = 0;
	sort(q,q+n);
	for(int i = 0; i < n; i++)
		b.push(q[i]);
	for(int i = 0; i < n-1; i++){
		int c[20];
		for(int j = 0; j < 2; j++){
			if(a.empty() || (!b.empty() && a.front() >= b.front())){
				c[j] = b.front();
				b.pop();
			}
			else{
				c[j] = a.front();
				a.pop();
			}
		}
		ans += c[0] + c[1];
		a.push(c[0] + c[1]);
		//cout << c[0] << " " << c[1] << " " << ans << endl;
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
