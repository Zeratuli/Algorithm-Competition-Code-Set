#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int cnt=0;
    sort(nums.begin(), nums.end(),greater<int>());
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
    return 0;
}
