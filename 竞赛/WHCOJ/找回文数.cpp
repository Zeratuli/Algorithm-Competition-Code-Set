#include<iostream>
using namespace std;
bool symm(int m)
{
	int n=0,k=0,i=m;
	while(i>0)
	{
		n=n*10+i%10;
		i=i/10;
	}
	if(n==m) return true;
}

int main()
{
	for(int i=0;i<=999;i++)
	{
		if(i == 10 || i == 100) continue;
		if(symm(i)==1)
		{
			cout << i << endl;
		}
	}

	return 0;
}

