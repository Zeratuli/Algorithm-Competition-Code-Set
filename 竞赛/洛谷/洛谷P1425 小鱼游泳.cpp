#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a,b,c,d;//�����ʱ�䣬a��cָСʱ�� 
	int e,f;	//�����ʱ�䣬eָСʱ�� 
	
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
