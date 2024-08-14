#include <bits/stdc++.h>
#define int long long
using namespace std;

const int n = 4,m = 4;
int a[n+10],b[n+10];
int change[n+10];
int calc(int x){
	int cnt  = 0;
	while(x){
	 if(x&1 == 1) cnt++;
	 x>>=1;
	}
	return cnt;
}
int deal(int a[]){
	
	int ans = 0x7f7f7f7f;
	int cur[n+10],cnt = 0;
	for(change[0] = 0; change[0] <= (1<<m)-1; change[0]++)
	{
		cnt = calc(change[0]);
		cur[0] = a[0]^change[0]^(change[0]>>1)^(change[0]<<1)&((1<<m)-1);
		cur[1] = a[1]^change[0];
		for(int i = 1; i < n; i++){
			change[i] = cur[i-1];
			cnt += calc(change[i]);
			cur[i] = cur[i]^change[i]^(change[i]>>1)^(change[i]<<1)&((1<<m)-1);
			cur[i+1] = a[i+1]^change[i];
		}
		if(cur[n-1]==0)
		{
			ans = min(ans,cnt);
		}
	}
	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++){
			char c;
			scanf(" %c",&c);
			if(c == 'b')a[i] |= (1<<j);
			else b[i] |= (1 << j);
		}
		int ans = min(deal(a),deal(b));
		if(ans > n*m) cout << "Impossible" << endl;
		else cout << ans << endl;


	return 0;
}

