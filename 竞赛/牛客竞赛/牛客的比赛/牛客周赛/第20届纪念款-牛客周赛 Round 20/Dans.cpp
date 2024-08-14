#include <bits/stdc++.h>
using namespace std;
#define int long long

const int INF = 0x3f3f3f3f;
const int N = 1e6+100;
const int mod = 1e9+7;

void solve()
{
    int a,b; 
    cin>>a>>b;
    string x=to_string(a),y=to_string(b);
    int cnt1=x.size(),cnt2=y.size();
    int ans=INF;
    for(int i=1;i<1<<cnt1;i++){
        int v=0;
        for(int j=0;j<cnt1;j++){//每次把x的值遍历一遍，去看能否让y整除
            if(i>>j&1) v=v*10+(x[j]-'0');
            cout << (i>>j&1) << " " << v << endl;
        }
        
        for(int j=1;j<1<<cnt2;j++){
            int w=0;
            for(int k=0;k<cnt2;k++){//把y的值遍历
                 if(j>>k&1) w=w*10+(y[k]-'0');
             }
             // 防止mod0
             if(v==0 || w==0) ans=min(ans,cnt1-(int)__builtin_popcountll(i)+cnt2-__builtin_popcountll(j));
             else if(v%w==0 || w%v==0){
                 ans=min(ans,cnt1-(int)__builtin_popcountll(i)+cnt2-__builtin_popcountll(j));
             }
        }
    }
    cout<<(ans==INF ? -1 : ans)<<endl;
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
