#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

vector<int> ve1,ve2;

void solve(){
	int n,a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		ve1.push_back(a);
	}
	int b = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		b = max(b,a);
		ve2.push_back(a);
	}
	sort(ve1.begin(),ve1.end(),greater<int>());
	sort(ve2.begin(),ve2.end(),greater<int>());
	for(int i = 0; i < n; i++){
		cout << ve1[i] << " " << ve2[i] << endl;
	}
	if(ve1[n/2] > ve2[n/2]){
		for(int i = 0,j = n-1; i < n/2; i++,j--){
			ve1[j] = ve2[i];
			ve2[i] = ve1[j];
		}
	}
	else if(ve1[n/2] <= ve2[n/2]){
		for(int i = 0,j = n-1; i < n/2; i++,j--){
			ve2[j] = ve1[i];
			ve1[i] = ve2[j];
		}
	}
	for(int i = 0; i < n; i++){
		cout << ve1[i] << " " << ve2[i] << endl;
	}
	int ans1 = 1, ans2 = 1, ans = 0;
	for(int i = 0; i < n; i++){
		ans1 *= ve1[i];
		cout << ans1 << endl;
	}
	for(int i = 0; i < n; i++){
		ans2 *= ve2[i];
		cout << ans2 << endl;
	}
	ans = ans1 + ans2;
	cout << ans << endl;

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
