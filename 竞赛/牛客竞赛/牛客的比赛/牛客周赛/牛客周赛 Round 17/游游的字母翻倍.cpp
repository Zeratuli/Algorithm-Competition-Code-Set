#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;



void solve(){
	int n,q,l,r;

	cin >> n >> q;

	string A;
	cin >> A;

	for(int i = 0; i < q; i++){
		cin >> l >> r;
		string C = "";
		for(int j = 0; j < l-1; j++)
			C += A[j];
		//cout << C << endl;
		//cout << A << endl;
		for(int j = l-1; j < r; j++){
			C = C + A[j]+A[j];
		}
		for(int j = r; j < A.length(); j++)
			C += A[j];
		A = C;
	}
	cout << A << endl;

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
