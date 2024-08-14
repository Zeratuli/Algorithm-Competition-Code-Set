#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

void solve(){
	int a,b,c,d;

	cin >> a >> b >> c >> d;
	int e = c+d;
	if(d%2==1 && (a%2==0) && (b%2==0) && (c%2==0)){
		cout << "NO" << endl;
	}
	else if((a == b) && (b == c) && (e%c!=0))
		cout << "NO" << endl;
	else{
		int an[3];
		an[0] = a;
		an[1] = b;
		an[2] = c;
		sort(an,an+2);
		if(an[2] % an[0] == 0){
			if(d%an[0]!=0){
				cout <<"NO" << endl;
				return ;
			}
		}
		cout << "YES" << endl;
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
