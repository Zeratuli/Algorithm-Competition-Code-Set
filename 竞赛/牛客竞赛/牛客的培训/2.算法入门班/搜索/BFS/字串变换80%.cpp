#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
string a[N], b[N];
string A,B;
int dis[N];
queue<int> q;
string rec[N];
int n = 1;
int cnt = 1;
map<string, int> mp;

bool bfs(string A, string B){
	q.push(1);
	dis[1] = 0;
	rec[1] = A;
	mp[A] = 1;

	while(!q.empty()){
		if(dis[cnt] == 10) return 1;
		int temp = q.front();
		q.pop();
		string D = rec[temp];
		for(int i = 1; i <= n; i++){
			string C = D;
			//cout << C << " " << a[i] << endl;
			int now = C.find(a[i]);
			//cout << i << " " << now << endl;
			if(now != string::npos){
				C.erase(now,a[i].length());
				C.insert(now,b[i]);
				cout << C << endl;
				if(mp.find(C) != mp.end()) continue;//当没找到时会返回mp.end()，因此这里是指之前出现过
				mp[C] = ++cnt;
				rec[cnt] = C;
				dis[cnt] = dis[temp]+1;
				cout << dis[cnt] << endl;
				if(C == B) return 0;
				q.push(cnt);
			}
		}
	}
	return 1;
}

void solve(){
	cin >> A >> B;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
		//cout << a[i] << " " << b[i] << i << endl;
	}
	//while(cin >> a[n] >> b[n]) n++;
	if(bfs(A,B)) cout << "NO ANSWER!" << endl;
	else {
		//for(int i = 1; i <= n; i++){
			//cout << dis[mp[rec[i]]] << " " << i << endl;
		//}
		cout << dis[mp[B]] << endl;
	}
	return ;
}

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}

	return 0;
}