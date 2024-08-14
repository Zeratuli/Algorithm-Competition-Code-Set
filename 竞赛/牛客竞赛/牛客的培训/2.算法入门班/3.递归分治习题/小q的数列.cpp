#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int n1;

int fun(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return (fun(n/2) + fun(n%2));
}
int minfun(int n){
	return (pow(2,n)-1);
}

void solve(){
	int	n;
	cin >> n;
	cout << fun(n) << " " << minfun(fun(n)) << endl;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();	
	}
	
	return 0;
}

