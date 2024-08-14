#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

multiset<string> st;

void solve(){
    string A;
    cin >> A;
    int len = A.length();
    for(int i = 0, j = 1; i < len && j < len; i++, j++){
        string B;
        B += A[i];
        B += A[j];
        st.insert(B);
    }
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << endl;
    }
    return;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
