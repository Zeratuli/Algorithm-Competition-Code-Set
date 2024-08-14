#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(string N){
	int ans = 0;
	for(int i = 0; i < N.length(); i++){
		ans += N[i] - '0';	
	}
	if(ans < 10) return ans;
	else{
		string B;
		B = to_string(ans);	
		return solve(B);	
	}
}


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string N;
	cin >> N;
	int ans = solve(N);
	cout << ans << endl;
	
	return 0;
}

