#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e7+1000;
const int mod = 1e9+7;

int a[N];

void solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1)continue;
		else cout << i << endl;
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	memset(a,0,sizeof(a));
	int j = 1;
	while(j <= 100000) {
		if(j%4==0)
			a[j] = 1;
		j++;
	}
	for(int i = 1; i <= 100000; i++){
		if(a[i] == 1) continue;
		else{
			int temp = i;
			while(temp){
				int cmp = temp % 10;
				if(cmp == 4){a[i] = 1; break;}
				temp /= 10;
			}
		}
	}

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
