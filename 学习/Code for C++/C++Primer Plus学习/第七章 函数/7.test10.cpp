#include <iostream>

using namespace std;

double calculate(double a, double b, double (*ps)(double a, double b));
double add(double a, double b);


int main(void)
{
	double a = calculate(2.5, 10.4, add);
	cout << a << endl;
	return 0;
}

double calculate(double a, double b, double (*ps)(double a, double b))
{
	double temp;
	temp = ps(a,b);
	return temp;
}

double add(double a, double b)
{
	return a + b;
}
