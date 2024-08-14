#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n;
	int prime[3000];
	
	cin >> n;
	
	for(int i = 2; i < n; i++)
	{
		if(prime[i] == 0){
			printf("%d ",i);
			for(int j = i+i; j <= n; j+=i)
			{
				prime[j] = 1;
			}
		}
	}
	
	
	return 0;	
}
