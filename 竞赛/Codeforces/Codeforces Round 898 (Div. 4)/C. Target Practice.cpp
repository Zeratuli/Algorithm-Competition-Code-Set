#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

void solve(){
    char A[10][10];
    int ans = 0;
    for(int i = 0; i < 10; i++){
    	for(int j = 0; j < 10; j++){
    		cin >> A[i][j];
    		if(A[i][j] == 'X'){
    			if(i == 0 || i == 9 || j == 0 || j == 9)
    				ans += 1;
    			else if(i == 1 && j > 0 && j < 9 || i == 8 && j > 0 && j < 9 || j == 1 && i > 0 && i < 9 || j == 8 && i > 0 && i < 9)
    				ans += 2;
    			else if(i == 2 && j > 1 && j < 8 || i == 7 && j > 1 && j < 8 || j == 2 && i > 1 && i < 8 || j == 7 && i > 1 && i < 8)
    				ans += 3;
    			else if(i == 3 && j > 2 && j < 7 || i == 6 && j > 2 && j < 7 || j == 3 && i > 2 && i < 7 || j == 6 && i > 2 && i < 7)
    				ans += 4;
    			else
    				ans += 5;
    		}
    	}
    }
    cout << ans << endl;
    return ;

}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
    	solve();
    }

    return 0;
}

