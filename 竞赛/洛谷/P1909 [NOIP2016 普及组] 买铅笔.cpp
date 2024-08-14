#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,a,b,total,min = 9999999999999999;
	
	cin >> n;
	for(int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		total = ceil(n*1.0/a) * b;
		if(total < min)
			min = total;
	}
	cout << min;
	
	return 0;
}
