#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n = 0,m = 0,c = 0;
	double b = 0,d = 0,e = 0;
	cin >> n;

	double a[n+1][5500];
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		for(int j = 0; j < m; j++)	
		{
			cin >> a[i][j];
			b += 1.0*a[i][j];
		}
		sort(a[i],a[i]+m);
		c = a[i][m-1]-a[i][0];
		e = b/m;
		b = 0;
		for(int j = 0; j < m; j++)
		{
			d += pow((1.0*a[i][j]-e),2);
		}
		d /= m;
		printf("%d %.3lf\n",c,d);
		d = 0;
	}
	
	return 0;	
}
