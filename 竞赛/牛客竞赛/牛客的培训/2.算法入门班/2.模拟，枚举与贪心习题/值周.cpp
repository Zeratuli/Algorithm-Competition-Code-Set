#include <bits/stdc++.h>

using namespace std;

struct ty
{
	int gen;
	int tal;
}a[10000000];

bool comp(ty a,ty b){
	if(a.tal == b.tal) return a.gen < b.gen;
	return a.tal < b.tal;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int l,m;
	cin >> l >> m;
	for(int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		a[i].tal = x;
		a[i+m].tal = y+1;
		a[i].gen = 1;
		a[i+m].gen = -1;
	}
	sort(a+1,a+1+2*m,comp);//∞¥À≥–Ú≈≈∫√£¨∑Ω±„+1-1 
	int cnt = 0;
	int b = 0;
	
	for(int i = 1; i <= 2*m; i++)
	{
		b += a[i].gen;
		if(b == 1 && a[i].gen == 1){
			cnt += a[i].tal - a[i-1].tal;
			cout << a[i-1].tal << endl;
		}
	}
	cnt += l - a[2*m].tal + 1;
	cout << cnt;
	
	
	return 0;
}

