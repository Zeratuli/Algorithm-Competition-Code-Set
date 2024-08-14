#include <iostream>
#include "golf.h"
#include <cstring>

using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf &g)
{
	int temp = 1;
	cout << "Enter the golf's name: " << endl;
	cin.getline(g.fullname, Len);
	
	if(strcmp(g.fullname,"") == 0)
	{
		temp = 0;
		return temp;
	}
	else
	{
		cout << "Enter the golf's handicap: " << endl;
		cin >> g.handicap;
		cin.get();
		return temp;
	}
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf &g)
{
	cout << g.fullname << endl;
	cout << g.handicap << endl;
}

