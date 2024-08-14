#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

string A,B;

void solve(){
	getline(cin,A);
	int j = 0;
	for(int i = 0; i < A.length(); i++)
		if(A[i] != ' ') j++;
	cout << j << endl;
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
