#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a[N];
set<int> st;

void solve(){
    int n;
    cin >> n;
    int a1;
    for(int i = 0; i < n; i++){
        cin >> a1;
        int sizee = st.size();
        st.insert(a1);
        if(st.size() != sizee){
            a[i] = a1;
        }
    }

    sort(a,a+n);
    for(int i = 0; i < n; i++){
        if(a[i] == 0) continue;
        cout << a[i] << " ";
    }
    cout << endl;
    return ;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}