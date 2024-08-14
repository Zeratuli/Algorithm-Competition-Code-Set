#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

void solve(){
    int a,b;
    cin >> a >> b;//输入数据
    string A = to_string(a), B = to_string(b);//将数字转化成字符串，方便按位运算取值
    int len1 = A.length(), len2 = B.length();
    int ans = INF;//定义一个无穷大值
    for(int i = 1; i < (1<<len1); i++){//(1<<len1)把所有可能出现的情况暴力枚举出来
        int x = 0;//这里是我们需要计算的新数的值
        for(int j = 0; j < len1; j++) if(1&(i>>j)) x = x*10 + (A[j]-'0');//按照01判断是否取A的某一位
        for(int j = 1; j < (1<<len2); j++){
            int y = 0;
            for(int k = 0; k < len2; k++){
                if(1&(j>>k)) y = y*10 + (B[k]-'0');//同A，取B的值
            }
            if(x==0||y==0)//若x或y为0则说明没进循环or那个数为0，防止mod0而进行判断
                ans=min(ans,len1-(int)__builtin_popcountll(i)+len2-__builtin_popcountll(j));
            else if(x%y==0 || y%x==0) //对变换后的数判断是否能被整除
                ans=min(ans,len1-(int)__builtin_popcountll(i)+len2-__builtin_popcountll(j));
                //__builtin_popcountll 是一个计算数中有多少个1的函数
        }
    }
    ans = (ans==INF)?-1:ans;//用一个三目运算符判断ans值
    cout << ans << endl;

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
