#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i+=2){
		if(n == 1){cout << "*" << endl; break;}
		for(int j = ceil(n-i)/2; j > 0; j--) cout << " ";
		int temp = i;
		while(temp-->0) {
			cout << "*";
			if(temp == 0)
				cout << endl;
		}
	}
	for(int i = n-2; i >= 0; i-=2){
		if(n == 1){break;}
		for(int j = ceil(n-i)/2; j > 0; j--) cout << " ";
		int temp = i;
		while(temp-->0) {
			cout << "*";
			if(temp == 0) 
				cout << endl;
		}
	}

	return ;
}

signed main(void){

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
