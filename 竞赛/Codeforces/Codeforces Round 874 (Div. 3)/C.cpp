#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+100;
const int mod = 1e9+7;

void solve(){
	int n;
	int a[N];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int jud = a[0]%2;
	if(jud==1){
		cout << "YES" << endl;
		return ;
	}
	else{
		int index;
		for(int i = 1; i < n; i++){
			if(a[i]%2==1){
				cout << "NO" << endl;
				return ;
			}
		}
		cout << "YES" << endl;
		return ;
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
//	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
