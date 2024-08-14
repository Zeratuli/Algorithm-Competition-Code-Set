#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

    string A,B;
    cin >> A >> B;
	int len1 = A.length();
	int len2 = B.length();
	int a[len1+1000],b[len2+1000];

	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
    for(int i = 0; i < len1; i++)
		a[i] = A[len1-1-i] - '0';
	for(int i = 0; i < len2; i++)
		b[i] = B[len2-1-i] - '0';
	int len = max(len1,len2);
	int c[len+100];
	memset(c,0,sizeof(c));
	for(int i = 0; i < len; i++){
		c[i] = a[i]-b[i];
	}
	for(int i = 0; i < len; i++){
		if(c[i] < 0 && c[len-1] > 0){
			c[i] = 10+c[i];
			c[i+1]--;
		}
		else if(c[i] < 0 && c[len-1] < 0){
			if(i == len-1)
				break;
			c[i] = -c[i];
		}
	}
	while(!c[len])
		len--;
	for(int i = len; i >= 0; i--){
		cout << c[i];
	}

	return 0;
}

