#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

map<char,int> mp;

bool jud(int n){
	if(n == 1) return false;
	if(n == 2) return true;
	for(int i = 3; i < n; i++){
		if(n%i == 0) return false;
	}
	return true;
}

void solve(){
	string A;
	cin >> A;
	int len = A.length();

	for(int i = 0; i < len; i++){
		mp[A[i]]++;
	}
	int max1,min1;
	for(auto it:mp){
		max1 = max(it.second,max1);
		min1 = min(it.second,min1);
	}
	int count = max1-min1;
	if(jud(count)){
		cout << "Lucky Word" << endl;
		cout << count << endl;
	}
	else{
		cout << "No Answer" << endl;
		cout << count << endl;
		cout << 0 << endl;
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
