#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	string A;
	cin >> A;
	int j = 0;
	for(int i = 4; i<= 5; i++)
		j = j*10 + A[i]-'0';
	if(j >= 3 && j <= 5) cout << "spring" << endl;
	else if(j >=6 && j <= 8) cout << "summer" << endl;
	else if(j >= 9 && j <=11) cout << "autumn" << endl;
	else cout << "winter" << endl;
	
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
