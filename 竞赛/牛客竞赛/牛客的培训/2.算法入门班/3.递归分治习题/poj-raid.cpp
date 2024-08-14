#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

struct crt{
	int x;
	int y;
}pos1[N];
struct agent{
	int x;
	int y;
}pos2[N];

void solve(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> pos1[i].x;
		cin >> pos1[i].y;
		//cout << pos1[i].x << " " << pos1[i].y << endl;
	}
	for(int i = 0; i < n; i++){
		cin >> pos2[i].x;
		cin >> pos2[i].y;
		//cout << pos2[i].x << " " << pos2[i].y << endl;
	}



	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
//	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
