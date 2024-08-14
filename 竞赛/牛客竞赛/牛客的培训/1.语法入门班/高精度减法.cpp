#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(string A,string B){
	int len1 = A.length();
	int len2 = B.length();
	if(len1 > len2) return 1;
	if(len1 < len2) return 0;
	if(A>B) return 1;
	return 0;
}

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
	if(cmp(A,B)){
		for(int i = 0; i < len; i++){
			c[i] += a[i]-b[i];
//			cout << c[i] << endl;
			if(c[i] < 0){
				c[i] = 10 + c[i];
				c[i+1]--;
			}
		}
	}
	else{
		for(int i = 0; i < len; i++){
			c[i] += b[i]-a[i];
			if(c[i] < 0){
				c[i] = 10 + c[i];
				c[i+1]--;
			}
		}
	}
	while(!c[len])
		len--;

	if(!cmp(A,B))
		cout << "-";
	for(int i = len; i >= 0; i--){
		cout << c[i];
	}


	return 0;
}

