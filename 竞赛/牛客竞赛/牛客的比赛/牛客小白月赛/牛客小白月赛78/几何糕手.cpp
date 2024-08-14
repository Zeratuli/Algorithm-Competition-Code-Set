#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int a,b;
	cin >> a >> b;
	double c,ans = 0;
	c = double(a)+double(b);
	ans = c*c*3.141592653589793;
	printf("%.10lf",ans);



	return 0;
}

