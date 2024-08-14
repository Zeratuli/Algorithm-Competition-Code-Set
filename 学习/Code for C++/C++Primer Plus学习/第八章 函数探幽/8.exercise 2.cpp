#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 200;

struct CandyBar
{
	char name[SIZE];
	double weight;
	int Calories;
};

void Candy(CandyBar &a, const char *b = "Millennium Munch", const double c = 2.85,const int d = 350);
void show(const CandyBar &a);

int main(void)
{
	CandyBar A;
	Candy(A);
	show(A);
	
	return 0;
}

void Candy(CandyBar &a, const char *b, const double c, const int d)
{
	strcpy(a.name,b);
	a.weight = c;
	a.Calories = d;
}
void show(const CandyBar &a)
{
	cout << a.name << endl;
	cout << a.weight << endl;
	cout << a.Calories << endl;
}
