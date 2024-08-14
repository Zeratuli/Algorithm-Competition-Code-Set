#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long int arr[3],a,b,c;
	
	for(int i = 0; i < 3; i++)
		cin >> arr[i];
	
	sort(arr, arr+3);
	
	if(arr[0] + arr[1] <= arr[2])
		cout << "Not triangle\n";
	else
	{
		a = arr[0];
		b = arr[1];
		c = arr[2];
		
		if(a*a + b*b == c*c)
			cout << "Right triangle\n";
		if(a*a + b*b > c*c)
			cout << "Acute triangle\n";
		if(a*a + b*b < c*c)
			cout << "Obtuse triangle\n";
		if(a == b)
			cout << "Isosceles triangle\n";
		if(a == b && b == c && c == a)
			cout << "Equilateral triangle\n";
	}
		
	
	
	return 0;
}
