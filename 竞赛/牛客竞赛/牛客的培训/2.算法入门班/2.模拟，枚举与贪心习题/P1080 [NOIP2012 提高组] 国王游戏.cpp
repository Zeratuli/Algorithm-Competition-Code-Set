#include <bits/stdc++.h>
#define int long long
using namespace std;
struct trans{
	int l,r;
	int num = 0;
}trans[1100];

bool comp(trans A, trans B){
	if(A.len == B.len) return A.num > B.num;
	return A.len > B.len;
}

int cal(string A,string B){//用于实现字符串向数组的转化,并进行高精乘和高精除 
	int len1 = A.length();
	int len2 = B.length();
	int a[len1+10];
	int b[len2+10];
	int c[len1+len2+10];
	int d[len1+len2+10];
	int e = 0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	//字符串-整型数组转化 
	for(int i = 0,j = len1-1; i < len1; i++,j--){
		a[i] = A[j] - '0';
//		cout << a[i] << " asd " << "\n";
	}
	for(int i = 0,j = len2-1; i < len2; i++,j--){
		b[i] = B[j] - '0';
//		cout << b[i] << " zxc " << "\n";
		e = 10*e + b[i];
	}
	//高精乘 
	for(int i = 0; i <= max(len1,len2)+1; i++){
		c[i] += a[i]*b[i];
		if(c[i]/10 > 0){
			c[i+1] += c[i]%10;
			c[i] /= 10;
		}
	}
	int len = len1 + len2;
	while(c[len] == 0 && len >= 1){
		len--;
	}
	for(int i = 0; i <= len; i++){
		cout << c[i];	
	}
	sort(c,c+len,comp)
//	//高精除
//	int f = 0;
//	for(int i = 0; i <= len; i++){
//		f = f*10 + c[i];
//		d[i] = f/e;
//		f = f%e;
//	}
//	while(!d[len]){
//		len--;
//	}
//	cout << endl;
//	for(int i = 0; i <= len; i++){
//		cout << d[i] << " d[i]";
//	}
//	cout << endl;

	return 0;
}
int n,a0,b0,ans[10000];

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	cin >> a0 >> b0;
	ans[0] = a0*b0;
	int num1 = 0;
	for(int i = 1; i <= n; i++){
		string a1,b1;
		cin >> a1 >> b1;
		trans[num1].len = ans[i];
		trans[num1].num = i;
		num1++;
	}
	sort(trans+1,trans+num1,comp);//将最大的答案排在第一位 
	cout << ans[0] << endl;

	return 0;
}

