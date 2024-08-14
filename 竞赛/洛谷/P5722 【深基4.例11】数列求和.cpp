#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
	if(n == 1) return 1;
	return f(n-1)+n;
}

int main(void)
{
	int n;
	cin >> n;
	int num = f(n);
	cout << num;
	return 0;
}
