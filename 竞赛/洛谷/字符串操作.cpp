#include <bits/stdc++.h>

using namespace std;

int main(void){
	int  n,m;
	cin >> n >> m;
	char s[n+1];
	cin >> s;
	for(int i = 0; i < m; i++){
		int l,r;
		char a,b;
		scanf("%d%d %c %c",&l,&r,&a,&b);
		l--,r--;
		for(int j = l; j <= r; j++){
			if(s[j] == a) s[j] = b;
		}
	}
	cout << s << endl;
	
	return 0;
}
