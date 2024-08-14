#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='n')||(s[i]=='h'&&s[i+1]=='u'&&s[i+2]=='i'))
        {
            i+=2;
        }
        else cout<<s[i];
    }
    return ;
}

int main()
{
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}