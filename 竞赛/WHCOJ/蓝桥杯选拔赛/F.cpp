#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 2e5+10;
int fa[N];
int cnt = 0;
int a[N];
bool b[N];

int find(int x){
	return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int find1(int x){//加
	if(fa[x] == x){
		if(b[fa[x]] == false){
			cnt += a[find(fa[x])];
			b[fa[x]] = true;
		}
		return x;
	}
	else{
		return fa[x] = find1(fa[x]);
	}
}


int find2(int x){//减
	if(fa[x] == x){
		if(b[fa[x]] == true){
			cnt -= a[find(fa[x])];
			b[fa[x]] = false;
		}
		return x;
	}
	else{
		return fa[x] = find2(fa[x]);
	}
}

void merge(int x, int y){
	if(find(fa[x]) != find(fa[y]))
		a[find(fa[x])] += a[find(fa[y])];
	fa[find(y)] = find(fa[x]);
}


void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		fa[i] = i;
		a[i] = 1;
		b[i] = false;
	}
	for(int i = 1; i <= m; i++){
		int p,q;
		cin >> p >> q;
		merge(p,q);
	}
	int q,op,c;
	cin >> q;
	for(int i = 1; i <= q; i++){
		cin >> op >> c;
		if(op == 1){
			find1(c);
			cout << cnt << endl;
		}
		else if(op == 2){
			find2(c);
			cout << cnt << endl;
		}
	}
	return ;
}

signed main(void){
	int t = 1;
	while(t--){
		solve();
	}
	return 0;
}