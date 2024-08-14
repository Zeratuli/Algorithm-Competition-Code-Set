#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int fa[N];
int self[N];//父节点的数量
int roofsize[N];//到父节点的距离

int find(int x){
	if(fa[x] != x){
		int temp = fa[x];
		fa[x] = find(fa[x]);
		roofsize[x] += roofsize[temp];//调整回路大小。
	}
	return fa[x];
}

void merge(int x, int y){
	int a = find(x);//代表x的根
	int b = find(y);//代表y的根
	if(a != b){//a,b两根不相等，则把b的根接在x上
		fa[b] = a;
		//接下来是对权值进行调整
		roofsize[b] += self[a];//将y的根b加上x的根a自己的值，代表加的回路大小
		self[a] += self[b];//将子节点的权值加在新的父节点上
	}
	return ;
}

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		fa[i] = i;
		roofsize[i] = 0;
		self[i] = 1;
	}
	for(int i = 0; i < n; i++){
		char A;
		cin >> A;
		int x,y;
		if(A == 'M'){
			cin >> x >> y;
			merge(x,y);
		}
		if(A == 'C'){
			cin >> x;
			int ans = (self[find(x)]-roofsize[x]-1);
			
			cout << ans << endl;
		}

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
