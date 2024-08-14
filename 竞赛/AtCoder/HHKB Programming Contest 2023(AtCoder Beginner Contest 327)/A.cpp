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
	int len = A.length();
	for(int i = 0; i < len; i++){
		if(A[i] == 'a'){
			if(A[i+1] == 'b'){
				cout << "Yes" << endl;
				return ;
			}
		}
		else if(A[i] == 'b'){
			if(A[i+1] == 'a'){
				cout << "Yes" << endl;
				return ;
			}
		}
	}
	cout << "No" << endl;

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
