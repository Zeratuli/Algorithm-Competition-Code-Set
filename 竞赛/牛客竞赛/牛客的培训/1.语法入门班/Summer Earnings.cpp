#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m = 1;
int x[4000], y[4000];
struct ty{
	double len;
	int x,y;
}a[3000*3000];
bitset<4000>b[4000];
double dist(int i,int j){
	return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
bool comp(ty a,ty b)
{
	return a.len > b.len;	
}
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> x[i] >> y[i];
	for(int i = 1; i <= n; i++)
	{
		for(int j = i+1; j <= n; j++){
			a[++m].len = dist(i,j);
			a[m].x = i;
			a[m].y = j;
		}
	}
	sort(a+1,a+1+m,comp);
	for(int i = 1; i <= m; i++){
		if((b[a[i].x]&b[a[i].y]) != 0)
		{
			printf("%.20f",sqrt(a[i].len)/2.0);
			break;	
		}
		else{
			b[a[i].x][a[i].y] = 1;
			b[a[i].y][a[i].x] = 1;
		}
	}
	return 0;
}

