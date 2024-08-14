#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;


char A[N];

void solve(){
	int cnt = 0;
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
    	cin >> A[i];
    }
    for(int i = 0; i < n; i++){
    	if(A[i] == 'B'){
    		int magic = i;
    		for(int j = i+k-1; j >= i; j--){
    			if(A[j] == 'B'){
    				cnt++;
    				i = j;
    				//cout << i << ":i" << endl;
    				break;
    			}
    		}

    	}
    }
    cout<< cnt << endl;

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
