#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e3+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int n;
int a[N];
int vis[N];
void dfs(int dep){
	if(dep > n){
		for(int i = 1; i <= n; i++){//将变好的节点输出
			 cout << a[i] << " ";
		}
		cout << endl;
		return ;
	}
	for(int i = 1; i <= n; i++){//变节点
		if(vis[i]) continue;
		a[dep] = i;
		vis[i] = 1;//只要访问过，就把这个点的vis改为1，在上面的if直接消耗掉
		dfs(dep+1);
		a[dep] = 0;
		vis[i] = 0;//重新把i的点访问情况重置，便于下次访问
	}
}

void solve(){
	cin >> n;//层数
	dfs(1);//这里决定了初始的dfs从哪里开始，即根从几开始
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	while(t--){
		solve();
	}
	return 0;
}
