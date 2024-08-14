#include <bits/stdc++.h>
#define int long long
using namespace std;
int cal(string A,string B){//用于实现字符串向数组的转化,并进行高精乘和高精除 
	int len1 = A.length();
	int len2 = B.length();
	int a[len1+10];
	int b[len2+10];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i = 0,j = len1-1; i < len1; i++,j--){
		a[i] = A[j] - '0';
		cout << a[i] << " asd " << "\n";
	}
	for(int i = 0,j = len2-1; i < len2; i++,j--){
		b[i] = B[j] - '0';
		cout << b[i] << " zxc " << "\n";
	}
	int c[len1+len2+10];
	memset(c,0,sizeof(c));
	for(int i = 0; i <= max(len1,len2)+1; i++){
		c[i] += a[i]*b[i];
		if(c[i]%10 > 0){
			c[i+1] += c[i]%10;
			c[i] /= 10;
		}
		cout <<  " c[i] " << c[i] << " ";
	}
	return 0;
}
int n,a0,b0,ans[10000];

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	cin >> a0 >> b0;
	ans[0] = a0*b0;
	for(int i = 1; i <= n; i++){
		string a1,b1;
		cin >> a1 >> b1;
		ans[i] = cal(a1,b1);
	}
	sort(ans,ans+n);//将最大的答案排在第一位 
	cout << ans[n] << endl;

	return 0;
}

