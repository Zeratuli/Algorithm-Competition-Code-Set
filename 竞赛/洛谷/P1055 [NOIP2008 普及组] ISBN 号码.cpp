#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int a1,a234,a56789,total,a2,a3,a4,a5,a6,a7,a8,a9,b;
	char arr[4];
	cin >> a1 >> arr[0]	>> a234 >> arr[1] >> a56789 >> arr[2] >> arr[3];
	
	a2 = (a234/100)%10;
	a3 = (a234/10)%10;
	a4 = a234%10;
	a5 = (a56789/10000)%10;
	a6 = (a56789/1000)%10;
	a7 = (a56789/100)%10;
	a8 = (a56789/10)%10;
	a9 = (a56789)%10;
	
	total = (a1*1 + a2*2 + a3*3 + a4*4 + a5*5 + a6*6 + a7*7 + a8*8 + a9*9)%11;
	if(arr[3] == 'X')
		arr[3] = 10;
	if(arr[3] == '4')
		arr[3] = 4;
	if(total == arr[3])
		cout << "Right";
		else if(total == 10)
			cout << a1 << arr[0] << a2 << a3 << a4 << arr[1] << a5 << a6 << a7 << a8 << a9 << arr[2] << "X";
	else
		cout << a1 << arr[0] << a2 << a3 << a4 << arr[1] << a5 << a6 << a7 << a8 << a9 << arr[2] << total;
	return 0;
}
