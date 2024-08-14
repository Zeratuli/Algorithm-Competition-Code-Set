#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

string A,B;

void solve(){
	int a,b;
	int cnt1 = 0,ans1 = 0,ans2 = 0,cnt2 = 0;
	cin >> a >> b;
	cin >> A >> B;
	for(int i = 0; i < a; i++){
		if(A[i] == B[i]) cnt1++;
	}
	int j = 0;
	for(int i = b-a; i < b; i++)
		if(A[j++] == B[i]) cnt2++;
	if(cnt1 == a) ans1 = 1;
	if(cnt2 == a) ans2 = 1;
	if(ans1 && ans2) {cout << 0; return ;}
	else if(ans1){cout << 1; return ;}
	else if(ans2){cout << 2; return ;}
	else{cout << 3; return ;}

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
