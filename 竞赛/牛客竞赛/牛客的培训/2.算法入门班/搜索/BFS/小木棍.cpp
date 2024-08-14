#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

int a[N],vis[N];
int n;

int dfs(int len, int num, int rest, int last){
	if(num == 0 && rest == 0) return len;
	if(rest == 0) rest = len,last = 0;
	for(int i = last; i < n; i++){
		if(vis[i] == true) continue;
		//if(last == a[i+1]) continue;
		if(a[i] > rest)    continue;

		vis[i] = true;
		if(dfs(len,num-1,rest-a[i],i)) return len;
		vis[i] = false;

		if((a[i] == rest) || (rest == len)) return false;
		while(a[i] == a[i+1]) i++;
	}
	return false;
}

void solve(){
	int sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a+n,greater<int>());
	int len = 0;
	// for(int i = 0; i < n; i++){
	// 	cout << a[i] << " ";
	// }
	// cout << endl;
	for(int i = a[0]; i <= sum; i++){
		if((sum%i) != 0) continue;
		if(dfs(i,n,i,0)){
			len = i;
			break;	
		} 
	}
	cout << len << endl;
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
