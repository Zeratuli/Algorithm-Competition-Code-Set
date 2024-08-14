#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int A,B;

void solve(void){
    int ans = 0;
    ans = pow(A,B) + pow(B,A);
    cout << ans;
    return ;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    cin >> A >> B;
    solve();

    return 0;
}