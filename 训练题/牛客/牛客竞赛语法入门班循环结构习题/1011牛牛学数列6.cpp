#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int ans = 0;
int fib(int n){
	int first = 0;
    int second = 1;
    int third = 1;
    if(n == 1) return first;
    if(n == 2) return second;
    if(n == 3) return third;
    int forth;
    for (int i = 4; i <= n; i++) {
        forth = first + 2*second + third;
        first = second;
        second = third;
        third = forth;
     }
     return forth;
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
