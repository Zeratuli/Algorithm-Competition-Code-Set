#include<bits/stdc++.h>

using namespace std;

int jud[1000];
char s[1100000];
int ans= 10000000;

signed main()
{
    memset(jud,0,sizeof(jud));
    cin>>s;
    int cnt=0,j=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(jud[s[i]]==0&&cnt<26)
        {
                cnt++;
        }
        jud[s[i]]++;
        while(jud[s[j]]>1)
        {
            jud[s[j]]--;
            j++;
        }
        if(cnt==26)
        {
            ans=min(ans,i-j+1);
        }
    }
    cout<<ans;
            return 0;
}
