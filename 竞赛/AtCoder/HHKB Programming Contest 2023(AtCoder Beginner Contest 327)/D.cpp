#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int A[N],B[N];

void solve(){
	int N,M;
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		cin >> A[i];
	}
	for(int i = 0; i < M; i++){
		cin >> B[i];
	}
	int C = 0;
	for(int i = 0; i < M; i++){
		C += (A[i] - B[i]);
		cout << A[i] - B[i] << " ";
	}
	cout << endl;
	cout << C << endl;
	if(C != 0) cout << "Yes" << endl;
	else cout << "No" << endl;
 	
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
