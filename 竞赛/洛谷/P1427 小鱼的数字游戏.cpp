#include <bits/stdc++.h>

const int SIZE = 10001;

using namespace std;

int main(void)
{
	int arr[SIZE], n=0,j = 10000;
	do{	
		cin >> n;
		arr[j] = n;
		j--;
	}while(n != 0);

	 
	for(int i = j+2; i <= 10000; i++)
		printf("%d ",arr[i]);
	
	
	return 0;
}
