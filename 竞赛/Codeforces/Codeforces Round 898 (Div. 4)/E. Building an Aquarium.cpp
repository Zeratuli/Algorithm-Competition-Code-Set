#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;
int a[N];
void solve(){
    int n,p;
    cin >> n >> p;
    for(int i = 0 ; i < n; i++){
    	cin >> a[i];
    }
    sort(a,a+n,greater<int>());
//	for(int i = 0; i < n; i++){
//		cout << a[i] << " " ;
//	}
    for(int x=0; x<n; ++x){
			int sum = 0, nx, h;
			for(int y=x+1; y<n; ++y)
				sum += a[x] - a[y];
			if(sum<=p){
				nx = p-sum;
				h = a[x] + nx/(n-x);
				cout << h << endl;
				break;
			}
	}
	
    return ;
}
signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    memset(a,0,sizeof(a));
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}
