#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	int m = n/2;
	(n%2||m%2)?cout << "NO, you can't divide the watermelon into two even parts." << endl : cout << "YES, you can divide the watermelon into two even parts." << endl;
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
