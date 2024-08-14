#include <bits/stdc++.h>
#define int long long
using namespace std;

const int n = 4,m = 4;
int a[n+10],b[n+10];
int change[n+10];

int deal(){
	
	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++){
			char c;
			cin >> c;
			if(c == 'b')a[i] = a[i] |= (1<<j);
			else b[i] |= (1 << j);
		}
		deal(a);
		deal(b);



	return 0;
}

