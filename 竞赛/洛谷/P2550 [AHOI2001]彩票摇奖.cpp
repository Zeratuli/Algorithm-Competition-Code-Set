#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, a[10], num[10] = {0};
	cin >> n;
	for(int i = 1; i <= 7; i++)
		cin >> a[i];
	while(n--)
	{
		int ans = 0;
		for(int i = 1; i <= 7; i++)
		{
			int x;
			cin >> x;
			for(int j = 1; j <= 7; j++)
				if(a[j] == x)
					ans++;
		}
		num[ans]++;
	}
	for(int i = 7; i; i--)
		cout << num[i] << ' ';
	
	return 0;
}

