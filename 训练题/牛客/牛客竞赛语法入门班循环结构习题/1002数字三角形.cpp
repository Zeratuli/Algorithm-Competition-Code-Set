#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	int q = 1;
	for(int i = 1; i <= n; i++){
		int j = i;
		while(j--) {
			printf("%4d",q);
			q++;
		}

		cout << "\n";
	}
	return ;
}

signed main(void){

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
