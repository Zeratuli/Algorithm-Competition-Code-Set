#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--){
    int n,p;cin>>n>>p;int m[n];
    for(int &e:m)cin>>e;sort(m,m+n,greater<int>());
    for(int x=0;x<n;++x){
      int sum =0,nx,h;
      for(int y=x+1;y<n;++y)sum+=m[x]-m[y];
      if(sum<=p){nx=p-sum;h=m[x]+nx/(n-x);cout<<h<<endl;break;}
    }
  }
}
