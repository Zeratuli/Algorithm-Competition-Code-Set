#include <iostream>

using namespace std;

long double probability(unsigned int numbers, unsigned int picks);

int main(void)
{
	unsigned int total, choices;
	
	long double field = probability(47,5);
	long double special = probability(27,1);
	long double result = field * special;
	
	cout << "Enter the total number of choices on the game card and the number";
	while((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in " << probability(total,choices);
		cout << "Please enter next two number(q to quit):";
	}
	
	cout << "Bye" << endl; 
	
	return 0;
}
