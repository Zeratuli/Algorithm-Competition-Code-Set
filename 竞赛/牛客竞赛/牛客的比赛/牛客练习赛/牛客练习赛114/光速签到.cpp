#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n;
	cin >> n;
	int a[n+10];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	if(a[n-1] % 10 != 0 || a[n-1] != 0)
		cout << -1 << endl;
	else
		for(int i = 0; i < n; i++){
			cout << a[i];	
		}

	return 0;
}

