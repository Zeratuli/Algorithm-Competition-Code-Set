#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;


signed main(void){
	int n;
	while(cin >> n){
		for(int i = 1,j = n*2; i <= n+1; i++,j-=2){
			int temp1 = j,temp2 = i;
			while(temp1-- > 0) cout << " ";
			while(temp2-- > 0) cout << "*";
			cout << endl;
		}
		int k = 1;
		for(int i = n;i > 0; i--){
			int j = 2*k;
			int temp1 = j,temp2 = i;
			while(temp1-- > 0) cout << " ";
			while(temp2-- > 0) cout << "*";
			cout << endl;
			k++;
		}
	}
	return 0;
}
