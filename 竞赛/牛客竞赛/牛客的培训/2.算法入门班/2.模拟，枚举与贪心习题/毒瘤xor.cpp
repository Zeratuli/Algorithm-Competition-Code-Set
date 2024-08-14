#include <bits/stdc++.h>
using i64 = long long;
using namespace std;
#define int long long

const int maxn = 2e5;

int n,q,l,r;
int sum[100010][40],a[maxn];


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 0; i < 31; i++){
		for(int j = 1; j <= n; j++){
			sum[j][i] = sum[j-1][i];
			if((a[j]>>i)&1) 
				sum[j][i]++;
		}
	}
	cin >> q;
	while(q--){
		cin >> l >> r;
		int x = 0;
		for(int i = 0; i < 31; i++){
			if((sum[r][i] - sum[l-1][i]) * 2 < r-l+1)	
				x |= (1<<i);
		}
		cout << x << endl;
	}

	return 0;
}

