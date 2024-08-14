#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int ans,a,b,temp = 0,max= 0;
	for(int i = 1; i < 8; i++)
	{
		cin >> a >> b;
		ans = a + b;
		if( ans > 8 && max < ans)
		{
			max = ans;
			temp = i;
		}
	}
		
	cout << temp;
	

	return 0;
}
