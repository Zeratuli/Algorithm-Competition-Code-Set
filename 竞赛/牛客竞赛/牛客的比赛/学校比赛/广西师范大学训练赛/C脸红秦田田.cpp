#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

struct name{
	string name;
	int price;
}A[N];
string B[N];

int m,n;
int ans = 0;
int c[N];

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> A[i].name;
	for(int i = 1; i <= m; i++)
		cin >> B[i];
	for(int i = 0; i < m+1; i++)
		cin >> c[i];
	for(int i = 1; i <= n; i++)
		A[i].price = c[0];

	for(int i = 1; i <= n; i++){
		int jud = 0,j = 0;
		for(j = 0; j <= m; j++)
			if(A[i].name == B[j]){
				jud = 1;
				//cout << j << endl;
				break;
			}
		if(jud == 1)
			A[i].price = c[j];
	}

	for(int i = 1; i <= n; i++)
		ans += A[i].price;
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
