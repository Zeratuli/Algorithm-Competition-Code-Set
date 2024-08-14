#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

void solve(){
	int a,b,x,y;
	bool flag = false;
	int cnt = 0;
	cin >> a >> b >> x >> y;
	if((x-2*y)>0){
		flag = true;
	}
	if(flag == true){
		int ans2 = 0;
		int a0 = a;
		int b0 = b;
		while(a0>0){
			a0-=x;
			ans2++;
		}
		while(b0>0){
			b0-=x;
			ans2++;
		}
		int a1 = a%x;
		int a2 = b%x;
		a-=y;
		b-=y;
		cnt++;
		while(a>0){
			a-=x;
			cnt++;
		}
		while(b>0){
			b-=x;
			cnt++;
		}
		//cout << "No1" << endl;
		cnt = min(ans2,cnt);
	}
	else{
		if(x>y){
			//cout << "No2" << endl;
			while(a > 0 && b > 0){
				a-=y;
				b-=y;
				cnt++;
			}
			if(a>b){
				swap(a,b);
			}
			while(b>0){
				b-=x;
				cnt++;
			}
		}
		else{
			//cout << "No3" << endl;
			if(a>=b){
				while(a>0){
					a-=y;
					cnt++;
				}
			}
			else{
				while(b>0){
					b-=y;
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;

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
