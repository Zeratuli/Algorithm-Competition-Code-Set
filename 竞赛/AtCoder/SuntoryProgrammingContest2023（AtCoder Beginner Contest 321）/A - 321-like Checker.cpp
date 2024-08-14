#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

string A;

void solve(){
	cin >> A;
	for(int i = 0; i < A.length(); i++){
		if(A[i] <= A[i+1]) {cout << "No" << endl; return ;}
	}
	cout << "Yes" << endl;
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
