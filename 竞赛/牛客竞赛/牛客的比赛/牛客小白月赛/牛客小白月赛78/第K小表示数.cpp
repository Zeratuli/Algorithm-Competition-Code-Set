#include <bits/stdc++.h>
#define int long long
using namespace std;

int k,a,b;
set<int> st;

void solve(){
	st.insert(a);	
	st.insert(b);
	int temp = k;
	set<int>::iterator it = st.begin();
	while(temp--){
		st.insert(*it + a);
		st.insert(*it + b);	
		it++;
	}
	it = st.begin();
    advance(it, k-1);
    cout << *it << endl;	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	cin >> k >> a >> b;

	solve();

	return 0;
}

