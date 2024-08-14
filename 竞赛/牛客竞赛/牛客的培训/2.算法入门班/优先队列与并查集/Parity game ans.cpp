#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>fa;
int find(int x){
    return x==fa[x]? x : fa[x]=find(fa[x]);
}
void merge(int x,int y){
    fa[find(x)]=find(y);
}
int main(){
    int len;cin>>len;
    int q,ans;cin>>q;ans=q;
    len++;
    for(int i=1;i<=q;i++){
        int x,y;cin>>x>>y;
        if(!fa.count(y))fa[y+len]=y+len,fa[y]=y;//一定要判断是否出现过
        if(!fa.count(x-1))fa[x+len-1]=x+len-1,fa[x-1]=x-1;//同上
        string s;cin>>s;
        if(s=="even"){
            if(find(x-1)==find(y+len)||find(x+len-1)==find(y)){//两个取一个即可，二者等价
                ans=i-1;
                break;
            }else{
                merge(x-1,y);
                merge(x-1+len,y+len);
            }
        }else{
           if(find(x-1)==find(y)||find(x-1+len)==find(y+len)){
               ans=i-1;
               break;
           }else{
               merge(x-1,y+len);
               merge(x-1+len,y);
           }
        }
    }
    cout<<ans<<endl;
    return 0;
}