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
				if(!qu.empty() && qu.front() == name){//nameΪ��ȥ���ˣ�����Ϊ���µ�
					ans++;
//					cout << "!" << endl;
					qu.pop();
					while(!qu.empty()&&mp[qu.front()]){//mp�ڲ�Ϊ��ȥ����Ϊfalse�������Ǿ�Ϊ��û���ľͲ�����ȥ
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

