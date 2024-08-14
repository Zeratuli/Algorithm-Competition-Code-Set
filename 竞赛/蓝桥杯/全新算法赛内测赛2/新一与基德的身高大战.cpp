#include <bits/stdc++.h>
#define int long long
using namespace std;

int sum = 0,n1 = 0, n2 = 0;

void solve(int T){
	int a,b;
	for(int i = 0; i < T; i++){
		cin >> a;
		if(a%2==0) n1++;
		sum += a;
	}
	for(int i = 0; i < T; i++){
		cin >> b;
		if(b%2==0) n2++;
		sum += b;
	}
	cout << (sum-abs(n1-n2))/2 << endl;
	
	return ;	
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int N;
	cin >> N;
	solve(N);

	return 0;
}

