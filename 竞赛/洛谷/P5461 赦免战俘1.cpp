#include<bits/stdc++.h>
using namespace std;
int n,p=1,arr[1050][1050];

void di(int x,int a,int b);

int main()
{
	cin>>n;
	for(int i=1; i<=n; i++)
		p*=2; 
	for(int i=1; i<=p; i++)
		for(int j=1; j<=p; j++)
			arr[i][j]=1; 
	di(p,1,1); 
	for(int i=1; i<=p; i++)
	{
		for(int j=1; j<=p-1; j++)
			cout << arr[i][j] << " ";
		cout << arr[i][p]<<endl; 
	}
	return 0;
}


void di(int x,int a,int b)
{
	if(x==2) 
	{
		arr[a][b]=0;
		return;
	}
	for(int i=a; i<=a+x/2-1; i++)
		for(int j=b; j<=b+x/2-1; j++)
			arr[i][j]=0; 
	di(x/2,a+x/2,b);
	di(x/2,a+x/2,b+x/2); 
	di(x/2,a,b+x/2); 
}
