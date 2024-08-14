#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 1024;

int main(void)
{
	int a[3][MAXN];
	int n,k = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[0][i] >> a[1][i] >> a[2][i];
	for(int i = 1; i <= n-1; i++)
		for(int j = i + 1; j <= n; j++)
			if((abs(a[0][i]-a[0][j]) <= 5)&&(abs(a[1][i] - a[1][j]) <= 5)&&(abs(a[2][i] - a[2][j]) <= 5)&&(abs(a[0][i]+a[1][i]+a[2][i] - a[0][j]-a[1][j]-a[2][j]) <= 10))		
				k++;
	cout << k;
	
	
	return 0;
}
