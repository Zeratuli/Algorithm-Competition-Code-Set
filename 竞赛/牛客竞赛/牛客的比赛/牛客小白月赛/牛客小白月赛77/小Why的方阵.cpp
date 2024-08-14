#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int a[5][5],b[5],jud = 0;
	for(int i = 0 ; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cin >> a[i][j];
		}
	}
	b[0] = a[0][0] + a[0][1];
	b[1] = a[1][0] + a[1][1];
	b[2] = a[0][0] + a[1][0];
	b[4] = a[0][1] + a[1][1];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(b[j] == b[i])
				jud++;
		
		}
		if(jud < 2)
			jud = 0;
		else
			break;
	}
	if(jud >= 2) cout << "YES" << endl;
	else cout << "NO" << endl;
 	
	
		
		
	return 0;
}

