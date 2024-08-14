#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e5+1000;

int k,n,sum = 0;
int a[N];

void solve(void){
    sort(a,a+k);
    int temp = k-2;

    for(int i = 0; i < n; i++){
        a[k-1] = (a[k-1]%mod)*(a[temp]%mod)%mod;
        a[temp] = 1;
        temp--;
        cout << a[k-1] << " " << temp << endl;
    }
    for(int i = 0; i < k; i++){
        sum += (a[i]%mod);
    }
    cout << sum;

    return ;
    
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
 	cin >> k >> n;
 	for(int i = 0; i < k; i++){
 		cin >> a[i];
 	}
    solve();
    

    return 0;
}
