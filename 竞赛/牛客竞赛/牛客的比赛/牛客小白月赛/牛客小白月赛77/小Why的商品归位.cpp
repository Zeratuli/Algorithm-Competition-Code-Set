#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6+10;

struct ty{
	int begin,end;
	int pos = 0;
}hope[N];

bool comp(ty A, ty B){
	if(A.begin == B.begin) return A.end < B.end;
	return A.begin < B.begin;
}

void solve(int n, int m, int k){
	int num = 0;
	int ans = 0;
	for(int i = 1; i <= m; i++){
		cin >> hope[i].begin >> hope[i].end;
		hope[hope[i].begin].pos++;
		num++;
	}
	sort(hope+1,hope+m+1,comp);
	while(num--){
		int k1 = k;
		int pos = 1;
		while(pos == n){
			if(hope[pos].pos > 0 && k1 > 0){
				hope[pos].pos--;
				k1--;
				num--;
				if(hope[hope[pos].end].begin > 0 && k1 > 0){
					hope[hope[pos].end].pos--;
					k1--;
					num--;
					if(k1) pos++;
				}
				else pos++;
			}
			else pos++;
		}
		if(num == 0)
			break;
		ans++;
	}
	cout << ans << endl;
	
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n,m,k;
	cin >> n >> m >> k;
	solve(n,m,k);

	return 0;
}

