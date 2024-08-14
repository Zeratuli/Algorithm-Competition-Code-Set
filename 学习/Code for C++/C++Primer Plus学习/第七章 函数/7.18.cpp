#include <iostream>

using namespace std;

double Jack(int lines);
double Rick(int lines);
void estimate(int lines, double (*pf)(int));

int main(void)
{
	int code;
	
	cout << "How many lines of code do you need?";
	cin >> code;
	cout << "Here is Rick's estimate: " << endl;
	estimate(code, Rick);
	cout << "Here is Jack's estimate: " << endl;
	estimate(code, Jack);
	
	return 0;
 } 
 
double Rick(int lines)
{
	return lines*0.05;
}

void estimate(int lines, double (*pf)(int))
{
	 cout << lines << " lines code will take " << (*pf)(lines) << " minutes" << endl;
}

double Jack(int lines)
{
	return 0.03*lines+0.0004*lines*lines;
}
