#include <bits/stdc++.h>
using namespace std;

struct Spend
{
	double money[Seasons];	
};

const int Seasons = 4;
const char *Snames[] = {"Spring","Summer","Fall","Winter"};  

void fill(double arr[], int size);
void show(const double arr[], int size);

int main(void)
{
	double expenses[Seasons];
	//Spend expenses;
	
	fill(expenses, Seasons);//fill(expenses.money, Seasons);
	show(expenses, Seasons);//show(expenses.money, Seasons);
	
	return 0;
}

void fill(double arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr[i]; 
	}
}

void show(const double arr[], int size)
{
	double total = 0.0;
	cout << "EXPENSES: " << endl;
	for(int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total expenses: " << total << endl;
}
