#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;

void solve(){
    int n, k;
    cin >> n >> k;
    int nums[N];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int cnt=0;
    sort(nums, nums+n,greater<int>());
    int j;
    for(int i=0;i<n;++i){
        int num=1,sum=0,tem=0;
        for(j=i;j<n&&sum<k;++j){
            sum+=nums[j]*num;
            if(sum<=k){
                tem++;
            }else{
                break;
            }
            num*=2;
        }
        cnt=max(cnt,tem);
    }
    cout<<cnt;

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
