#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int n;
int dir[8][2] = {{-1,-2},{-2,-1},{-1,2},{2,-1},{1,-2},{-2,1},{1,2},{2,1}};//控制器or遥控器
int vis[100][100];

void show(void){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << vis[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void dfs(int dep, int x, int y){
	if(dep >= 25){
		show();
		return ;
	}
	for(int i = 0; i < 8; i++){
		int dx = dir[i][0]+x;
		int dy = dir[i][1]+y;
		if(dx <= 0 || dy <= 0 || dx > 5 || dy > 5 || vis[dx][dy] != 0) continue;
		vis[dx][dy] = dep+1;
		dfs(dep+1,dx,dy);
		vis[dx][dy] = 0;//重置内容

	}
}


void solve(){
	cin >> n;
	vis[1][1] = 1;//初始化
	dfs(1,1,1);
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
