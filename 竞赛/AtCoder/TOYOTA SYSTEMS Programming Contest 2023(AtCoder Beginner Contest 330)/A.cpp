#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
multiset<int> st;

void solve(){
	int n,l,cnt = 0;
	cin >> n >> l;
	int temp = 0;
	for(int i = 0; i < n ; i++){
		cin >> temp;
		st.insert(temp);
	}
	multiset<int>::iterator it;
	for(it = st.begin(); it!=st.end(); it++){
		if(*it >= l)
			cnt++;
	}
	cout << cnt;


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
