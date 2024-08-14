#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

    int n,m;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		string type,name;
		queue<string> qu;
		map<string,bool> mp;
		int ans = 0;
		for(int i = 0; i < n; i++){
			cin >> type >> name;
			if(type == "in"){
				qu.push(name);
				mp[name] = false;
			}
			else{
				if(!qu.empty() && qu.front() == name){//name为出去的人，故总为最新的
					ans++;
//					cout << "!" << endl;
					qu.pop();
					while(!qu.empty()&&mp[qu.front()]){//mp内部为出去的人为false，但不是就为还没出的就不弹出去
//						cout << mp[qu.front()] << endl;
						qu.pop();
					}
				}
				else{
					mp[name] = true;
				}
			}
		}
		cout << ans << endl;
	}
	

	return 0;
}

