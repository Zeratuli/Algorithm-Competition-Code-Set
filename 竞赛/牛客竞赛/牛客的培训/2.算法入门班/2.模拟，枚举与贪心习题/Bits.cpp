#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n,l,r;
	cin >> n;
	for(int i = 0 ;i < n; i++){
		cin >> l >> r;
		for(int j = 1; (l|j)<=r; j<<=1)
			l |= j;
		cout << l;
	}
	return 0;
}

