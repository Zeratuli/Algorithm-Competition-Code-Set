#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	
	int T;
	cin >> T;
	while(T--){
		map<int,int> mp;
		int n,m;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			mp[a]++;
		}
		for(int i = 0; i < m; i++){
			int b;
			cin >> b;
			mp[b] = -1;
		}
		map<int,int>::iterator it;
		int com = 0,ans = 0;
		for(it = mp.begin(); it != mp.end(); it++){
			if(it->second == -1){
				ans = max(ans,com);
				com = 0;
			}
			else
				com += it->second;
		}
		ans = max(ans,com);
		if(ans == 0)
			cout << "Impossible" << endl;
		else
			cout << ans <<  endl;
 	}
	
	return 0;
}

