#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int t,n,s;
int a[100000];

int main(void)
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&s);
		memset(a,0,sizeof(a));
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		int len = n+1;
		int sum = 0, r = 0;
		for(int l = 1; l <= n; l++){
			while(r <= n && sum < s){
				r++;
				sum += a[r];
			}
			if(sum >= s)
			{
				len = min(len,r-l+1);
			}
			sum -= a[l];
		}
		if(len > n) printf("0\n");
		else printf("%d\n",len);		
	}
	return 0;
}
