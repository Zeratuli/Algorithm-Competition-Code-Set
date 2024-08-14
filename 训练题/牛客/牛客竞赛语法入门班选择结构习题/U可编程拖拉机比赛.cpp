#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int n;
    cin>>n;
    int a = abs(floor(n*0.1) - ceil(n*0.1));
    int b = abs(floor(n*0.2) - ceil(n*0.2)) + a;
    int c = abs(floor(n*0.3) - ceil(n*0.3)) + b;
    cout << a << " " << b << " " << c << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
