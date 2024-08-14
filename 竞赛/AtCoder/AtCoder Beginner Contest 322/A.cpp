#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

string A;

void solve(){
	int N;
	cin >> N;
	cin >> A;
	for(int i = 0; i < N; i++){
		if(A[i] == 'A')
			if(A[i+1] == 'B')
				if(A[i+2] == 'C'){
					cout << i+1 << endl;
					return ;
				}

	}
	cout << -1 << endl;


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
