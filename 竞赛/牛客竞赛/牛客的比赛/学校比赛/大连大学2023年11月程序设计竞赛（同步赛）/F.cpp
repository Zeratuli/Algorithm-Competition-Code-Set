#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	string A;
	cin >> A;
	if(A.find("XX") != string::npos){
		cout << n;
		return ;
	}
	else{
		int len = A.length();
		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(A[i] == 'X'){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
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
