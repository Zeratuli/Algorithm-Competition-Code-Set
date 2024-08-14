#include <iostream>

using namespace std;

void calculate_1(double a,double b);

int main(void)
{
	double a, b;
	cout << "Enter two numbers and I will calculate them." << endl;
	cout << "Press q to quit." << endl;
	while(cin >> a >> b)
	{
		if(a != 0 && b != 0)
		{
			calculate_1(a,b);
		}
		else
			cout << "a = " << a << ", b = " << b << endl;
	}
	cout << "OK, this program is ending!" << endl;
}
void calculate_1(double a,double b)
{
	double har_mean;
	har_mean = (2.0*a*b)/(a+b);
	cout << "The har_mean is: " << har_mean << endl;
}
