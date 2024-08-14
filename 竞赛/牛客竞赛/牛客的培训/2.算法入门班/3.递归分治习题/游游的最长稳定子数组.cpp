#include <bits/stdc++.h>
#define int long long
using namespace std;
struct ty{
	int len = 0;
}ans[100010];
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int n;
	cin >> n;
	int a[n+10];
	memset(a,0,sizeof(a));
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 2; i <= n; i++){
		ans[i-1].len = abs(a[i] - a[i-1]);
	}
	int x = 0,y = 1,as = 1;
	for(int i = 1; i <= n; i++){
		y = i;
		as = max(as,y-x);
		if(ans[i].len > 1){
			x = i;
		}
	}
	cout << as << endl;
	return 0;
}

