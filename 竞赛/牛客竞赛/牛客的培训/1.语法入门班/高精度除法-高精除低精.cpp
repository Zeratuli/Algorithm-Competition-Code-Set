#include <bits/stdc++.h>
#define int long long
using namespace std;

void divide(string A,int b){
	int len = A.length();
	int len1 = len;
	int c[len+10];
	memset(c,0,sizeof(c));
	int d = 0;
	for(int i = 0; i < len; i++){
		d = d*10 + A[i]-'0';
		c[len-1-i] = d/b;
		d = d%b;
	}
	while(!c[len])
		len--;
	for(int i = len; i >= 0; i--){
		cout << c[i];
	cout << endl;
 	cout << d << endl;
	}
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string A;
	int b;
	int len = A.length();
	int a[len+100];
	cin >> A >> b;
	divide(A,b);



	return 0;
}

