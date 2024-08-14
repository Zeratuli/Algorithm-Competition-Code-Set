#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n,cnt = 0;
	cin >> n;
	if(n%3==0)
		cnt = (n-1)/3;
 	else
		cnt = n/3*2;
	cout << cnt << endl;


	return 0;
}

