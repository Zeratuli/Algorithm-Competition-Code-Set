#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	if(n%4==0&&n%100!=0)
		cout << 1;
	else if(n%400==0&&n%100==0)
		cout << 1;
	else
		cout << 0;
		
	return 0;
}
