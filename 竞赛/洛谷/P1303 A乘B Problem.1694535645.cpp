#include <bits/stdc++.h>

using namespace std;

const int SIZE = 15000;

int main(void)
{
	int a[SIZE],b[SIZE],c[SIZE];
	string A, B;
	cin >> A >> B;
	int lena = A.length();
	int lenb = B.length();
	for(int i = lena - 1; i >= 0; i--){
		a[lena-i] = A[i] - '0';
	}
	for(int i = lenb - 1; i >= 0; i--){
		b[lenb-i] = B[i] - '0';
	}
	memset(c,0,sizeof c);
	int len = lena + lenb;
	for(int i = 1 ; i <= lena; i++){
		for(int j = 1; j <= lenb; j++){
			c[j+i-1] += a[i]*b[j];
//			cout << c[j+i-1] << endl;
		}
	}
	for(int i = 1; i <= lena + lenb; i++)
	{
		c[i+1] += c[i]/10;
		c[i] %= 10;
	}
	for(int i = len; i > 0; i--)
//		cout << c[i];
//	cout << endl;
    while(c[len]==0&&len>1)
		len--;
	for(int i = len; i > 0; i--)
		cout << c[i];

	
	return 0;
}
