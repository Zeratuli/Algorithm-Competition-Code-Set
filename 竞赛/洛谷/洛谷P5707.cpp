#include <bits/stdc++.h>

using namespace std;

int calculate(int a,int b);

int main(void)
{
	int a, b;
	int t,n;
	double s,v;
	
	cin >> s >> v;
	
	n = 8*60+24*60;
	t = ceil(s/v) + 10;
	n = n - t;
	
	if(n >= 24*60)
	n -= 24*60;
	
	b = n%60; //������ 
	a = n/60; //Сʱ�� 
	
	calculate(a,b);
	
	return 0;	
}

int calculate(int a,int b)//��ʾ��ģ�� 
{
	if (a < 10)
	{
		if(b < 10)
			cout << "0" << a << ":0" << b;
		else
			cout << "0" << a << ":" << b;  
	}
	else
	{
		if(b<10) 
			cout<<a<<":0"<<b;
		else 
			cout<<a<<":"<<b;
	}
}
