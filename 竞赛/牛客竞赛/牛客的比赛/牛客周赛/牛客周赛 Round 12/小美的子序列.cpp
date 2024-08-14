#include <bits/stdc++.h>
#define int long long
using namespace std;
//n,m:(1,1000)
struct ty{
	char ans;
	int len = 0;
}ty[8];

const int N = 1e2;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	ty[0].ans = 'm';
	ty[1].ans = 'e';
	ty[2].ans = 'i';
	ty[3].ans = 't';
	ty[4].ans = 'u';
	ty[5].ans = 'a';
	ty[6].ans = 'n';
	int t,n,m;
	int temp = 0;
		cin >> n >> m;
		char name[n+N][m+N];
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				cin >> name[j][k];
			}
		}
		int a,b;
		for(a = 0; a < n; a++)
			for(b = 0; b < m; b++){
				if(name[a][b] == ty[temp].ans){
					ty[temp].len = 1;
					temp++;
					break;
			}
		}
		temp = 0;
		int ans1 = 0;
		for(int j = 0; j < 7; j++){
			ans1 += ty[j].len;
			ty[j].len = 0;
		}
		if(ans1 == 7) cout << "YES" << endl;
		else cout << "NO"<< endl;
	return 0;
}

