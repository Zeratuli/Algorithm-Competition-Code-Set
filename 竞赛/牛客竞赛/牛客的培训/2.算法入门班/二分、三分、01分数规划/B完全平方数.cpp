#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

struct ty{
	int len;
	int num;
};

int a[N];
void solve(){

	int j = 0;
	for(int i = 0; i <= sqrt(1e9); i++){
		a[j++] = i*i;
	}
	


	int n,l,r;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> l >> r;
		cout << upper_bound(a,a+j,r) - lower_bound(a,a+j,l) << endl;
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
