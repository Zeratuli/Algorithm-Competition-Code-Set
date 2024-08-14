#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 5;

int main(void)
{
	int count = 0;
	
	golf a[SIZE];
	while((setgolf(a[count])) && (count < SIZE))
	{
		cout << "Please enter next golf: " << endl;
		count++;
	}
	
	
	for(int i = 0; i <= SIZE; i++)
	{
		showgolf(a[i]);
	}
	
	return 0;
}
