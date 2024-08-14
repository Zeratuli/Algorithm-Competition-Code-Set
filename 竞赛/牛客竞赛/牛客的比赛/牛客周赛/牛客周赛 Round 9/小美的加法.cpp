#include <bits/stdc++.h>
#define int long long
using namespace std;

struct ty{
	int temp = 0;	
	int num = 0;
}ty;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n;
	cin >> n;
	int a[n+10],ans = 0;
	memset(a,0,sizeof(a));
	for(int i = 0; i < n; i++){
		cin >> a[i];
        ans += a[i];
	}
	int sum = ans;
    for (int i = 1; i < n; i++) {
        ans = max(ans,(sum-a[i]-a[i-1] + a[i]*a[i-1]));
    }
    
	cout << ans << endl;

	return 0;
}

