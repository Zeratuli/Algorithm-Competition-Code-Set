#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int x,y,z,ans = 1,t = 0;


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    cin >> x >> y >> z;
    while(z >= 0){
    	z -= x;
    	if(t == 0) z -= y;
    	t++;
        //cout << "t = " << t <<  endl;
        if(t == 3) t = 0;
        //cout << z << endl;1 
        if(z <= 0) break;
    	ans++;
    }
    cout << ans << endl;

    return 0;
}