#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int a[N];

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		cin >> a[i];
	}
	int b = 0;
	sort(a,a+n-1,greater<int>());
	if(a[0] == a[n-2])
		b = 1;
	else
		b = a[0];

	cout << b << endl;
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
