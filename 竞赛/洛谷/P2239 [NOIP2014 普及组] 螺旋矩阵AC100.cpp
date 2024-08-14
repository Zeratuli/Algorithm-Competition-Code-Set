#include <bits/stdc++.h>

int count(int n, int i, int j);

int main(void)
{
	int n,i,j,ans;
	std::cin >> n >> i >> j;
	ans = count(n,i,j);
	
	printf("%d",ans);
	
	return 0;
} 

int count(int n, int i, int j)
{
	if(i == 1)
		return j;
	if(j == 1)
		return (4*n-4-i+2);
	if(j == n)
		return (n+j-1);
	if(i == n)
		return (3*n-j-1);
	
	return (count(n-2,i-1,j-1)+4*(n-1));
	
}
