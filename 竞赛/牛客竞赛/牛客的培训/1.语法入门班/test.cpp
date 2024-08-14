#include <bits/stdc++.h>
using namespace std;
int b[200005];
int a[400005];
signed main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
		int cnt=0;
		for(int i=1;i<=n-1;i++)
		if(b[i+1]<b[i]) a[cnt+1]=b[i],a[cnt+2]=min(b[i]-1,b[i+1]),cnt+=2;
		else a[++cnt]=b[i];
		cout<<cnt+1<<"\n";
		for(int i=1;i<=cnt;i++) cout<<a[i]<<" ";
		cout<<b[n];
		cout<<"\n";
	}
}
