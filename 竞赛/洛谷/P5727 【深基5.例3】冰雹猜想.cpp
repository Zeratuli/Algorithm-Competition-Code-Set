#include <iostream>

using namespace std;

#define MAXN 205

int main(void)
{
	int n,num = 0, a[MAXN];
	cin >> n;
	while(n != 1)
	{
		a[num] = n;
		num++;
		if(n%2 == 0)
			n/=2;
			else n = 3*n + 1;
	}
	a[num] = 1;
	for(int i = num; i >= 0; i--)
		cout << a[i] << ' ';
	
	return 0;
}
