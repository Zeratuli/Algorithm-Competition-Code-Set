#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int arr[3],a,b,c;

	for(int i = 0; i < 3; i++)
		cin >> arr[i];
		
	sort(arr,arr+3);
	
	a = arr[0]; b = arr[1]; c = arr[2];
	
	cout<<a/__gcd(a,c)<<'/'<<c/__gcd(a,c); 
	
	return 0;
}



