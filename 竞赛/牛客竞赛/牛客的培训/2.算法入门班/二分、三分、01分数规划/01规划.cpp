#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
int n,k;

struct ans1{
	int c,v;
	int s;
}ans[N];

bool comp(ans1 A, ans1 B){
	return A.s > B.s;
}

int judge(int mid){
	for(int i = 1; i <= n; i++){	
		ans[i].s = ans[i].v - mid*ans[i].c;
	}
	sort(ans+1,ans+1+n,comp);
	int ansc = 0,ansv = 0,anss = 0;
	for(int i = 1; i <= k; i++){
		anss += ans[i].s;
		ansc += ans[i].c;
		ansv += ans[i].v;
	}
	if(anss < 0) return -1;
	else return ansv/ansc;
}

void solve(){
	
	cin >> n >> k;
	for(int i = 1; i <= n ; i++)
		cin >> ans[i].c >> ans[i].v;
	int l = 0, r = 1e9;
	int ans = 0;
	while(l <= r){
		int mid = (l+r)>>1;
		int temp = judge(mid);
		if(temp == -1) r = mid-1;
		else{ 
			l = mid+1;
			ans = temp;
		}
	}
	cout << ans << endl;


	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
