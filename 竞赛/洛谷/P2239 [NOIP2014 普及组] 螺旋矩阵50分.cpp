#include <bits/stdc++.h>
//50�ֽⷨ 
int main(void)
{
	int n,a = 1,b,c,j,k,m;
	scanf("%d%d%d",&n,&b,&c);
	m = n;
	int arr[n][n];
	for(int p = 0; p < n; p++)
		for(int q = 0; q < n; q++)
			arr[p][q] = 0;
		
	for(int i = 0; i < m; i++)
	{
		for(j = i; j < m; j++)
		{
			arr[i][j] = a++;
		}
		j--;
		for(k = i+1; k < m; k++)
		{
			arr[k][j] = a++;
		}
		k--;
		j--;	
		for(j; j >= i; j--)
		{
			arr[k][j] = a++;
		}
		j++;
		k--;	
		for(k; k > i; k--)
		{
			arr[k][j] = a++;
		}
		m--;
	}
	printf("%d",arr[b-1][c-1]);

	return 0;
}
