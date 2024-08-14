#include <bits/stdc++.h>
//#define int long long
using namespace std;

string n;
int a1 = 0, a2 = 0, b1 = 0, b2 = 0,ans = 0;

void solve(){
	int len = n.length();
	int i = 0;
	while(len--){
		if(n[i] == 'a'){
			if(a1 < 10) {a1++;if(a1 == 10) {a1 = 0; a2++;}}
			else {a1 = 0;a2++;}
		}
		else{
			if(b1 < 10) {b1++;if(b1 == 10) {b1 = 0; b2++;}}
			else {b1 = 0;b2++;}
		}
		if(a1 == 0) ans++;
		if(a2 == 0) ans++;
		if(b1 == 0) ans++;
		if(b2 == 0) ans++;
		i++;
		//cout << b2 << b1 << a2 << a1 << endl;
	}
	
	cout << ans << endl;
	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	solve();



	return 0;
}

