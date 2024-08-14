#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a,b,c,d;//输入的时间，a，c指小时。 
	int e,f;	//输出的时间，e指小时。 
	
	cin >>a>>b>>c>>d;
	
	if(b<d)
	{
		e = c - a;
		f = d - b;
	}
	else
	{
		e = c - a - 1;
		f = 60-(b-d);
	}
	cout <<e<<" "<<f;
	return 0;
}
