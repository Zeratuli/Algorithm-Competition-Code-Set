#include <bits/stdc++.h>
#define int long long
using namespace std;


int t,n;

void solve(){
	cin >> n;	
	vector<int>q1;
	vector<int>q2(n);
	for(int i  = 0; i < n; i++){
		cin >> q2[i];
	}
	for(int i = 0; i < n; i++){
		if(i == 0 || q2[i] >= q2[i-1])
			q1.push_back(q2[i]);
		else{
			q1.push_back(q2[i]);	
			q1.push_back(q2[i]);
		}
	}
	int a = q1.size();
	cout << a << endl;
	for(int i = 0; i < a; i++){
		cout << q1[i] << " ";
	}
	cout << endl;
	
	return ;	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);


	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}

