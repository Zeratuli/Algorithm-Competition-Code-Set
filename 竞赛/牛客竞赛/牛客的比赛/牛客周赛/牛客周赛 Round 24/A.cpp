 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 
 const int N = 1e6+100;
 const int mod = 1e9+7;
 const int INF = 0x3f3f3f3f;
 
queue<int> q;

 void solve(){
 	int n,m = 1,p = 1;
 	cin >> n;
 	if(n%2){
	 	for(int i = 0; i < n; i++){
	 		for(int j = 0; j < n; j++){
	 			cout << m << " ";
	 			m++;
	 		}
	 		cout << endl;
	 	}
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << m << " ";
				m++;
				p++;
				if((p%n == 1) && (p > n)){
					q.push(m);
					m++;
				}
				
				if(m > n*n) break;
			}
			if(m > n*n) break;
			else cout << endl;
		}
		while(!q.empty()){
			int len = q.size();
			if(len%n == 0){
				cout << endl;
			}
			cout << q.front() << " ";
			q.pop();
		}
	}
 	return ;
 }
 
 signed main(void){
 	ios::sync_with_stdio(false);
 	cin.tie(nullptr);
 
 	int t = 1;
 	//cin >> t;
 	while(t--){
 		solve();
 	}
 
 	return 0;
 }
 