#include<bits/stdc++.h>
using namespace std;
bool judge(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0) return true;
	return false;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int y,m,d;
		scanf("%d-%d-%d",&y,&m,&d);
		if(m==2&&d==29)
		{
			printf("-1\n");
		    continue;
		}
		int days=0;
		if(m>2)
		{
			for(int i=y+1;i<=y+18;i++)
			{
				if(judge(i)) days+=366;
				else days+=365;
			}
		}
		else
	     {
			for(int i=y;i<y+18;i++)
			{
				if(judge(i)) days+=366;
				else days+=365;
			}
		}
		printf("%d\n",days);
	}
	return 0;
}
