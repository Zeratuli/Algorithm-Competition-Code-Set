#include <iostream>

using namespace std;

void strcount(const char *str);

const int ArSize = 10;

int main(void)
{
	char input[ArSize];	
	char next;
	
	cout << "Enter a line: " << endl;
	cin.get(input,ArSize);
	while(cin)
	{
		cin.get(next);
			while(next != '\n')
				cin.get(next);
			strcount(input);
			cout << "Enter next line (empty line to quit):" << endl;
			cin.get(input, ArSize);
	}
	
	cout << "ByeBye" << endl;
	
	return 0;
 } 
 
 void strcount(const char *str)
 {
 	static int total = 0;
 	int count = 0;  
 	
 	while(*str++)
 		count++;
 	total += count;
 	cout << count << "characters." << endl;
 	cout << total << "characters total. " <<endl;
 }
