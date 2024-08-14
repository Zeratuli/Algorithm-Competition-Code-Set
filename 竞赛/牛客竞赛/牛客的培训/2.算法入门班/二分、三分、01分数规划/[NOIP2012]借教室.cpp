#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

int r[N];
int n,m;
struct ty{
	int d;
	int s;
	int t;
}A[N];

long long delta[N];

bool judge(int mid){
	for(int i = 1; i <= n; i++)
		delta[i] = r[i] - r[i-1];
	for(int i = 1; i <= mid; i++){
		delta[A[i].s] -= A[i].d;
		delta[A[i].t+1] += A[i].d;
	}
	long long sum = 0;
	for(int i = 0; i<= n; i++){
		sum += delta[i];
		if(sum<0) return false;
	}
	return true;
}

void solve(){


	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> r[i];
	for(int i = 1; i <= m; i++)
		cin >> A[i].d >> A[i].s >> A[i].t;
	long long l = 0, r = m;

	while(l<=r){
		long long mid = (l+r)/2;
		//cout << "mid: " << mid << endl; 
		if(judge(mid)) l = mid +1;
		else r = mid - 1;
		//cout << "l: " << l << " r: " << r << endl;
	}



	if(l > m) cout << "0" << endl;
	else{
		cout << "-1" << endl;
		cout << l << endl;
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
