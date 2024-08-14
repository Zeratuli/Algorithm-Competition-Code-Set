#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int a1[N],b1[N];

void solve(){
	int a,b;
	cin >> a >> b;
	for(int i = 1; i <= b; i++)
		cin >> b1[i];
	int cnt = 0,j = b;
	for(int i = a; i >= 1; i--){
		cnt++;
		if(i == b1[j]) {a1[i] = 0;cnt = 0;j--;}
		else a1[i] += cnt;
	}
	cout << endl;
	for(int i = 1; i <= a; i++){
		cout << a1[i] << endl;
	}

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
