#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int N = 1e6+100;
const int mod = 1e9+7;
int a[1000000],b[1000000];
bool judge(){
	if(b[])
}

void solve(){
	int L,N,M,j = 0;
	cin >> L >> N >> M;
	if(M>=N) {cout << L; return ;}

	for(int i = 1; i <= N; i++){
		cin >> a[i];
		if(i == 1) b[j++] = a[i];
		else b[j++] = a[i]-a[i-1];
	}
	b[j++] = L-a[N];
	sort(b,b+j);
	int mid = (l+r)>>1;
	while(l<r){
		if(judge()) r = mid+1;
		else l = mid-1;
	}
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
