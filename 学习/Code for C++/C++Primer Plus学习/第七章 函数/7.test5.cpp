#include <iostream>

using namespace std;

long long int cir(long long int n);

int main(void)
{
	cout << "Enter a number and I will calculate it's vactorial." << endl;
	int a;
	cin >> a;
	long long int size = cir(a);
	
	cout << size << endl;
	
	return 0;
}

long long int cir(long long int n)
{
	if(n == 0)
		return 1;
	else
		return n*cir(n-1);
}
