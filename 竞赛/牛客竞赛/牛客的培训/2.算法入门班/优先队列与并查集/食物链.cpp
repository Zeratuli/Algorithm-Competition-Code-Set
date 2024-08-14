#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int fa[N];

int find(int x){
	return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y){//合并，把是同类的合并在一起
	fa[find(x)] = find(fa[y]);
	return ;
}


void solve(){
	int n,k;
	cin >> n >> k;
	for(int i = 0; i < 3*n; i++){
		fa[i] = i;
	}
	int d,x,y,cnt = 0;
	for(int i = 0; i < k; i++){
		cin >> d >> x >> y;
		if(x > n || y > n){
			cnt++;
			continue;
		}
		if(d == 1){
			if(find(x)==find(y+n) || find(x)==find(y + 2*n)){
				cnt++;
			}
			else{
				merge(x,y);
				merge(x+n,y+n);
				merge(x+2*n,y+2*n);
			}
		}
		if(d == 2){
			if(find(x)==find(y) || find(x)==find(y + 2*n)){
				cnt++;
			}
			else{
				merge(x,y+n);//当不矛盾时，y被x吃于是y就是下一种物种。
				merge(x+n,y+2*n);//若有n个物种也按照这样的顺序，则写一个for循环
				merge(x+2*n,y);//merge(x+i,y+i+1);
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
