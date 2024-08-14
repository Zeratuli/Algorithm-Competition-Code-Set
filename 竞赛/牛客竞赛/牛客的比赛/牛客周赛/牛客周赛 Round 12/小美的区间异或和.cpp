#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e5+1000;

int n;
int a[N];

void solve(void){
	int ans = 0;
    for(int i = 0; i < n; i++){
    	for(int j = i; j < n; j++){
    		ans = (ans+(a[i]^a[j]))%mod;
    	}
    }
    cout << ans;
    return ;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    solve();

    return 0;
}