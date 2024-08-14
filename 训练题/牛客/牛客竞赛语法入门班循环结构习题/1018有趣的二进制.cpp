#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

void solve(){
	int n;
	cin >> n;
	int temp = abs(n);
	
	if(n > 0){
		int j = 0;
		while(n != 0){
			int k;
			k = n%2;
			if(k == 1){
				j++;
			}
			//cout << n << endl;
			n>>=1;
		}
		cout << j << endl;
		return ;
	}
	else{
		n = abs(n);
		int j = 0;
		while(1){
			if(n == 1 || n == 2) break;
			int k;
			k = n%2;
			if(k == 0){
				j++;
			}
			//cout << n << endl;
			n>>=1;
		}
		cout << "n" << n << endl;
		if(n%2 == 1) j++;
		if(n%2 == 0){
			temp >>= 1;
			int huqifan = 0;
			while(huqifan == 0){
				huqifan = ((temp>>1)&1);
				temp >>= 1;
				if(huqifan == 0) j--;
			}
		}
		cout << j << endl;
		return ;
	}
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
