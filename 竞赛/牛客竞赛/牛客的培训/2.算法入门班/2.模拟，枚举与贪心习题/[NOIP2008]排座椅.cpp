#include <bits/stdc++.h>
#define int long long
using namespace std;

int m,n,k,l,d;//m:行,n:列,k:行通道,l:列通道,d:学生对数
struct ty{
	int num;
	int pos;
};
ty H[1200],Z[1200];

bool comp1(ty x,ty y){
	return x.num > y.num;
}
bool comp2(ty x,ty y){
	return x.pos < y.pos;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	
	cin >> m >> n >> k >> l >> d;
	for(int i = 1; i < max(m,n); i++)
	{
		H[i].pos = i;
		Z[i].pos = i;
	}
	for(int i = 1; i <= d; i++){
		int x,y,p,q;
		cin >> x >> y >> p >> q;
		if(x == p) Z[min(y,q)].num++;
		else H[min(x,p)].num++;
		
	}
	sort(H+1,H+1+m,comp1);
	sort(Z+1,Z+1+n,comp1);
	
	sort(H+1,H+1+k,comp2);
	sort(Z+1,Z+1+l,comp2);
	for(int i = 1; i <= k; i++)
	{
		printf("%d",H[i].pos);
	}
	cout << endl;
	for(int i = 1; i <= l; i++)	
	{
		printf("%d",Z[i].pos);
	}

	return 0;
}

