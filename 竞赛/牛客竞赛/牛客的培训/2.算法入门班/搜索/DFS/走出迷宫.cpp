#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e3+10;

int m,n,sx,sy,cnt = 0;
char a[N][N];//地图
int vis[N][N];//访问节点
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};//{路径行走方式}

int dfs(int x, int y){
    if(a[x][y] == 'E'){//找到终点结束方式
        return 1;
    }
    vis[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int dx = x + dir[i][0];//按照行走方式进行路径规划
        int dy = y + dir[i][1];
        if(dx <= 0 || dx > n || a[dx][dy] == '#' || dy <= 0 || dy > m || vis[dx][dy] != 0) continue;
        if(dfs(dx,dy)) return 1;//找到就返回1，提早结束避免复杂度过大
    }
    return 0;
}

void solve(){
    while(cin >> n >> m){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m ; j++){
                cin >> a[i][j];
                vis[i][j] = 0;
                if(a[i][j] == 'S'){//找到起始点，一会从起始点出发
                    sx = i;
                    sy = j;
                }
            }
        }
        vis[sx][sy] = 1;//将起始点设为走过
        if(dfs(sx,sy)) cout << "Yes" << endl;
        else cout << "No" << endl;
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
