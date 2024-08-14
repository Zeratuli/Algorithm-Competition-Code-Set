#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n,k;
	string A;
	cin >> n >> k;
	cin >> A;
	for(int i = 0; i < k; i++){
		A[i] = toupper(A[i]);
	}
	for(int i = k; i < n; i++){
		A[i] = tolower(A[i]);
	}
	cout << A << endl;


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
