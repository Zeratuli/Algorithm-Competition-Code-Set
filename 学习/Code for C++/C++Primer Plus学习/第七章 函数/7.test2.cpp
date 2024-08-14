#include <iostream>

using namespace std;

const int MAX = 10;

int golf_input(double ar[], int n);
double golf_calculate(double ar[], int n);
int golf_output(double ar[], int n);
void golf_output2(double total);

int main(void)
{
	double arr[MAX];
	
	cout << "Enter 10 golf grades and I will return average(press any word to exit): " << endl;
	
	int size = golf_input(arr,MAX);
	golf_output(arr, size);
	double total = golf_calculate(arr, size);
	golf_output2(total);
	
	return 0;
}

int golf_input(double ar[],int a)
{
	int n = 0;
	while(cin && n < 10)
	{
		double temp;
		cin >> temp;
		ar[n] = temp;
		n++;
	}
	return n-1;
}

double golf_calculate(double ar[], int n)
{
	double average = 0;
	for(int i = 0; i < n; i++)
	{
		average += ar[i];
	}
	average = average/n;
	
	return average;
}

int golf_output(double ar[], int n)
{
	if(n > 0)
	{
		cout << "The number you entered: ";
		for(int i = 0; i < n; i++)
		{
			cout << ar[i] << " ";
		}
		cout << endl;
	}
	else
		cout << "Please enter some number!" << endl;
	return n;
}

void golf_output2(double total)
{
	cout << "The average: " << total << endl;
}
