#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e18+100;
const int mod = 1e9+7;

int b[3];
int a,k,q;

void solve(){
	int l,r;
	cin >> l >> r;
	b[0] = a + (l-1)*k;
	if(a%2==0 && k%2==0) {
		cout << -1 << endl;
		return ;
	}
	else if(a%2 != 0 && k%2 == 0){
		cout << 1 << endl;
		return ;
	}
	else if(a%2 != 0 && k%2 != 0){
		if(b[0]%2 == 0){
			if((r-l+1)%2 == 0){
				cout << 0 << endl;
				return ;
			}
			else if((r-l+1)%2 != 0){
				cout << -1 << endl;
				return ;
			}
			else if(r-l == 1){
				cout << 0 << endl;
				return ;
			}
			else{
				cout << -1 << endl;
				return ;
			}
		}
		if(b[0]%2 != 0){
			if((r-l+1)%2 == 0){
				cout << 0 << endl;
				return ;
			}
			else if((r-l+1)%2 != 0){
				cout << 1 << endl;
				return ;
			}
			else if(r-l == 1){
				cout << 0 << endl;
				return ;
			}
			else{
				cout << 1 << endl;
				return ;
			}
		}
	}
	else if(a%2 == 0 && k%2 != 0){
		if(b[0]%2 == 0){
			if((r-l+1)%2 == 0){
				cout << 0 << endl;
				return ;
			}
			else if((r-l+1)%2 != 0){
				cout << -1 << endl;
				return ;
			}
			else if(r-l == 1){
				cout << 0 << endl;
				return ;
			}
			else{
				cout << -1 << endl;
				return ;
			}
		}
		if(b[0]%2 != 0){
			if((r-l+1)%2 == 0){
				cout << 0 << endl;
				return ;
			}
			else if((r-l+1)%2 != 0){
				cout << 1 << endl;
				return ;
			}
			else if(r-l == 1){
				cout << 0 << endl;
				return ;
			}
			else{
				cout << 1 << endl;
				return ;
			}
			
		}
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	cin >> a >> k >> q;
	while(q--){
		solve();
	}

	return 0;
}
