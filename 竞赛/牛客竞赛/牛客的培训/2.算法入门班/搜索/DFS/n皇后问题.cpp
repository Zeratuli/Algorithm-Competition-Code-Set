#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int n,cnt = 0;
int a[N],column[N],diagonal[N],back_diagonal[N];


void show(void){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i] == j) cout << "+";
			else cout << "O";
		}
		cout << endl;
	}
	cout << endl;
	return ;
}

void dfs(int dep){
	if(dep > n){
		show();
		cnt++;
		return ;
	}
	else{
		for(int i = 1; i <= n; i++){
			if(column[i] == 0 && diagonal[dep-i+n] == 0 && back_diagonal[dep+i] == 0){
				a[dep] = i;
				column[i] = 1;
				diagonal[dep-i+n] = 1;
				back_diagonal[dep+i] = 1; 
				dfs(dep+1);
				column[i] = 0;
				diagonal[dep-i+n] = 0;
				back_diagonal[dep+i] = 0; 
			}
		}
	}
}

void solve(){
	
	cin >> n;
	dfs(1);
 

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
		cout << cnt << endl;
	}

	return 0;
}
