#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;
int a[N];

void solve(){
	int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    	cin >> a[i];f
    }
    sort(a,a+t);
	a[0]++;
	int ans = 1;
	for(int i = 0; i < t; i++){
		ans *= a[i];
	}
	cout << ans << endl;

}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    memset(a,0,sizeof(a));

    int n;
    cin >> n;
    while(n--){
    	solve();
    }

    return 0;
}
