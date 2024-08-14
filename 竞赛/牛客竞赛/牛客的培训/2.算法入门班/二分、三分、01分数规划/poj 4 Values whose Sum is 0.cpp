#include <iostream>
#include <algorithm>

using namespace std;

#define int long long

const int N = 4500;
const int mod = 1e9+7;

int a[N][6];
int b[N*N];
int c[N*N];
void solve(){
	int n,ans = 0,cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			b[cnt] = a[i][0] + a[j][1];
			c[cnt] = a[i][2] + a[j][3];
			//cout << b[cnt] << " " << c[cnt] << endl;
			cnt++;
		}
	}
	sort(b,b+cnt);
	for(int i = 0; i < cnt; i++){
		//cout << b[i] << " " << c[i] << endl;
		//cout << upper_bound(b,b+cnt,-c[i])-b << " || " << lower_bound(b,b+cnt,-c[i])-b << endl;
		//cout << upper_bound(b,b+cnt,-c[i]) - lower_bound(b,b+cnt,-c[i]) << endl;
		ans += upper_bound(b,b+cnt,-c[i]) - lower_bound(b,b+cnt,-c[i]);
		//cout << endl;
	}
	cout << ans << endl;


	return ;
}

signed main(void){

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
