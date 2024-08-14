#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	
	double n,F1 = 1.0,F2 = 1.0,F;
	cin >> n;
	for(int i = 0; i < n; i++){
		F1 *= (1.0+sqrt(5.0))/2.0;
		F2 *= (1.0-sqrt(5.0))/2.0;
	}
	F = (F1 - F2)/sqrt(5.0);
	printf("%.2lf",F);
	
	return 0;	
}
