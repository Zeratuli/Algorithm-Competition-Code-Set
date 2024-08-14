#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+100;
const int mod = 1e9+7;

map<char,int> mp;

void solve(){
	string A;
	int n,ans = 0;
	cin >> n;
	cin >> A;
	int len = A.length();
	string B = "";
	for(int i = 0; i < len; i++){
		if(B.find(A[i]) == string::npos){
			B += A[i];
			mp[A[i]] = 1;
		}
	}
	//cout << B << endl;
	int a = 0,b;
	for(int i = 0; i < len; i++){
		b = i;
		if(A[i] != A[i+1]){
			//cout << mp[A[i]] << endl;
			mp[A[i]] = max(mp[A[i]],b-a+1);
			a = i+1;
		}
	}
	//cout << endl;
	for(int i = 0; i < B.length(); i++){
		ans += mp[B[i]];
		//cout << mp[B[i]] << endl;
	}
	cout << ans;
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
