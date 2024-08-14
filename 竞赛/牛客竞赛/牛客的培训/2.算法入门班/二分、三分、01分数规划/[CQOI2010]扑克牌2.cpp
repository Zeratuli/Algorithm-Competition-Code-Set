#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;
 int  num[60];
  ll n,m;

int check(int t){
    long long  temp=0;
    for(int i=1;i<=n;i++){
        temp+=max(t-num[i],0);//t-num[i]算的是差值：num[i]所需要的joker数
        
    }
    //cout << temp << " temp " << endl;
    if(temp<=m&&temp<=t){//不能一套牌全部为joker
            return 1;
        }
    return 0;
}

int main (){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>num[i];
    
    int l= 0,r=1e9;
    while(l<r){
        int mid = (l+r+1)>>1;
        if(check(mid))l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
    return 0;
}