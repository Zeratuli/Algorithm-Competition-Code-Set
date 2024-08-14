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
	
	b = n%60; //分钟数 
	a = n/60; //小时数 
	
	calculate(a,b);
	
	return 0;	
}

int calculate(int a,int b)//显示答案模块 
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
