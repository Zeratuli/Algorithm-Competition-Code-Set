#include <bits/stdc++.h>

using namespace std;

int recursion(int n);

int main(void)
{
	int n;
	cin >> n;
	
	cout << recursion(n);
	
	return 0;
}

int recursion(int n)
{
	if(n == 1)
		return 1;
	return (2*(1 + recursion(--n)));
}
