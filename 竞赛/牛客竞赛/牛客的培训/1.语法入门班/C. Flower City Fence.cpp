#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int>len(n);
	int b[100010];
	memset(b,0,sizeof(b));
	for(int i = 0; i < n; i++){
		cin >> len[i];	
		if(i == 0 && len[i] != n){
			cout << "No" << endl;
			return ;
		}
		for(int j = 0; j < len[i]; j++){
			b[j]++;
//			cout << b[j] << endl;
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";	
	}
	for(int i = 0,j = n-1; i < n; i++,j--){
		if(len[i] != b[j]){
			cout << "No" << endl;
			return ;	
		}
		else{
			cout << "Yes" << endl;
			return ;
		}
	}
	return ;
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}



	return 0;
}

