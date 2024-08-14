/*
	Name:高精度除法
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

struct ty{
	int len,num[110];
}dv,rem;

ty change_dv(string a){
	ty c;
	c.len = a.length();
	for(int i = 0; i < c.len; i++){
		c.num[i] = a[i]-'0';
		cout << c.num[i];
	}
	cout << endl;
	return c;
}
ty change_rem(string b){
	ty c;
	c.len = b.length();
	for(int i = 0,j = c.len; i < c.len; i++,j--){
		c.num[j] = b[i]-'0';
		cout << c.num[j];
	}
	return c;
}

string cal(string a,string B){
	ty b;
	b = change_rem(B);
	memset(rem.num,0,sizeof(rem.num));
	rem.len = dv.len = 0;
	for(int i = 0; i < a.length(); i++){
		
		
	}
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string A,B;
	cin >> A >> B;
	cal(A,B);
	for(int i = 0; i < A.length(); i++)
	{
		cout << dv.num[i];
	}
	for(int i = 0; i < B.length() ; i++)
	{
		cout << rem.num[i];
	}
	return 0;
}

