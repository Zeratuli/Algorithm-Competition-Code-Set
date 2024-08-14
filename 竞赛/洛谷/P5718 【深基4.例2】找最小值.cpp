#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a,a+n);
	cout << a[0];
	
	return 0;
}
