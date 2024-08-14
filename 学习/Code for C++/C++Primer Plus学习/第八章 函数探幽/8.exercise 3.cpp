#include <bits/stdc++.h>

using namespace std;


void UP(string &a);

int main() 
{
	string str;
	
	cout << "Enter a string (q to quit) : "<< endl;
	cin >> str;
	UP(str);
	cout << str << endl;
	while(str != "Q")
	{
	cout << "Next string (q to quit) : " << endl;
	cin >> str;
	UP(str);
	cout << str << endl;
	cin.clear();
	}
	
	return 0;
}

void UP(string &a)
{
	for(int i; i<a.size();i++)
	a[i] = toupper(a[i]);
}


