#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n,k,l = 0;
	cin >> n >> k;
	if(n < 3&&(n-3*k < 0)) {cout << "-1";return 0;}
	else{
		l = n-3*k;
		for(int i = 0; i < l; i++)
			cout << "y";
		for(int i = 0; i < k; i++)
			cout << "you";
		}

	return 0;
}

