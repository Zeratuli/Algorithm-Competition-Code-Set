#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5+1000;
const int mod = 1e9+7;


int a[N];

struct ans1{
	int x;
	int y;
	ans1(){}
	ans1(int x,int y):x(x),y(y){}
	bool operator<(const ans1 m)const{
		return y<m.y;
	}
}ans[N];

bool comp(ans1 A,ans1 B){
	return A.y > B.y;
}
bool comp2(ans1 A,ans1 B){
	return A.x > B.x;
}

void solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> ans[i].x >> ans[i].y;
		a[ans[i].x]++; 
	}
	sort(ans+1,ans+1+n,comp);
	int sum = 0,sum1 = 0;
	for(int i = 1; i <= n; i++)
		sum += lower_bound(ans+1,ans+n+1,ans[i],comp)-ans-1;
	sort(ans+1,ans+1+n,comp2);
	cout << endl;
	for(int i = 1; i <= n; i++){
		
		int t = lower_bound(ans+1,ans+n+1,ans[n],comp2)-ans+1;
		sum1 = n-t;
	}
	cout << endl;
	if(sum1 <= 0)
		sum += sum1;


	cout << sum << endl;
	
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
