#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e3+100;
const int mod = 1e9+7;

int C[N];
int A[N][N];

void solve(){
	int N,K,P;
	cin >> N >> K >> P;
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <=N; j++){
			if(j == 1) cin >> C[i];
			else cin >> A[i][j];
		}
	for(int i = 2; i <= N; i++){
		for(int j = 1; j <=N; j++){
			cout <<  A[j][i] << " ";

		}
		cout << endl;
	}

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

