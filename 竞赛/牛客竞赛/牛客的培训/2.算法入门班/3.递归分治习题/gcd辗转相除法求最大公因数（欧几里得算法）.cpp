#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a%65536;

	return gcd(b,a%b)%65536;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);

	return 0;
}

