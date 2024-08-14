#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

stack<int> st;
int a[N],b[N];

void solve(){
	int n;
	cin >> n;
	int re = n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = n-1; i >= 0; i--)
		b[i] = max(b[i+1],a[i]);
	for(int i = 0; i < n; i++){
		st.push(a[i]);
		while(!st.empty() && st.top() > b[i+1]){
			cout << st.top() << " ";
			st.pop();
		}
	}

	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	t = 1;
	while(t--){
		solve();
	}

	return 0;
}
