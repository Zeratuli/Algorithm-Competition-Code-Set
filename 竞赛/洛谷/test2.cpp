#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	clock start,end;
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	cin >> n;
	clock_t start, end;
	start = clock();
	long long x;
	if(n%3 == 0)
		x = n;
	if((n+1)%3 == 0)
		x = n+1;
	if((n+2)%3 == 0)
		x = n+2;
	cout << x;
	start

	
	return 0;
}
