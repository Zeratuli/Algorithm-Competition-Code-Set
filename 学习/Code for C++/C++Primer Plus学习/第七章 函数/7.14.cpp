#include <iostream>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main(void)
{
	string list[SIZE];
	
	cout << "Enter " << SIZE << " favorite food: " << endl;
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);		
	}
	
	cout << "Your list: " << endl;
	display(list, SIZE);
	
	
	
	return 0;
}

void display(const string sa[], int n)
{
	for(int i = 0; i<n; i++)
		cout << i+1 << ": " << sa[i] << endl;
}
