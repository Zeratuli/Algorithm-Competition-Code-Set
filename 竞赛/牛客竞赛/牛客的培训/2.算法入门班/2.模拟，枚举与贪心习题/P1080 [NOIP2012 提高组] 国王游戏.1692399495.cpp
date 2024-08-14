#include <bits/stdc++.h>
#define int long long
using namespace std;
int trans(string A){
	int len = A.length();
	int a[len+10];
	memset(a,0,sizeof(a));
	for(int i = len; i >= 0; i--){
		a[i] = A[i] - '0';
		cout << a[i];
	}
	return ;
}
int times(char a,char b){
	return 0;	
}
int calcu(int a){	
	return 0;	
}
int n,a0,b0,ans[10000];
string a1,b1;
struct data{
	int len;
	int num;
}data;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin >> n;
	cin >> a0 >> b0;
	ans[0] = a0*b0;
	for(int i = 1; i <= n; i++){
		cin >> a1 >> b1;
		ans[i] = calcu(times(trans(a1),trans(b1)));
	}
	sort(ans,ans+n);
	cout << ans[0] << endl;




	return 0;
}

