#include <bits/stdc++.h>
#define int long long
using namespace std;

#define pi 3.1415926
double C,S,r;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	C = 10.2;
	r = C/(2.0*pi);
	S = pi*r*r;
	printf("%.2f",S);



	return 0;
}

