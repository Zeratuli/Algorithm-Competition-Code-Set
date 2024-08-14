#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,k = 1;
	cin >> n;
	int m = n;
	for(int i = 0; i <= n;i++)
	{
		for(int i = m;i > 0; i--)
		{
			if(k<10)
				cout << "0";
			cout << k;
			k++;
		}
		m--;
		cout << endl;
	}

	
	return 0;
}
