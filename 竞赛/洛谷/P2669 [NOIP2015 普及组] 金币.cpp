#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long n,a,sum = 0;
	cin >> n;
	a = 0;
	while(n != 0){
		a++;
		for(int j = 0; j < a; j++){
			sum += a;
			n--;
			if(n == 0)
				break;
		}
	}	
	cout << sum;

	return 0;
}
