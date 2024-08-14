#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int dir[8][2] = {{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,1},{-2,-1}};//指导
int a[410][410];
int dis[410][410];
int n,m;
queue<int> q;

bool inmap(int x, int y){
	return x >= 0 && y >= 0 && x < n && y < m;//限制条件
}

void bfs(int x, int y){
	memset(dis,-1,sizeof(dis));
	dis[x][y] = 0;
	q.push(x*m+y);
	while(!q.empty()){
		int temp = q.front();
		int x = temp/m;
		int y = temp%m;
		q.pop();
		for(int i = 0; i < 8; i++){
			int dx = x + dir[i][0];
			int dy = y + dir[i][1];
			if(inmap(dx,dy) && a[dx][dy] == 1 && dis[dx][dy] == -1){
				dis[dx][dy] = dis[x][y] + 1;
				q.push(dx*m+dy);
			}
		}
	}
	return ;
}


void solve(){
	cin >> n >> m;
	for(int i  = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			a[i][j] = 1;
		}
	}
	int mx,my;
	cin >> mx >> my;
	mx--,my--;
	bfs(mx,my);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			//if(dis[i][j] == -1) cout << "#" << "\t";
			 cout << dis[i][j] << "\t";
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
