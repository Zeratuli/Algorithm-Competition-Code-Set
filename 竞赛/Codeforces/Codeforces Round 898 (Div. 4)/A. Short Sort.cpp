#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;
string B = "bca";
string C = "cab";
void solve(){
    string A;
    cin >> A;
   	if(A == "abc" || A == "acb" || A == "bac" || A == "cba") cout << "YES" << endl;
    else cout << "NO" << endl;
    return ;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
    	solve();
    }


    return 0;
}
