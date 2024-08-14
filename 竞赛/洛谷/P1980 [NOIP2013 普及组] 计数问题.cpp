#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,x,j = 10,b,c = 0;
	cin >> n >> x;
	for(int i = n; i >= 0; i--)
	{	
		b = i;
		while(b > 10)
			b %= j;
		if(b == x)
			c++;
	}
	if(x == 0 || x == 1)
		c++;
	cout << c;

	return 0;	
}

