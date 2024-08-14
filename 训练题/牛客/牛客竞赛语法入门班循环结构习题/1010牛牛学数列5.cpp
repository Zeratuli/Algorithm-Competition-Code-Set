#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int ans = 0;
int fib(int n){
	if(n<=2) return 1;
	int first = 1;
    int second = 1;
    
    int third = 2;
    for (int i = 3; i <= n; i++) {
        third = first + second;
        first = second;
        second = third;
     }
     return third;
}


void solve(){
	int n;
	cin >> n;

	cout << fib(n) << endl;

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
