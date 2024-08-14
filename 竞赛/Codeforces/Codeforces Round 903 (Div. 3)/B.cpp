#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	set<int> st,st2;
	int a,b,c,e = 0;
	double d;
	for(int i = 0; i <= 2; i++){
		cin >> a;
		st.insert(a);
	}
	set<int>::iterator it,it2;

	if(st.size() == 1) {cout << "YES" << endl; return ;}
		for(int i = 0; i <= 2; i++){
			it2 = st.end();
			it2--;
			for(it = st.begin();it != st.end(); it++){
				if(it == it2) break;
				st2.insert(*it);
			}

			it = st.end();
			it--;
			d = *it/2.0;
			b = ceil(d);
			c = floor(d);
			if(b != 0){st2.insert(b);}
			if(c != 0){st2.insert(c);}
			
			st.clear();
			for(it = st2.begin();it != st2.end(); it++){
				st.insert(*it);	
			}
			// for(it = st2.begin(); it != st2.end(); it++){
			//     cout << *it <<  " ";
			// }

			st2.clear();
		}

	if(st.size() == 1 && e <= 12) cout << "YES" << endl;
	else cout << "NO" << endl;

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
