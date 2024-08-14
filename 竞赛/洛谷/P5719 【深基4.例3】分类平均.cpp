#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,k,l = 0,b = 0; 
	double sum1 = 0, sum2 = 0,ans1,ans2;
	
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{	
		if(i%k == 0)
		{
			sum1 += i;
			l++;
		}
		else
		{
			sum2 += i;
			b++;
		}
	}
	
	ans1 = sum1/l;
	ans2 = sum2/b;
	
	printf("%.1lf %.1lf", ans1 ,ans2);
	
	return 0;
}
