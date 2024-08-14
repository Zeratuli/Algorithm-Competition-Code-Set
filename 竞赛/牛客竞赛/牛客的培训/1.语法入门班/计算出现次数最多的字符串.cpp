#include <bits/stdc++.h>
using namespace std;

int main(void){
	map<string, int> m1;
	string s;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s;
		m1[s]++;
	}
	map<string, int>::iterator it;
	int maxn = 0;
	s = "";
	for(it = m1.begin();it != m1.end(); it++)
	{
		if(it->second > maxn){s = it->first;maxn = it->second;}
	}
	cout << s;
	
	return 0;	
}
