#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 366000;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;

string A,ANS = "12345678x";
int dir[4][2] = {{0,1},{0,-1},{-1,0},{1,0}};
const char d[4] = {'r','l','u','d'};
int cnt;
queue<int> q;
map<string,int> mp;
string a[N];
int vis[N];
int last[N];
char from[N];

bool bfs(string A, string ANS){
	vis[1] = 1;
	cnt = 1;
	mp[A] = 1;
	q.push(1);
	a[1] = A;
	//cout << A << endl;
	while(!q.empty()){
		int tmp = q.front();
		string cur = a[tmp];
		q.pop();
		int w = a[tmp].find('x');
		int x = w/3;
		int y = w%3;
		//cout << " " << tmp << endl;
		for(int i = 0; i < 4; i++){
			int dx = dir[i][0] + x;
			int dy = dir[i][1] + y;
			// cout << dx << " " << dy << endl;
			if(dx >= 3 || dy >= 3 || dx < 0 || dy < 0) 
				continue;
			string nxt = cur;
			swap(nxt[w],nxt[dx*3+dy]);
			//cout << " " << nxt << endl;
			if(mp.find(nxt) != mp.end()) continue;
			mp[nxt] = ++cnt;
			a[cnt] = nxt;
			vis[cnt] = 1;
			last[cnt] = tmp;
			from[cnt] = d[i];
			if(nxt == ANS) return 1;
			q.push(cnt);
		}
	}
	return 0;
}

void dfs(int x){
	if(last[x] != 0){
		dfs(last[x]);
		cout << from[x];
		return ;
	}
}

void solve(){
	for(int i = 1; i <= 9; i++){
		char a;
		cin >> a;
		A += a;
	}
	if(bfs(A,ANS) == 0) cout << "unsolvable";
	else dfs(mp[ANS]);
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
