#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	double m;
	double t,s;
	
	
	cin >> m >> t >> s;
	
	if(t != 0)
		if(s/t > m)
			cout << 0;
		else
			cout << (int)(m - s/t);
	else
		cout << 0;
	
	return 0;
 } 
