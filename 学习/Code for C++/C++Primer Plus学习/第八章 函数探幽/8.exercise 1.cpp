#include <iostream>

using namespace std;

void parameterlist(const char *str, int n = 0);

int main(void)
{
	parameterlist("Hello world", 4);
	parameterlist("ByeBye", 3);
	parameterlist("YeeeeeeeeeeeP!",6);
	
	return 0;
}

void parameterlist(const char *str, int n)
{
	static int num = 0;
	num++;
	
	if(n == 0)
		cout << str << endl;
	else
	{
		for(int i = 0; i < num; i++)
			cout << str << endl;
	}
}


