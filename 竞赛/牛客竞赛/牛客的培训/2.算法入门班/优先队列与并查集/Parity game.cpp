#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
unordered_map<int,int> fa;
int find(int x){
	return fa[x] == x ? x : fa[x] = find(fa[x]);
}
void merge(int x, int y){
	fa[find(x)] = find(fa[y]);
	return ;
}

void solve(){
	int n = 0,k,cnt = 0;
	cin >> n >> k;
	int x,y;
	cnt = k;
	string A;
	n++;
	for(int i = 0; i < k; i++){
		cin >> x >> y;
		cin >> A;
        if(!fa.count(y))fa[y+n]=y+n,fa[y]=y;
        if(!fa.count(x-1))fa[x-1+n]=x-1+n,fa[x-1]=x-1;
		if(A == "even"){
			if(find(x-1)==find(y+n) || find(x-1+n)==find(y)){
				cnt = i;
				break;
			}
			else{
				merge(x-1,y);
				merge(x-1+n,y+n);
			}
		}
		else if(A == "odd"){
			if(find(x-1)==find(y) || find(x-1+n)==find(y+n)){
				cnt = i;
				break;
			}
			else{
				merge(x-1,y+n);
				merge(x-1+n,y);
			}
		}
	}
	cout << cnt << endl;
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
