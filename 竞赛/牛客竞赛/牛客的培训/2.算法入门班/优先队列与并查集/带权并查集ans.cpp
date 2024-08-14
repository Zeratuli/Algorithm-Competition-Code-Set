#include<string.h>
#include<stdio.h>
#include<algorithm>
 
using namespace std;
 
int fa[30500];// 存节点
int a[30500];// 以该节点为父节点的节点一共有几个
int b[30200];// 该节点到其父节点的距离
 
int find(int x)
{// 整个程序的核心算法 递归用的真是666666
    if(fa[x]!=x)
    {
        int s=fa[x];// 将其上一个节点的值付给s
        fa[x]=find(fa[x]);
        a[x]+=a[s];//x到其祖先节点的值等于他到他父节点的值加
                  //上起父节点到其祖先节点的距离
    }
    return fa[x];
}
 
void jion(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
        a[yy]+=b[xx];//因为把yy的父节点接到xx的父节点后面了
        b[xx]+=b[yy];//所以yy到最终祖先节点的距离等于他到本来的祖先的距离
    }  //加上xx到其祖先节点的距离，此时新的祖先节点的子孙
}   //数量等于 以前 xx 的子孙加上 yy 的祖孙；
 
int main()
{
    int n,x,y;
    char c;
    scanf("%d",&n);
        for(int i=1;i<=30009;i++)
        {
            a[i]=0;//自己到自己的距离为0；
            b[i]=1;//刚开始的时候每个节点都是一个祖先节点包含自己所以为1；
            fa[i]=i;//第i个值为自己方便以后找祖先节点
        }
        while(n--)
        {
            scanf(" %c",&c);
            if(c=='M')
            {
                scanf("%d%d",&x,&y);
                jion(x,y);
            }
            else {
                scanf("%d",&x);
                int s=find(x);//查找 x的祖先节点
                printf("%d\n",b[s]-a[x]-1);
            }// x 下面的节点等于总结点数减去x到祖先节点的个数
        }
    return 0;
}