#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int n,m,k;
char a[N][N];
int x, y;
void solve(){
	
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			a[i][j] = '*';
		}
	}
	for(int i = 1; i <= k; i++){
		cin >> x >> y;
		if(a[x][y] != '.'){
			int j = 1;
			while(a[j][y] == '.' && a[j][y] != a[n][y]){
				j++;
			}
			a[j][y] = '.';
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j];
		}
		cout << endl;
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
