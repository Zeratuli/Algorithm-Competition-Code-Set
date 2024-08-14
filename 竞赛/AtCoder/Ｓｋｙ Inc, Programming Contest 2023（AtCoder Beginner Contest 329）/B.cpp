#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

set<int> st;

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		st.insert(k);
	}
	set<int>::iterator it;
	it = st.end();
	it--;
	it--;
	cout << *it << endl;

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
