#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int k,i = 0;
	double sum = 0;
	double n = 1;
	cin >> k;
	while(sum <= k){
		sum += 1/n;
		n++;
		i++;
	}
	cout << i;
	
	return  0;
}
