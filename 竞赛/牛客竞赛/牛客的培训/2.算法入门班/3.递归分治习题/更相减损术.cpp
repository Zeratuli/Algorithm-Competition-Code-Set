#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int a,b,i = 0;

int solve(int a, int b){
    if(b -(a-b) == 0) return b;
    int temp1,temp2;
    if(a-b>b) temp1 = a-b,temp2 = b;
    else temp2 = a-b, temp1 = b;
    return solve(temp1,temp2);
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    cin >> a >> b;
    if(a < b) swap(a,b);
    int ans = solve(a,b);
    cout << ans << endl;



    return 0;
}