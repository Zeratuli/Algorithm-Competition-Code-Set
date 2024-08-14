#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

void solve(int n){
   if(n == 1) return 1;
   cout << n;
   return solve(n-1);
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n = 1;
    for(int i = 0; i <= n; i++){
    	cout << solve(n) << n << solve(n) << endl;
    }


    return 0;
}