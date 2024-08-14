#include <iostream>

using namespace std;

int main(void)
{
	int rats = 10;
	int &rodens = rats;
	
	cout << rats << " " << rodens << endl;
	
	rodens++;
	 
	cout << rats << " " << rodens << endl;	
		cout << &rats << " " << &rodens << endl;	
	return 0;
}
