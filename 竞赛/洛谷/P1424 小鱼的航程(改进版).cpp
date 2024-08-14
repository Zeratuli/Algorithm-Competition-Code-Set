#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int x,n,a,b;
	cin >> x >> n;
	a = x;
	b = 0;
	for(int i = x; i < x + n; i++)
	{
		if(a != 6 &&a != 7)
			b++;
		if(a == 8)
			a = 1;
		a++;
	}
	b *= 250;
	cout << b;
	return 0;
}
