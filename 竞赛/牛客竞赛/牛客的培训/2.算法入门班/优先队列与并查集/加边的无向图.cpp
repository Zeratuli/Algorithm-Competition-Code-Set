#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;

int fa[N],head = 100001;

int find(int n){//寻找+路径压缩
	while(n != fa[n]){
		fa[n] = fa[fa[n]];
		n = fa[n];
	}
	return n;
}
int merge(int x,int y){
	return fa[find(y)] = find(fa[x]);
}

void solve(){
	fa[head] = head;
	int n,m;
	cin >> n >> m;
	int a,b;
	for(int i = 1; i <= n; i++){
		fa[i] = i;
	}
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		merge(a,b);
	}
	int ans = -1;
	for(int i = 1; i <= n; i++){
		if(find(fa[i]) != head){
			merge(head,i);
			ans++;
		}
	}
	cout << ans << endl;
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
