#include <iostream>

using namespace std;

const int size = 10;

int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
void Reverse_array(double arr[], int n);

int main(void)
{
	double boss[size];
	
	int b = Fill_array(boss, size);
	
	Show_array(boss, b);
	
	Reverse_array(boss, b);
	
	Reverse_array(&boss[1], b-2);

	return 0;
}

int Fill_array(double arr[], int n)
{
	int i;
	double temp;
	for(i = 0; i < size; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}
	cout << endl;
	return i;
}


void Show_array(double arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}

void Reverse_array(double arr[], int n)
{
	for(int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}


