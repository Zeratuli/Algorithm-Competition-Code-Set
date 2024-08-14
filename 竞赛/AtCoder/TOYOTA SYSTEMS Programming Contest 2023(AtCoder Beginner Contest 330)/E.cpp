#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

multiset<int> st;

void solve(){
	int n,k;
	cin >> n >> k;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		st.insert(temp);
	}
	int a,b;
	for(int i = 0; i < k; i++){
		cin >> a >> b;
		int num = *st.find(a);
		cout << num << endl;
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
