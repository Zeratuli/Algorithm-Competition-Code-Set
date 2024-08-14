#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int a[N];

void solve(){
	int ans = 6570;
	int b = 0,c = 0,j = 0;
    string A;
    cin >> A;
    for(int i = 0; i < 10; i++)
    	if(A[i] >= '0' && A[i] <= '9')
    		a[j++] = A[i]-'0';
    for(int i = 0; i < 4; i++){
    	b = b*10 + a[i];
    }
    for(int i = 0; i < 2; i++){
    	c = c*10 + a[i+5];
    }
    int d = a[4];
    
    for(int i = 0; i < 18; i++){

		if(b%4 == 0){
			ans++;
		}
		b++;
	}
	ans--;
	if((b%4 == 0) && (c == 29) && (d == 2))
    	ans = -1;

    cout << ans << endl;
	return ;
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin >> n;
    memset(a,0,sizeof(a));
    while(n--){
    	solve();
    }

    return 0;
}