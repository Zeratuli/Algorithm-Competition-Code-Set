#include <iostream>

using namespace std;

void oil(int x);

int main(void)
{
	int texas = 31; 
	int year = 2011;
	
	cout << "In main(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", ";
	cout << "&year = " << &year << endl;
	
	oil(texas);
	
	cout << "In main(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", ";
	cout << "&year = " << &year << endl;
	
	return 0;
}

void oil(int x)
{
	int texas = 5;
	
	cout << "In oil(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In oil(), x = " << x << ", ";
	cout << "&x = " << &x << endl;
	{
		int texas = 113;//局部变量 
		cout << "In block, texas = " << texas << ", ";
		cout << "&texas " << &texas << endl;
		cout << "In block, x = " << x << endl;
		cout << "&x  = " << &x << endl;
	}//这里内部空间会释放，也就是这个texas不复存在 
	
	cout << "Post-block texas = " << texas << endl;
	cout << "&texas = " << &texas << endl;
}
