#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int s1,s2,s3; //s1�Ǳ������ĳ��ȣ�s2�ǳ������ȣ�s3�����������ĳ���
int a[20005],b[20005],c[20005],tmp[20005];//a���汻������b���������c�����̣�tmp����ÿ�������ĳ���
void change(int w)//��b����w������tmp
{
    for(int i=1;i<=s2;i++)
    {
        tmp[w+i-1]=b[i];
    }
    s3=s2+w-1;
}
bool pd()//�жϱ������Ƿ���ڳ���
{
    if(s1<s3) return 0;
    if(s1>s3) return 1;
    for(int i=s1;i>=1;i--)
    {
        if(a[i]>tmp[i]) return 1;
        if(a[i]<tmp[i]) return 0;
    }
    return 1;
}
void jf()//�߾���
{
    for(int i=1;i<=s1;i++)
    {
        a[i]-=tmp[i];
        if(a[i]<0)
        {
            a[i]+=10;
            a[i+1]-=1;
        }
    }
    while(s1>1&&a[s1]==0)
    {
        s1--;
    }
}
int main()
{
    string x,y;
    cin>>x>>y;
    s1=x.length(),s2=y.length();
    if(s1<s2)
    {
        printf("0");//������������С�ڳ�����s1-s2<0,�����������Ҫ�ֶ����0
    }
    for(int i=0;i<s1;i++)
    {
        a[s1-i]=x[i]-'0';
    }
    for(int i=0;i<s2;i++)
    {
        b[s2-i]=y[i]-'0';
    }
        int lenc=s1-s2+1;
        for(int i=lenc;i>=1;i--)
        {
            memset(tmp,0,sizeof(tmp));
            change(i);
            while(pd())
            {
                jf();
                c[i]++;
            }
        }
        while(lenc>1&&c[lenc]==0)
        {
            lenc--;
        }
        for(int i=lenc;i>=1;i--)
        {
            printf("%d",c[i]);
        }
        return 0;
}
