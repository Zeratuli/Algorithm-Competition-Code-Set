#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6 + 100;
const int mod = 1e9 + 7;

void solve() {
    string A,B;
    int ans = 0;
    cin >> A;
    B = A;
    int len = A.length();
    for(int i = 0; i < len; i++){
        if(A[i] == '?'){
            A[i] = '1';
        }
    }
    int a = 0,b;
    for(int i = 0; i < len-1; i++){
        b = i;
        if(A[i] != A[i+1]){
            ans = max(ans,b-a+1);
            a = i+1;
        }
    }
    b++;
    ans = max(ans,b-a+1);
    a = 0;
    //cout << A << endl;
    for(int i = 0; i < len; i++){
        if(B[i] == '?'){
            B[i] = '0';
        }
    }
    for(int i = 0; i < len-1; i++){
        b = i;
        if(B[i] != B[i+1]){
            ans = max(ans,b-a+1);
            a = i+1;
        }
    }
    b++;
    ans = max(ans,b-a+1);
    a = 0;
    cout << ans << endl;
    return;
}

signed main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
