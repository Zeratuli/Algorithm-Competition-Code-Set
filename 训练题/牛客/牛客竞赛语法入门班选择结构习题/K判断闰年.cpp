#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a[11];

	int pos =0 ;
	int nat = 0;
	for(int i = 0; i < 10; i++){
		cin >> a[i];
		if(a[i] >= 0) pos++;
		else nat++;
	}
	cout << "positive:" << pos << "\nnegative:" << nat << endl;

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
