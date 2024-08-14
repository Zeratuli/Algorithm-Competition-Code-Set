#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

unordered_map<string,int> ump;


void solve(){
	ump.emplace("test",3);
	size_t n = ump.erase("test");
	unordered_map<string,int>::iterator it;//
	it = ump.find();
	cout << it->first << " " << it->second << endl;
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
