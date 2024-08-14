#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e4+1000;


void solve(){
    string A[N],B[N],C[N];
    int n,q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < q; i++){
        cin >> B[i];
    }
    for(int i = 0; i < n; i++){
        C[i] = "";
        for(int j = 0; j < A[i].length(); j++){
            if(A[i][j] >= 'A' && A[i][j] <= 'Z'){
                C[i] += A[i][j];
            }
        }
    }
    for(int i = 0; i < q; i++){
        int cnt = 0;
        int a[10000];
        int k = 0;
        for(int j = 0; j < n; j++){
            if(B[i] == C[j]){
                cnt++;
                a[k++] = j;
            }
        }
        cout << cnt << endl;
        for(int j = 0; j < cnt; j++){
            cout << A[a[j]] << endl;
        }

    }

    return ;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--){
        solve();
    }

    return 0;
}
