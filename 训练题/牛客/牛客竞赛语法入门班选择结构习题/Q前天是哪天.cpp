#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	string A;
	cin >> A;
	int j = 0;
	for(int i = 5; i<= 6; i++)
		j = j*10 + A[i]-'0';
	for(int i = 8; i <= 9; i++)
		j = j*10 + A[i] - '0';
	if(j <= 1029) cout << "No. It's not too late." << endl;
	else cout << "QAQ" << endl;

	
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
