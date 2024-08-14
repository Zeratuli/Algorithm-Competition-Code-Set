#include <bits/stdc++.h>
#define int long long
using namespace std;

const int SIZE = 9999;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string A,B;

	cin >> A >> B;
	int len1 = A.length();
	int len2 = B.length();
	int a[SIZE],b[SIZE];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i = 0; i < len1; i++){
//		cout << A[i];
		a[i] = A[len1-i-1] - '0';
	}
	cout << endl;
	for(int i = 0; i < len2; i++){
	 	b[i] = B[len2-i-1] - '0';
	}
	int c[SIZE];
	memset(c,0,sizeof(c));
	int d = max(len1,len2);
	for(int i = 0; i < d; i++){
		c[i] = c[i]+a[i]+b[i];
		c[i+1] = c[i]/10;
		c[i] %= 10;
	}
	if(c[d+1])
		d++;
	for(int i = d; i >= 0; i--){
		cout << c[i];
	}
	return 0;
}

