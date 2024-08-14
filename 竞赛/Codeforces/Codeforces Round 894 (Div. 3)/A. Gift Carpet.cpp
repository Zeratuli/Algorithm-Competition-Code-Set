#include <bits/stdc++.h>
#define int long long
using namespace std;
//t:(1,100);n,m:(1,20)
struct ty{
	char ans;
	int len = 0;
}ty[4];

const int N = 1e2;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	ty[0].ans = 'v';
	ty[1].ans = 'i';
	ty[2].ans = 'k';
	ty[3].ans = 'a';
	int t,n,m;
	int temp = 0;
	cin >> t;
	while(t--){
		cin >> n >> m;
		char name[n+N][m+N];
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				cin >> name[j][k];
			}
		}
		int a,b;
		for(a = 0; a < m; a++)
			for(b = 0; b < n; b++){
				if(name[b][a] == ty[temp].ans){
					ty[temp].len = 1;
					temp++;
					break;
			}
		}
		temp = 0;
		int ans1 = 0;
		for(int j = 0; j < 4; j++){
			ans1 += ty[j].len;
			ty[j].len = 0;
		}
		if(ans1 == 4) cout << "Yes" << endl;
		else cout << "No"<< endl;
	}
	return 0;
}

