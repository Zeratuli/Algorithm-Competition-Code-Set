#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
int a[N];

void solve(){

    int b;
    cin >> b;
    for(int i = 0; i < b; i++)
        cout << a[i] << " ";
    cout << endl;
    return ;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    a[0] = 2;a[1] = 3;
    for(int i = 2; i <= N; i++){
        a[i] = a[i-1]+1;
        while((a[i]*3)%(a[i-2]+a[i-1])==0)a[i]++;
    }
    cin >> t;
//    t = 1;
    while(t--){
        solve();
    }

    return 0;
}
