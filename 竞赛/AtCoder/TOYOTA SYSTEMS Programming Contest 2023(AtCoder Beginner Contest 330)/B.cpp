#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int a[N];

void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	if((m-k) == 0){
		for(int i = 0 ; i < n; i++){
			cout << m << " ";
		}
		return ;
	}
	for(int i = 0; i < n; i++){
		if(a[i] <= m) a[i] = m;
		else if((a[i] > m) && (a[i] < k))
			continue;
		else if(a[i] >= k){
			a[i] = k;	
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
