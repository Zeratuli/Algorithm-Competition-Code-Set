#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,ans = 0;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin >> A[i];
	int a,b;
	a = b = A[0];
	for(int i = 0; i < n; i++){
		if(a > A[i])
			a = A[i];
		if(b < A[i])
			b = A[i];
	}
	ans = b-a;
	cout << ans << endl;

	return 0;
}

