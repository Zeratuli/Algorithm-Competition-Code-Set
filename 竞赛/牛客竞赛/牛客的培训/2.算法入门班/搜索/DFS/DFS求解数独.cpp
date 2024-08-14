#include <bits/stdc++.h>
using namespace std;
#define int long long

int n = 9;
int a[12][12];
int row[12][12], column[12][12], vis[12][12];//分别代表行是否用过，列是否用过，小方块内是否被用过
const int subcube[10][10] = {
	{0,0,0,0,0,0,0,0,0,0},
	{0,1,1,1,2,2,2,3,3,3},
	{0,1,1,1,2,2,2,3,3,3},
	{0,1,1,1,2,2,2,3,3,3},
	{0,4,4,4,5,5,5,6,6,6},
	{0,4,4,4,5,5,5,6,6,6},
	{0,4,4,4,5,5,5,6,6,6},
	{0,7,7,7,8,8,8,9,9,9},
	{0,7,7,7,8,8,8,9,9,9},
	{0,7,7,7,8,8,8,9,9,9},
};//确认当前位置的值是第几个方块
struct coordiate{
	int x,y;
}vd[90];//代表这个地方是否为0
int cnt = 0;

void show(void){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return ;
}

void dfs(int dep){
	if(dep > cnt){
		show();
		return ;
	}
	int x = vd[dep].x;//找到为0的坐标
	int y = vd[dep].y;
	for(int i = 1; i <= n; i++){
		if(row[x][i] == 0 && column[y][i] == 0 && vis[subcube[x][y]][i] == 0){//vis：第几个小方块的第几个数
			a[x][y] = i;//修改数独的值

			row[x][i] = 1;
			column[y][i] = 1;
			vis[subcube[x][y]][i] = 1;
			dfs(dep+1);//正确就继续
			row[x][i] = 0;
			column[y][i] = 0;
			vis[subcube[x][y]][i] = 0;
		}
	}

	return ;
}


void solve(){
	//cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j] == 0){
				vd[++cnt].x = i;//将是0的地方记录一下，在dfs时只对这些值进行修改
				vd[cnt].y = j;
			}
			else{
				row[i][a[i][j]] = 1;
				column[j][a[i][j]] = 1;
				vis[subcube[i][j]][a[i][j]] = 1;
			}
		}
	} 
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
	}

	return 0;
}
