#include <iostream>
#include <cstring>

struct stringy
{
	char *str;
	int ct;
};

using namespace std;

void set(stringy &str, const char *testing);
void show(stringy &str, int n = 2);
void show(const char *str,int n = 1);

int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);
	
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show("Done!");
	
	
	return 0;
}


void set(stringy &str, const char *testing)
{
	str.ct = strlen(testing) + 1;
	str.str = new char(str.ct);
	strcpy(str.str, testing);
	
}

void show(stringy &str,int n)
{
	for(int i = 0;i < n;i++)
		cout << str.str << endl;
}
void show(const char *str,int n)
{
	for(int i = 0;i < n;i++)
		cout << str << endl;
}
