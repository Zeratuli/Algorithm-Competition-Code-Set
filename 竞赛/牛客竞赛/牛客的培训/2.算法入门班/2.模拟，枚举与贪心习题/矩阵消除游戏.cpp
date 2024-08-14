#include <bits/stdc++.h>
#define int long long
using namespace std;

int st,n,m,k,sum = 0,cnt1,ans = 0;
int a[20][20],lie[20];

int calc(int st){
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if((st >> (i-1)) == 1){
			for(int j = 1; j <= m; j++){
				sum += a[i][j];
			
			}
			cnt1++;
		}
		else
		{
			for(int j = 1; j <= m; j++){
				lie[j] += a[i][j];	
			}
		}
	}
	return sum; 
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	cin >> n >> m >> k;//n––,m¡– 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			sum += a[i][j];
		}
	}
	if(k >= n || k >= m){
		cout << sum;
		return 0;
	}
	
	for(int st = 0; st <= ((1 << n)-1); st++){
		memset(lie,0,sizeof(lie));
		cnt1 = 0;
		int sum = calc(st);
		if(cnt1 > k) continue;
		int rest = k - cnt1;
		sort(lie+1,lie+1+m);
		for(int i = 1, j = m; i <= rest; i++, j--){
			sum += lie[j];	
		}
		ans = max(ans,sum);
		
	}
	cout << ans << endl; 

	return 0;
}

