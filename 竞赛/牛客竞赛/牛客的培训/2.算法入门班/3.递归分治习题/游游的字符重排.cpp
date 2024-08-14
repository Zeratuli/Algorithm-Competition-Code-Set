#include <bits/stdc++.h>
#define int long long
using namespace std;

struct ty{
	char name;
	int num = 0;
}a[27];

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	string str;
	cin >> str;
	for(int i = 0; i < 26; i++){
		a[i].name = 'a' + i;	
		cout << a[i].name << endl;
	}
	
	
	




	return 0;
}

