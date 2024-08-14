#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

map<string,int> mp;
int fa[N];

int find(int x){
	return fa[x] == x ? x : find(fa[x]);
}

void merge(int x, int y){
	fa[find(x)] = find(y);
}

void solve(){
	int n,m;
	cin >> n >> m;
	string A;
	for(int i = 0; i < n; i++){
		cin >> A;
		fa[i] = i;
		mp[A] = i;
		A.clear();
	}
	for(int i = 0 ; i < m; i++){
		string s1,s2;
		int x;
		cin >> x >> s1 >> s2;
		if(x == 1) {
			merge(mp[s1],mp[s2]);
		}
		else{
			if(find(mp[s1])!=find(mp[s2])){
				cout << 0 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}
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
